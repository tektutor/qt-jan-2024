import QtQuick 2.15

Window {
    width: 500
    height: 300
    visible: true
    color: "lightgray"

    title: "Hello QML Application"

    Rectangle {
        width: 400
        height: 100
        color: "steelblue"

        anchors.centerIn: parent

        border.width: 5
        border.color: "blue"
        radius: 50

        Text {
            text: "Hello QML !"
            color: "white"
            anchors.centerIn: parent
            font.family: "Arial"
            font.pointSize: 20
        }
    }
}
