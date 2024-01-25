import QtQuick 2.15

Rectangle {
    width: 180
    height: 50
    radius: 25

    color: "darkgray"

    border.width: 2
    border.color: "black"

    property string caption: "Label"

    Text {
        anchors.centerIn: parent
        text: caption
        font.pointSize: 15
    }
}
