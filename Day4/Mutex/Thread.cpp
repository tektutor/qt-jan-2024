#include "Thread.h"

int Thread::counter = 0;

QMutex Thread::mutex;

Thread::Thread(QString name) {
    this->name = name;
}

void Thread::run() {

    while ( counter < 100 ) {

        mutex.lock();

        qDebug() << name
                 << counter
                 << " before incrementing ";

        ++counter;

        qDebug() << name
                 << counter
                 << " after incrementing ";

        mutex.unlock();

        msleep(100);
    }
}
