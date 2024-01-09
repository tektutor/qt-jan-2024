#include "maindlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainDialog mainDlg;
    mainDlg.show();
    return a.exec();
}
