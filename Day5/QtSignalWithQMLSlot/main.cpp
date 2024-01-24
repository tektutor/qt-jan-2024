#include <QApplication>
#include <QQmlApplicationEngine>

#include "mydlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QQmlApplicationEngine engine;
    engine.load( QUrl ( QStringLiteral ( "qrc:/main.qml")) );

    QObject *pQmlWindow =  engine.rootObjects()[0];

    MyDlg dlg;
    dlg.show();

    QObject::connect(
        &dlg,
        SIGNAL( buttonClicked()),
        pQmlWindow,
        SLOT ( qmlFunction() )
    );

    return a.exec();
}
