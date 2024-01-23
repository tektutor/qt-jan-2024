#include <QCoreApplication>
#include <QScopedPointer>
#include <QPointer>

#include "child.h"

void demonstrateScopedPointer() {

    //whenever method returns, the object pointed by scoped
    // pointer will be
    //automatically destructed

    //this pointer can only be accessed within the scope
    //of this function
    QScopedPointer pointer(new Father);
    //QPointer<Father> pointer(new Father);
}

int main(int argc, char *argv[])
{
# if 0
    QSharedPointer<Father> pRajeev
        = QSharedPointer<Father>(new Father);

    QSharedPointer<Mother> pSonia
        = QSharedPointer<Mother>(new Mother);

    QSharedPointer<Child>  pRahul
        = QSharedPointer<Child> (
            new Child(pRajeev.toWeakRef(),
                      pSonia.toWeakRef()
          )
    );

    pRajeev->setChild(pRahul);
    pSonia->setChild(pRahul);
#else
    demonstrateScopedPointer();
#endif
    return 0;
}
