#include "mother.h"

Mother::Mother()
{
    qDebug() << "Mother constructor";
}

Mother::~Mother()
{
    qDebug() << "Mother destructor";
}

void Mother::setChild( QSharedPointer<Child> pChild) {
    ptrChild = pChild;
}
