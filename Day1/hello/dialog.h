#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
