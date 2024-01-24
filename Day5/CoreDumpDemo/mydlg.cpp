#include "mydlg.h"

MyDlg::MyDlg() {

    setWindowTitle("Core Dump Demo");

    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");

    //When the line below or any button above isn't allocated
    //memory, this would lead to application crash - core dump
    //pLayout = new QHBoxLayout;

    pLayout->addWidget ( pBttn1 );
    pLayout->addWidget ( pBttn2 );
    pLayout->addWidget ( pBttn3 );

    setLayout ( pLayout );
}
