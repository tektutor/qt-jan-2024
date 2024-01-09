#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");

    pLayout = new QHBoxLayout;

    pLayout->addWidget(pBttn1);
    pLayout->addWidget(pBttn2);
    pLayout->addWidget(pBttn3);

    setLayout(pLayout);

    pSignalMapper = new QSignalMapper;

    pSignalMapper->setMapping(pBttn1,"Button 1");
    pSignalMapper->setMapping(pBttn2,"Button 2");
    pSignalMapper->setMapping(pBttn3,"Button 3");

    connect (
        pBttn1,
        SIGNAL( clicked() ),
        pSignalMapper,
        SLOT( map())
    );

    connect (
        pBttn2,
        SIGNAL( clicked() ),
        pSignalMapper,
        SLOT( map())
    );

    connect (
        pBttn3,
        SIGNAL( clicked() ),
        pSignalMapper,
        SLOT( map())
    );

    connect (
        pSignalMapper,
        SIGNAL( mappedString(QString) ),
        this,
        SLOT ( onButtonClicked(QString) )
    );

}

void Dialog::onButtonClicked(QString buttonCaption) {
    qDebug() << buttonCaption +  " clicked";
}


Dialog::~Dialog() {}
