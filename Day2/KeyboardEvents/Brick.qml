import QtQuick

Rectangle {
    width: 50
    height: 50
    property string caption

    // gradient: Gradient {
    //     GradientStop {
    //         position: 0.0
    //         color: "orange"
    //     }
    //     GradientStop {
    //         position: 0.5
    //         color: "black"
    //     }
    //     GradientStop {
    //         position: 1.0
    //         color: "red"
    //     }
    // }
    color: "black"
    border.color: "red"
    border.width: 2

    Text {
        anchors.centerIn: parent
        text: caption
    }
}
