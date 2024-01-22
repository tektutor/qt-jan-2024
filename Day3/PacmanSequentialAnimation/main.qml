import QtQuick 2.15

Window {
    width: 200
    height: 200
    visible: true

    Rectangle {
        Image {
            id: pacmanImg
        }

        SequentialAnimation {
            running: true
            loops: Animation.Infinite

            PropertyAnimation {
                target: pacmanImg
                property: "source"
                to: "pacman1.png"
            }
            PropertyAnimation {
                target: pacmanImg
                property: "source"
                to: "pacman2.png"
            }
            PropertyAnimation {
                target: pacmanImg
                property: "source"
                to: "pacman3.png"
            }
            PropertyAnimation {
                target: pacmanImg
                property: "source"
                to: "packman4.png"
            }

        }

    }

}
