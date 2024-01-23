#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QBoxLayout>
#include <QPushButton>
#include <QTabWidget>
#include <QDebug>
#include <QString>

#include "ThreadDlg.h"

class MainDlg : public QDialog
{
    Q_OBJECT
private:
    QPushButton *pNewBttn,*pStartBttn, *pStopBttn, *pExitBttn;
    QTabWidget *pTabWidget;
    QVBoxLayout *pMainLayout;
    QBoxLayout *pLayout;
    static int count;

signals:
    void startThread(QString);
    void stopThread(QString);

private slots:
    void onNewThreadButtonClicked();
    void onStartThreadButtonClicked();
    void onStopThreadButtonClicked();
    void onExitAppButtonClicked();
    void onTabSwitched(int);

public:
    MainDlg(QWidget *parent = nullptr);
    ~MainDlg();
};
#endif // MAINDLG_H
