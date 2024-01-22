import QtQuick 2.15

Rectangle {
    id: electricSwitch

    width: 100
    height: 200

    border.color: "green"
    border.width: 4
    radius: 50

    state: "OFF"

    gradient:  Gradient {
            GradientStop { position: 0.0; color: "steelblue" }
            GradientStop { position: 1.0; color: "black" }
    }

    states: [
        State {
            name: "ON"
            PropertyChanges {
                target: switchKnob
                y: 120
            }
            PropertyChanges {
                target: led
                color: "green"
            }
        },
        State {
            name: "OFF"
            PropertyChanges {
                target: switchKnob
                y: 30
            }
            PropertyChanges {
                target: led
                color: "red"
            }
        }
    ]

    transitions: [
        Transition {
            from: "*"
            to: "*"
            PropertyAnimation {
                target: switchKnob
                duration: 1000
                property: "y"
            }
            PropertyAnimation {
                target: led
                duration: 1000
                property: "color"
            }
        }
    ]

    Rectangle {
        id: switchKnob
        anchors.horizontalCenter: parent.horizontalCenter
        width: parent.width - 20
        height: parent.height/4
        radius: 20

        gradient:  Gradient {
                GradientStop { position: 0.0; color: "lightgray" }
                GradientStop { position: 0.5; color: "gray" }
                GradientStop { position: 1.0; color: "black" }
        }

        Rectangle {
            id: led
            anchors.centerIn: parent
            width: parent.width/3
            height: parent.height/3
            color: "yellow"
            radius: 2
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log ("Switch knob clicked")
                if ( electricSwitch.state === "ON" )
                    electricSwitch.state = "OFF"
                else
                    electricSwitch.state = "ON"
            }
        }
    }



}
