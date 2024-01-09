#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>
#include <QStackedLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QDebug>

#include "hboxdlg.h"
#include "vboxdlg.h"
#include "griddlg.h"

class MainDialog : public QDialog
{
    Q_OBJECT
private:
    HBoxDlg *pHBoxDlg;
    VBoxDlg *pVBoxDlg;
    GridDlg *pGridDlg;

    QStackedLayout *pStackedLayout;
    QHBoxLayout *pNavigationButtonsLayout;
    QVBoxLayout *pMainLayout;

    QPushButton *pPrevBttn, *pNextBttn, *pCloseBttn;

private slots:
    void onPrevButtonClicked();
    void onNextButtonClicked();
    void onCloseButtonClicked();

public:
    MainDialog(QWidget *parent = nullptr);
    ~MainDialog();
};
#endif // MAINDLG_H
