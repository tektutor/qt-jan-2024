#ifndef FATHER_H
#define FATHER_H

#include <QDebug>
#include <QObject>
#include <QSharedPointer>
class Child;

class Father : public QObject
{
private:
    QSharedPointer<Child> ptrChild;
public:
    explicit Father();
    ~Father();
    void setChild(QSharedPointer<Child> pChild);
};

#endif // FATHER_H
