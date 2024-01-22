import QtQuick 2.15

Rectangle {
    width: 200
    height: 200
    radius: width/2

    color: Qt.color("white")

    property color lightColor: Qt.color("black")

    state: "Off"

    states: [
        State {
            name: "On"
            PropertyChanges {
                target: light
                color: lightColor
            }
        },
        State {
            name: "Off"
            PropertyChanges {
                target: light
                color: Qt.color("black")
            }
        }
    ]

    transitions: [
        Transition {
            from: "*"
            to: "*"

            PropertyAnimation {
                properties: "color"
                duration: 1000
            }
        }

    ]

    Rectangle {
        id: light
        anchors.centerIn: parent

        width: parent.width - 10
        height: parent.height - 10

        radius: parent.width/2
    } //Inner Rectangle

} //Outer Rectangle
