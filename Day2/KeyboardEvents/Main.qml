import QtQuick

Window {
    id: topRect
    width: 1000
    height: 1000
    visible: true
    title: qsTr("Keyboard Event Handling Demo")

    Column {
        Repeater {
            model: 20
            Brick { }

            //signal itemAdded - emitted for every Brick that is added
            onItemAdded: {
                item.caption = "B" + index
            }
        }
    }

    Rectangle {
        id: rect

        width: 50; height: 50

        color: "blue"
        focus: true

        Keys.onPressed: {

            if ( event.key === Qt.Key_Right ) {
                if ( parent.x <  topRect.width - 100 ) {
                    parent.x = parent.x + 50
                }
            }
            else if ( event.key === Qt.Key_Left ) {
                if ( parent.x >=  50  ) {
                    parent.x = parent.x - 50
                }
            }
            else if ( event.key === Qt.Key_Up ) {
                if ( parent.y >=  50  ) {
                    parent.y = parent.y - 50
                }
            }
            else if ( event.key === Qt.Key_Down ) {
                if ( parent.y <=  parent.height - 100  ) {
                    parent.y = parent.y + 50
                }
            }
        }


    }

}
