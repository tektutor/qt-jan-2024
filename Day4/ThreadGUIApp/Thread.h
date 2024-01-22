#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QDebug>
#include <QString>

class Thread : public QThread
{
    Q_OBJECT
private:
    QString name;
public:
    Thread(QString name);
signals:
    void threadMessage(QString,QString);
protected:
    void run();
};

#endif // THREAD_H
