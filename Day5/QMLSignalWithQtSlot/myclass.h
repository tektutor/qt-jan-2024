#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QString>
#include <QDebug>

class MyClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getName WRITE setName)
private:
    QString name;
public:
    explicit MyClass(QObject *parent = nullptr);
    QString getName();
    void setName(QString);

    Q_INVOKABLE void onButtonClickedCppMethod();

signals:
};

#endif // MYCLASS_H
