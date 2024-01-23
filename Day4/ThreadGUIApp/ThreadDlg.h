#ifndef THREADDLG_H
#define THREADDLG_H

#include <QDialog>
#include <QListWidget>
#include <QHBoxLayout>
#include <QString>

#include "Thread.h"

class ThreadDlg : public QDialog
{
    Q_OBJECT
private:
    QListWidget *pListWidget;
    QHBoxLayout *pLayout;
    Thread *pThread;
    QString name;
    bool running;
public:
    ThreadDlg(QString name);

public slots:
    void onThreadStarted(QString);
    void onThreadStopped(QString);
    void onThreadMessage(QString,QString);
};

#endif // THREADDLG_H
