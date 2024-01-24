#include "mydlg.h"

MyDlg::MyDlg() {

    setWindowTitle("Qt Widgets HMI");

    QPointer pBttn = new QPushButton("Click Me");

    QPointer pLayout = new QHBoxLayout;

    pLayout->addWidget(pBttn);

    setLayout ( pLayout );

    connect (
        pBttn,
        SIGNAL( clicked() ),
        this,
        SLOT( onButtonClicked() )
    );
}

void MyDlg::onButtonClicked() {
    qDebug() << "C++ emitted buttonClicked signal";
    emit buttonClicked();
}
