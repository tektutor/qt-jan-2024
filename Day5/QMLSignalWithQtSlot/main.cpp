#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "myclass.h"

int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);

    qmlRegisterType<MyClass>("TekTutor",1,3,"TekTutorMyClass");

    //I'm disconnected from audio bridge again, please wait couple of minutes
    QQmlApplicationEngine engine;
    engine.load ( QUrl ( QStringLiteral("qrc:/main.qml")));

    // MyClass myClass;
    // engine.rootContext()->setContextProperty("MyClass",&myClass);


    return a.exec();
}
