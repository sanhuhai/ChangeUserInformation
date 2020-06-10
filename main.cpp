#include "ChangeUserInformation.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChangeUserInformation w;
    w.show();
    return a.exec();
}
