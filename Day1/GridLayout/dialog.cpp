#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Grid Layout Demo");
    resize(500,200);

    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    //pBttn3 = new QPushButton("Button 3");

    pBttn4 = new QPushButton("Button 4");
    pBttn5 = new QPushButton("Button 5");
    //pBttn6 = new QPushButton("Button 6");

    pBttn7 = new QPushButton("Button 7");
    //pBttn8 = new QPushButton("Button 8");
    //pBttn9 = new QPushButton("Button 9");

    pBttn5->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    QPalette pal = pBttn5->palette();
    pal.setColor(QPalette::Button, QColor(Qt::green));
    pBttn5->setAutoFillBackground(true);
    pBttn5->setPalette(pal);
    pBttn5->update();

    pal = pBttn2->palette();
    pal.setColor(QPalette::Button, QColor(Qt::blue));
    pBttn2->setAutoFillBackground(true);
    pBttn2->setPalette(pal);
    pBttn2->update();

    pLayout = new QGridLayout;

    //First Row
    pLayout->addWidget(pBttn1, 0, 0 ); //First Row, First Column
    pLayout->addWidget(pBttn2, 0, 1, 1, 2); //First Row, Second and Third Column
    //pLayout->addWidget(pBttn3, 0, 2 ); //First Row, Third Column

    //Second Row
    pLayout->addWidget(pBttn4, 1, 0 ); //Second Row, First Column
    pLayout->addWidget(pBttn5, 1, 1, 2,2 ); //Second and Third Rows, Second and Third Columns
    //pLayout->addWidget(pBttn6, 1, 2 ); //Second Row, Third Column

    //Third Row
    pLayout->addWidget(pBttn7, 2, 0 ); //Third Row, First Column
    //pLayout->addWidget(pBttn8, 2, 1 ); //Third Row, Second Column
    //pLayout->addWidget(pBttn9, 2, 2 ); //Third Row, Third Column

    setLayout ( pLayout );
}

Dialog::~Dialog() {}
