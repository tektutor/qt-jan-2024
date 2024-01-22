import QtQuick 2.15

Window {
    width: 1000
    height: 1000
    visible: true

    Rectangle {
        id: blueRect
        width: 50; height: 50
        color: "blue"
    }

    Rectangle {
        id: yellowRect
        width: 50; height: 50
        color: "yellow"
        y: 0
        x: 0
    }

    Rectangle {
        id: greenRect
        width: 50; height: 50
        color: "blue"
        x: 950
        y: 950
    }

    Rectangle {
        id: redRect
        width: 50; height: 50
        color: "red"
        y: 950
        x: 950
    }

    ParallelAnimation {
        running: true
        SequentialAnimation {
            running: true

            NumberAnimation {
                targets: blueRect
                property: "x"
                duration: 3000
                easing.type: Easing.InOutQuad
                from: 0
                to: 950
            }
            NumberAnimation {
                target: redRect
                property: "x"
                duration: 3000
                easing.type: Easing.InQuart
                from: 950
                to: 0
            }
        } //SequentialAnimation
        SequentialAnimation {
            running: true

            NumberAnimation {
                targets: yellowRect
                property: "y"
                duration: 3000
                easing.type: Easing.OutInBounce
                from: 0
                to: 900
            }
            NumberAnimation {
                target: greenRect
                property: "y"
                duration: 3000
                easing.type: Easing.InElastic
                from: 900
                to: 0
            }
        } //SequentialAnimation
    }
}
