import QtQuick 2.15

Rectangle {
    id: button
    width: buttonWidth
    height: buttonHeight
    radius: 25

    border.width: 2
    border.color: "black"

    property string caption: "Button"
    property int buttonWidth: 90
    property int buttonHeight: 50


    //Custom signal
    signal buttonClicked()
    //slot for above signal will be onButtonClicked

    Text {
        anchors.centerIn: parent
        text: caption
        font.pointSize: 15
    }

    MouseArea {
        anchors.fill: parent

        hoverEnabled: true

        onClicked: {
            console.log( "Button clicked")
            buttonClicked() //emitting buttonClicked signal
        }

        onEntered:
            button.scale = 1.1

        onExited:
            button.scale = 1.0
    }

}
