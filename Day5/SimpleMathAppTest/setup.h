
#ifndef SETUP_H
#define SETUP_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QQmlContext>

class Setup : public QObject
{
    Q_OBJECT
public:
    Setup() = default;

public slots:
    void applicationAvailable();
    void qmlEngineAvailable(QQmlApplicationEngine *engine);
    void cleanupTestCase();
};

#endif // SETUP_H
