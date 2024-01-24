import QtQuick 2.15

Rectangle {
    id: topRect
    width: 100
    height: 80

    border.color: Qt.color("blue")
    property string value: "Edit"

    radius: 20

    TextInput {
        id: textEdit

        text: value

        anchors.centerIn: parent
        font.pointSize: 15
    }

    MouseArea {
        anchors.fill: topRect

        onClicked: {
            console.log("Moused clicked over Custom Edit Widget")
            textEdit.focus = true
            value = ""
            console.log(textEdit.text)
            editClicked()
        }

    }

}
