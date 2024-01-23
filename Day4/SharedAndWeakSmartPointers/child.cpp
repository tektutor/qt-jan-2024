#include "child.h"

Child::Child(QWeakPointer<Father> pFather, QWeakPointer<Mother> pMother)
{
    qDebug() << "Child constructor";
    pDad = pFather;
    pMom = pMother;
}


Child::~Child()
{
    qDebug() << "Child destructor";
}
