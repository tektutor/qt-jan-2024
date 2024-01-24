#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>

class MyDlg : public QDialog
{
    Q_OBJECT
private:
    QPushButton *pBttn1, *pBttn2, *pBttn3;
    QHBoxLayout *pLayout;
public:
    MyDlg();
};

#endif // MYDLG_H
