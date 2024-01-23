#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QTimer>
#include <QDebug>

class MyClass : public QObject
{
    Q_OBJECT
private:
    QTimer timer;
public:
    explicit MyClass(QObject *parent = nullptr);
private slots:
    void onTimerTriggered();
};

#endif // MYCLASS_H
