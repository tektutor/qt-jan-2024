#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>
#include <QPointer>

class MyDlg : public QDialog
{
    Q_OBJECT
private:
public:
    MyDlg();

signals:
    void buttonClicked();

private slots:
    void onButtonClicked();
};

#endif // MYDLG_H
