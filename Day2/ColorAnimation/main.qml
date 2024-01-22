import QtQuick 2.15

Window {
    width: 1000
    height: 1000
    visible: true

    Rectangle {
        id: myRect
        width: parent.width
        height: parent.height
    }

    SequentialAnimation {
        running: true
        loops: Animation.Infinite

        ColorAnimation {
            target: myRect

            from: "white"
            to: "green"
            duration: 500
            property: "color"
        }

        ColorAnimation {
            target: myRect

            from: "green"
            to: "orange"
            duration: 500
            property: "color"
        }

        ColorAnimation {
            target: myRect

            from: "orange"
            to: "red"
            duration: 500
            property: "color"
        }
    }
}
