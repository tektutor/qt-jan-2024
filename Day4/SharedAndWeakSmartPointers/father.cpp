#include "father.h"

Father::Father()
{
    qDebug() << "Father constructor";
}

Father::~Father() {
    qDebug() << "Father destructor";
}

void Father::setChild( QSharedPointer<Child> pChild) {
    ptrChild = pChild;
}
