
#include "setup.h"

void Setup::applicationAvailable()
{
    // custom code that does not require QQmlEngine
}

void Setup::qmlEngineAvailable(QQmlApplicationEngine *engine)
{
    // QStringList listOfPaths;
    // listOfPaths << "/home/jegan/qt-jan-2024/Day5/SimpleMathApp";
    // engine->setImportPathList(listOfPaths);
    // engine->load( "Calculator.qml");
}

void Setup::cleanupTestCase()
{
    // custom code to clean up before destruction starts
}
