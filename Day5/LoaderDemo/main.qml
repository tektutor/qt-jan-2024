import QtQuick 2.15

Window {
    width: 1000
    height: 500
    visible: true

    title: "Dynamically loading qml using Loader"

    Loader {
        id: dynamicQMLLoader
    }

    MouseArea {
        anchors.fill: parent

        onClicked: {
            console.log("Mouse clicked")
            dynamicQMLLoader.source="MyRectangle.qml"
        }
    }
}
