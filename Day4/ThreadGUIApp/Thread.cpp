#include "Thread.h"

Thread::Thread(QString name) {
    this->name = name;
}

void Thread::run() {
    int count = 0;
    QString message;

    while ( count < 30000 ) {
        if (count == 29999 )
            count = 0;
        message.setNum(++count);

        qDebug() << name << message;

        emit threadMessage(name,message);

        msleep(100);
    }
}
