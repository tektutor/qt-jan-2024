#include "ThreadDlg.h"

ThreadDlg::ThreadDlg(QString name) {

    pListWidget = new QListWidget;
    pLayout = new QHBoxLayout;
    pLayout->addWidget ( pListWidget );

    setLayout(pLayout);

    pThread = new Thread(name);
    this->name = name;

    connect (
        pThread,
        SIGNAL( threadMessage(QString,QString)),
        this,
        SLOT( onThreadMessage(QString,QString))
    );

}

void ThreadDlg::onThreadStarted(QString threadName) {
    qDebug() << threadName << " started ...";


    if (threadName.compare(name) == 0) {
        pThread->start();
        running = true;
    }
}

void ThreadDlg::onThreadMessage(QString name,QString message) {
    int totalItems = 0;
    if (this->name.compare(name) == 0) {
        pListWidget->addItem(name + " => " + message);

        totalItems = pListWidget->count();
        --totalItems;

       pListWidget->scrollToBottom();
       pListWidget->setCurrentRow(totalItems);
    }
}

void ThreadDlg::onThreadStopped(QString threadName) {
    qDebug() << "thread stop signal received";

    if (threadName.compare(name) == 0) {
        qDebug() << "***" <<  threadName ;
        pThread->terminate();
        running = false;
    }
}




