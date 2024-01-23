#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QString>
#include <QDebug>
#include <QMutex>

class Thread : public QThread
{
private:
    static int counter;
    static QMutex mutex;
    QString name;
public:
    Thread(QString);
    void run();
};

#endif // THREAD_H
