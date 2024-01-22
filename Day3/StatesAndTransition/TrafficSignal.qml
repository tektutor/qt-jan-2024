import QtQuick 2.15

Item {
    width: 500
    height: 800

    anchors.centerIn: parent
    state: "Stop"

    //Left pole
    // Rectangle {
    //     width: 50
    //     height: 900
    //     x: 50
    //     y: 80
    //     color: "black"
    // }

    //Connecting Rod from the pole
    // Rectangle {
    //     width: 450
    //     height: 50
    //     x: 50
    //     y: 80
    //     color: "black"
    // }
    //The rod that connects the horizontal rod that holds the
    //traffic signal
    // Rectangle {
    //     width: 50
    //     height: 100
    //     x: 450
    //     y: 80
    //     color: "black"
    // }

    states: [
        State {
            name: "Go"

            PropertyChanges {
               target: greenLight
               state: "On"
            }
            PropertyChanges {
               target: yellowLight
               state: "Off"
            }
            PropertyChanges {
               target: redLight
               state: "Off"
            }
        },
        State {
            name: "Ready"

            PropertyChanges {
               target: greenLight
               state: "Off"
            }
            PropertyChanges {
               target: yellowLight
               state: "On"
            }
            PropertyChanges {
               target: redLight
               state: "Off"
            }
        },
        State {
            name: "Stop"

            PropertyChanges {
               target: greenLight
               state: "Off"
            }
            PropertyChanges {
               target: yellowLight
               state: "Off"
            }
            PropertyChanges {
               target: redLight
               state: "On"
            }
        }
    ]

    Rectangle {
        width: 250
        height: 650
        anchors.centerIn: parent

        gradient: Gradient {

            GradientStop { position: 0.0; color: "lightgray" }
            GradientStop { position: 0.5; color: "gray" }
            GradientStop { position: 1.0; color: "black" }
        }

        Column {
            spacing: 10
            anchors.centerIn: parent

            Light {
                id: redLight
                lightColor: "red"
            }
            Light {
                id: yellowLight
                lightColor: "orange"
            }
            Light {
                id: greenLight
                lightColor: "green"
            }
        } // Column end
    } //Rectangle end that wraps all the lights

}
