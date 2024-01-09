#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QStackedLayout>
#include <QDebug>

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QPushButton
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
