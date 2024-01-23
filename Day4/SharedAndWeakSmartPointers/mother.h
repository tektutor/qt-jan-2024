#ifndef MOTHER_H
#define MOTHER_H

#include <QDebug>
#include <QObject>
#include <QSharedPointer>

class Child;

class Mother : public QObject
{
private:
    QSharedPointer<Child> ptrChild;
public:
    explicit Mother();
    ~Mother();
    void setChild(QSharedPointer<Child> pChild);

signals:
};

#endif // MOTHER_H
