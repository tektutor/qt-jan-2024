#include <QApplication>
#include "mydlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyDlg dlg;
    dlg.show();

    return a.exec();
}
