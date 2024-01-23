#ifndef CHILD_H
#define CHILD_H

#include <QDebug>
#include <QObject>
#include <QWeakPointer>
#include "father.h"
#include "mother.h"

class Child : public QObject
{
private:
    QWeakPointer<Father> pDad;
    QWeakPointer<Mother> pMom;

public:
    explicit Child (
        QWeakPointer<Father>,
        QWeakPointer<Mother>
    );
    ~Child();
};

#endif // CHILD_H
