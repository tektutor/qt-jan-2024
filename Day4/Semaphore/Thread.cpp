#include "Thread.h"

QSemaphore Thread::sem(1);
int Thread::counter = 0;

Thread::Thread(QString name) {
    this->name = name;
}

void Thread::run() {
    qDebug() << "Inside " << name;

    while ( counter < 10 ) {
        //Critical section that needs synchronization
        qDebug() << name
                 << "Before acquiring semaphore lock ..."
                 << counter;

        sem.acquire();
        msleep(1);

        ++counter;

        qDebug() << name
                 << "After acquiring semaphore lock and post increment ..."
                 << counter;


        sem.release();
        qDebug() << name << "After releasing semaphore lock ...";

    }

    qDebug() << "Thread " << name << " about to exit";
}
