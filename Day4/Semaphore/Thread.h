#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QString>
#include <QSemaphore>
#include <QDebug>

class Thread : public QThread
{
private:
    QString name;
    static QSemaphore sem;
    static int counter;
protected:
    void run();
public:
    Thread(QString);
};

#endif // THREAD_H
