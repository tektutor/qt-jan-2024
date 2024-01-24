import QtQuick 2.15

Window {
    width: 500
    height: 500
    visible: true

    title : "Qt Signal with QML Slot Demo"

    function qmlFunction() {
        console.log("QML slot function invoked ...")
    }

}
