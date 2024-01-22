import QtQuick 2.15
import QtQuick.Controls

Window {
    width: 1000
    height: 1000
    visible: true

    title: "Scroll Bar Demo"

    Flickable {
        id: frame
        width: 500
        height: 500
        clip: true

        anchors.centerIn: parent

        Image {
            id: content
            source: "Beach-Sunset-Wallpaper-e1649547008469.jpg"
            x: -hbar.position * width
            y: -vbar.position * height
        }

        ScrollBar {
            id: vbar
            hoverEnabled: true
            active: true
            orientation: Qt.Vertical
            size: frame.height/content.height
            anchors.top: parent.top
            anchors.right: parent.right
            anchors.bottom: parent.bottom

            onPressedChanged: {
                console.log( "X = " + content.x + " Y = " + content.y )
                console.log( "Image height = " + content.height )
                console.log( "Image width = " + content.width )
            }
        }

        ScrollBar {
            id: hbar
            hoverEnabled: true
            active: true
            orientation: Qt.Horizontal
            size: frame.width/content.width

            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom

            onPressedChanged: {
                console.log( "X = " + content.x + " Y = " + content.y )
                console.log( "Image height = " + content.height )
                console.log( "Image width = " + content.width )
            }

        }
    }
}
