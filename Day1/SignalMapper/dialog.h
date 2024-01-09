#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSignalMapper>
#include <QHBoxLayout>
#include <QPushButton>
#include <QDebug>
#include <QString>

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QPushButton *pBttn1, *pBttn2, *pBttn3;
    QHBoxLayout *pLayout;

    QSignalMapper *pSignalMapper;

private slots:
    void onButtonClicked(QString buttonCaption);

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
