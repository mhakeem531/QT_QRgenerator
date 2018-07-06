/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *files_browser_button;
    QLineEdit *statu_name_line_edit;
    QLabel *label_2;
    QLineEdit *directory_path;
    QLabel *label;
    QLineEdit *file_nameLineEdit;
    QLabel *label_3;
    QPushButton *generate_QR_code_file;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(568, 395);
        Dialog->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        files_browser_button = new QPushButton(Dialog);
        files_browser_button->setObjectName(QStringLiteral("files_browser_button"));
        files_browser_button->setStyleSheet(QLatin1String("font: 75 italic 16pt \"URW Bookman L\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 255, 102, 255), stop:0.55 rgba(255, 130, 130, 208), stop:1 rgba(0, 0, 0, 255));\n"
"color: rgb(253, 6, 48);"));

        gridLayout->addWidget(files_browser_button, 2, 2, 1, 1);

        statu_name_line_edit = new QLineEdit(Dialog);
        statu_name_line_edit->setObjectName(QStringLiteral("statu_name_line_edit"));
        statu_name_line_edit->setStyleSheet(QLatin1String("font: italic 16pt \"URW Bookman L\";\n"
"background-color: rgb(246, 10, 60);\n"
"border-color: rgb(78, 154, 6);"));

        gridLayout->addWidget(statu_name_line_edit, 0, 1, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 75 italic 17pt \"URW Bookman L\";\n"
"color: rgb(164, 0, 0);"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        directory_path = new QLineEdit(Dialog);
        directory_path->setObjectName(QStringLiteral("directory_path"));
        directory_path->setStyleSheet(QLatin1String("font: italic 16pt \"URW Bookman L\";\n"
"background-color: rgb(246, 10, 60);\n"
"border-color: rgb(78, 154, 6);"));

        gridLayout->addWidget(directory_path, 2, 1, 1, 1);

        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 75 italic 17pt \"URW Bookman L\";\n"
"color: rgb(164, 0, 0);\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        file_nameLineEdit = new QLineEdit(Dialog);
        file_nameLineEdit->setObjectName(QStringLiteral("file_nameLineEdit"));
        file_nameLineEdit->setStyleSheet(QLatin1String("font: italic 16pt \"URW Bookman L\";\n"
"background-color: rgb(246, 10, 60);\n"
"border-color: rgb(78, 154, 6);"));

        gridLayout->addWidget(file_nameLineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 75 italic 17pt \"URW Bookman L\";\n"
"color: rgb(164, 0, 0);"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        generate_QR_code_file = new QPushButton(Dialog);
        generate_QR_code_file->setObjectName(QStringLiteral("generate_QR_code_file"));
        generate_QR_code_file->setStyleSheet(QLatin1String("font: 75 italic 16pt \"URW Bookman L\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 255, 102, 255), stop:0.55 rgba(255, 130, 130, 208), stop:1 rgba(0, 0, 0, 255));\n"
"color: rgb(253, 6, 48);"));

        gridLayout->addWidget(generate_QR_code_file, 3, 1, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        files_browser_button->setText(QApplication::translate("Dialog", "Browse...", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "path to QR code: ", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">statue code : </p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">file name</p></body></html>", Q_NULLPTR));
        generate_QR_code_file->setText(QApplication::translate("Dialog", "Generate QR ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
