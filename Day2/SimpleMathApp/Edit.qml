import QtQuick 2.15

Rectangle {
    width: 300
    height: 50
    radius: 25

    border.width: 2
    border.color: "black"

    property string caption: "Type your input"
    property alias value: textInput.text

    signal tabPressed()

    DoubleValidator {
        id: validInput
        top: 99999 //the number of digits
        bottom: 0
        decimals: 2
        notation: DoubleValidator.StandardNotation
    }

    TextInput {
        id: textInput
        anchors.centerIn: parent
        text: caption
        font.pointSize: 15
        validator: validInput

        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log("Edit widget clicked")
                parent.focus = true
                if ( parent.text === "Type your input")
                    parent.text = ""
            }
        }

        Keys.onPressed: {
            if ( event.key === Qt.Key_Tab ) {
                tabPressed()
            }
        }
    }
}
