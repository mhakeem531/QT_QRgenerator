#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui>
#include <QtCore>
#include <QPainter>
#include <QPixmap>
#include <QPainterPath>
#include <QTableWidget>
#include <QComboBox>
#include <QLabel>
#include <QFileDialog>
#include <QDialogButtonBox>
#include <QMessageBox>
#include"/media/hakeem/E0B0208BCCFEC4FF/FORTH-YEAR/PROJECT/Demos/QRgenerator/libraries/cpp/QrCode.hpp"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    //after that the whole path will be
    // file_path + /file_name
    QString statue_code;
    QString file_name;
    QString file_directory;
    QComboBox *fileComboBox;
    QComboBox *createComboBox(const QString &text = QString());

protected:
    void paintQR(QPainter &painter, const QSize sz, const QString &data,QString complete_file_path, QColor fg, QPixmap &pixmap);

private slots:
    void browse();
    void generate_qr_code_button_click();
    void on_generate_QR_code_file_clicked();
};

#endif // DIALOG_H
