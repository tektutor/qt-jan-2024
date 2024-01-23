#include "myclass.h"

MyClass::MyClass(QObject *parent)
    : QObject{parent}
{
    timer.start(1000);

    connect (
        &timer,
        SIGNAL( timeout() ),
        this,
        SLOT ( onTimerTriggered() )
    );

}

void MyClass::onTimerTriggered() {
    qDebug() << "Timer triggered ...";
}

