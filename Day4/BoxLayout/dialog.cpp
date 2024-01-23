#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle ("QPointer demo");

    QPointer<QBoxLayout> pLayout
        = new QBoxLayout(QBoxLayout::LeftToRight);

    QPointer<QPushButton> ptrBttn1
        = new QPushButton("Button 1");


    QPointer<QPushButton> ptrBttn2
        = new QPushButton("Button 2");

    QPointer<QPushButton> ptrBttn3
        = new QPushButton("Button 3");


    pLayout->addWidget( ptrBttn1 ) ;
    pLayout->addWidget( ptrBttn2 ) ;
    pLayout->addWidget( ptrBttn3 ) ;

    setLayout( pLayout );
}

Dialog::~Dialog() {}
