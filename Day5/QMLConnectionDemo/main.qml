import QtQuick 2.15

Window {
    id: rect

    width: 500; height: 500
    visible: true

    title: "QML Connections Demo"

    signal buttonClicked()

    Rectangle {
        width: 100
        height: 50

        anchors.centerIn: parent

        gradient: Gradient {
            GradientStop { position: 0.0; color: "lightgray" }
            GradientStop { position: 0.5; color: "gray" }
            GradientStop { position: 1.0; color: "black" }
        }

        Text {
            anchors.centerIn: parent
            text: "Click Me"
            font.pointSize: 15
            color: Qt.color("white")

        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log("Mouse clicked")

                //emitting our custom signal
                buttonClicked()
            }
        }
    }

    Connections {
        target: rect
        function onButtonClicked() {
            console.log("Button clicked slot invoked ...")
        }
    }
}
