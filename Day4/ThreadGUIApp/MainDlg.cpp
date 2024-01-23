#include "MainDlg.h"

int MainDlg::count = 0;

MainDlg::MainDlg(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Qt Threads Demo");

    pNewBttn   = new QPushButton("New Thread");
    pStartBttn = new QPushButton("Start Thread");
    pStopBttn  = new QPushButton("Stop Thread");
    pExitBttn  = new QPushButton("Exit App");

    pLayout = new QBoxLayout(QBoxLayout::LeftToRight);

    //This ensures all extra spaces are consumed by
    //this spacer/filler invisible widget
    //to make sure all buttons are right aligned
    pLayout->addStretch();

    pLayout->addWidget(pNewBttn);
    pLayout->addWidget(pStartBttn);
    pLayout->addWidget(pStopBttn);
    pLayout->addWidget(pExitBttn);

    pTabWidget = new QTabWidget;

    pMainLayout = new QVBoxLayout;
    pMainLayout->addWidget(pTabWidget);
    pMainLayout->addLayout(pLayout);

    setLayout( pMainLayout );

    connect (
        pNewBttn,
        SIGNAL( clicked(bool) ),
        this,
        SLOT ( onNewThreadButtonClicked()  )
    );

    connect (
        pStartBttn,
        SIGNAL( clicked(bool) ),
        this,
        SLOT ( onStartThreadButtonClicked()  )
    );

    connect (
        pStopBttn,
        SIGNAL( clicked(bool) ),
        this,
        SLOT ( onStopThreadButtonClicked()  )
    );

    connect (
        pExitBttn,
        SIGNAL( clicked(bool) ),
        this,
        SLOT ( onExitAppButtonClicked()  )
    );

    connect (
        pTabWidget,
        SIGNAL(currentChanged(int)),
        this,
        SLOT(onTabSwitched(int))
    );

    pStartBttn->setEnabled(false);
    pStopBttn->setEnabled(false);
}

void MainDlg::onNewThreadButtonClicked() {
    qDebug() << "New Button clicked";

    ++count;

    QString strTabCaption = "Thread ";
    QString strIndex;
    strIndex.setNum(count);

    strTabCaption.append(strIndex);

    ThreadDlg *pThreadDlg = new ThreadDlg(strTabCaption);
    pTabWidget->addTab(pThreadDlg,strTabCaption);

    connect (
        this,
        SIGNAL ( startThread(QString) ),
        pThreadDlg,
        SLOT( onThreadStarted(QString) )
    );

    connect (
        this,
        SIGNAL ( stopThread(QString) ),
        pThreadDlg,
        SLOT( onThreadStopped(QString) )
        );



    int count = pTabWidget->count();

    pStartBttn->setEnabled(true);
}

void MainDlg::onStartThreadButtonClicked() {
    qDebug() << "Start Button clicked";

    int currentTabIndex = pTabWidget->currentIndex();
    QString strTabCaption = "Thread ";
    QString strIndex;
    strIndex.setNum(++currentTabIndex);
    strTabCaption.append(strIndex);

    emit startThread(strTabCaption);
    pStopBttn->setEnabled(true);
}

void MainDlg::onStopThreadButtonClicked() {
    qDebug() << "Stop Button clicked";

    int currentTabIndex = pTabWidget->currentIndex();
    QString strTabCaption = "Thread ";
    QString strIndex;
    strIndex.setNum(++currentTabIndex);
    strTabCaption.append(strIndex);

    emit stopThread(strTabCaption);

}

void MainDlg::onExitAppButtonClicked() {
    qDebug() << "Exit Button clicked";

    QDialog::close();

}

void MainDlg::onTabSwitched(int tabIndex) {
    qDebug() << "Switched to tab " << tabIndex;
}

MainDlg::~MainDlg() {}
