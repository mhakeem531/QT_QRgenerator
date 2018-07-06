#include "dialog.h"
#include <QApplication>
#include "/media/hakeem/E0B0208BCCFEC4FF/FORTH-YEAR/PROJECT/Demos/QRgenerator/libraries/cpp/QrCode.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
