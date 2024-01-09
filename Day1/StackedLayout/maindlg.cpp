#include "maindlg.h"

MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Stacked Layout Demo");

    pHBoxDlg  = new HBoxDlg;
    pVBoxDlg  = new VBoxDlg;
    pGridDlg  = new GridDlg;

    pStackedLayout = new QStackedLayout;

    pStackedLayout->addWidget(pHBoxDlg);
    pStackedLayout->addWidget(pVBoxDlg);
    pStackedLayout->addWidget(pGridDlg);

    pPrevBttn = new QPushButton("Prev");
    pNextBttn = new QPushButton("Next");
    pCloseBttn = new QPushButton("Close");

    pNavigationButtonsLayout = new QHBoxLayout;

    pNavigationButtonsLayout->addStretch();
    pNavigationButtonsLayout->addWidget( pPrevBttn );
    pNavigationButtonsLayout->addWidget( pNextBttn );
    pNavigationButtonsLayout->addWidget( pCloseBttn );

    pMainLayout = new QVBoxLayout;

    pMainLayout->addLayout( pStackedLayout );
    pMainLayout->addLayout( pNavigationButtonsLayout );

    setLayout( pMainLayout );

    connect (
        pPrevBttn,
        SIGNAL( clicked() ),
        this,
        SLOT ( onPrevButtonClicked() )
    );

    connect (
        pNextBttn,
        SIGNAL( clicked() ),
        this,
        SLOT ( onNextButtonClicked() )
    );

    connect (
        pCloseBttn,
        SIGNAL( clicked() ),
        this,
        SLOT ( onCloseButtonClicked() )
    );

    pPrevBttn->setEnabled(false);
}

void MainDialog::onPrevButtonClicked() {
    qDebug() << "Prev button clicked";
    int currentIndex = pStackedLayout->currentIndex();

    if ( currentIndex > 0)
        pStackedLayout->setCurrentIndex( --currentIndex );
    else
        pPrevBttn->setEnabled(false);

    if (currentIndex < 2)
        pNextBttn->setEnabled(true);
}

void MainDialog::onNextButtonClicked() {
    qDebug() << "Next button clicked";

    int currentIndex = pStackedLayout->currentIndex();

    if ( currentIndex < 2)
        pStackedLayout->setCurrentIndex( ++currentIndex );
    else
        pNextBttn->setEnabled(false);

    if ( currentIndex > 0)
        pPrevBttn->setEnabled(true);
}

void MainDialog::onCloseButtonClicked() {
    qDebug() << "Close button clicked";
    QDialog::close();
}


MainDialog::~MainDialog() {}
