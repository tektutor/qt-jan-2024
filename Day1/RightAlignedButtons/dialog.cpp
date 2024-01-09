#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Box Layout with right aligned buttons");
    resize(500,100);

    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");

    pLayout = new QBoxLayout(QBoxLayout::LeftToRight);

    //This will consume all the extra width when window width increases
    //forcing all the buttons retain its original size even when extra width is available
    pLayout->addStretch();

    pLayout->addWidget(pBttn1);
    pLayout->addWidget(pBttn2);
    pLayout->addWidget(pBttn3);

    setLayout(pLayout);

}

Dialog::~Dialog() {}
