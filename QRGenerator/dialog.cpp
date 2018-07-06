#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

   // this->setWindowFlags(Qt::FramelessWindowHint); //Makes the frame invisible

    this -> setWindowTitle("Qr code generator");

    this->setFixedSize(this->size());

    this->setWindowFlags(this->windowFlags() | Qt::MSWindowsFixedSizeDialogHint);

    connect(ui->files_browser_button, &QAbstractButton::clicked, this, &Dialog::browse);
}

Dialog::~Dialog()
{
    delete ui;
}

//QComboBox *Dialog::createComboBox(const QString &text)
//{
//    QComboBox *comboBox = new QComboBox;
//        comboBox->setEditable(true);
//        comboBox->addItem(text);
//        comboBox->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
//        return comboBox;
//}






void Dialog::paintQR(QPainter &painter, const QSize sz, const QString &data,
                     QString complete_file_path, QColor fg, QPixmap &pixmap)
{
    char *str=data.toUtf8().data();
    qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(str, qrcodegen::QrCode::Ecc::LOW);
    const int s=qr.size>0?qr.size:1;
    const double w=sz.width();
    const double h=sz.height();
    const double aspect=w/h;
    const double size=((aspect>1.0)?h:w);
    const double scale=size/(s+2);
    painter.setPen(Qt::NoPen);
    painter.setBrush(fg);
    for(int y=0; y<s; y++) {
        for(int x=0; x<s; x++) {
            const int color = qr.getModule(x, y);  // 0 for white, 1 for black
            if(0x0!=color) {
                const double rx1=(x+1)*scale, ry1=(y+1)*scale;
                QRectF r(rx1, ry1, scale, scale);
                painter.drawRects(&r,1);
            }
        }
    }
    pixmap.save(complete_file_path);
}











void Dialog::browse()
{
    QString directory =
            QDir::toNativeSeparators(QFileDialog::getExistingDirectory(
                                         this, tr("Find Files"), QDir::currentPath()));

    ui-> directory_path -> setText(directory);
    this -> file_directory = directory;
    if(file_directory.isEmpty()){
        QMessageBox msgBox;
        msgBox.setWindowTitle("incomplete info");
        msgBox.setText("plze,specify a correct directory path for the file");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int ret = msgBox.exec();
        qDebug() << ret;
    }
}

void Dialog::generate_qr_code_button_click()
{
    ui -> generate_QR_code_file -> animateClick();

}




















void Dialog::on_generate_QR_code_file_clicked()
{
    this -> statue_code = ui -> statu_name_line_edit -> text();
    this -> file_name = ui -> statu_name_line_edit -> text();

    if(statue_code.isEmpty() || file_name.isEmpty()){
        QMessageBox msgBox;
        msgBox.setWindowTitle("incomplete info");
        msgBox.setText("plze,specify completed information");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int ret = msgBox.exec();
        qDebug() << ret;
    }else if(file_directory.isEmpty()){
        QMessageBox msgBox;
        msgBox.setWindowTitle("incomplete info");
        msgBox.setText("plze,specify a correct directory path for the file");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int ret = msgBox.exec();
        qDebug() << ret;
    }else{
        QString file_extention = ".png";
        QString complte_file_path = file_directory + "/" + file_name + file_extention;
        QPixmap pixmap( 200, 200 );
        pixmap.fill( Qt::white );
        QSize t1(200, 200);
        QPainter painter(&pixmap);
        paintQR(painter,t1, statue_code, complte_file_path, QColor(0, 0, 0, 220), pixmap);

    }
}
