import QtQuick 2.15

Window {
    width: 500
    height: 500
    visible: true

    title: "Custom Button"

    color: "lightgray"

    Button {
        id: button1
        caption: "B1"
        fontSize: 20
        bttnLabel.font.bold: false
    }

    Button {
        id: button2
        x: 100
        caption: "B2"
    }
}
