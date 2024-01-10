import QtQuick 2.15

Rectangle {
    id: buttonRect
    width: 100
    height: 80

    border.width: 5
    border.color: "blue"
    radius: 10

    //Custom property
    property string caption: "Button"
    property int fontSize: 15
    property Text bttnLabel: buttonLabel

    Text {
        id: buttonLabel
        text: caption //Property binding
        anchors.centerIn: parent
        color: "black"
        font.pointSize: fontSize
        font.bold: true
    }
}
