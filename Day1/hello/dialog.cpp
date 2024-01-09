#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Hello Qt !");
    qDebug() << "Hello Qt !";
}

Dialog::~Dialog() {}
