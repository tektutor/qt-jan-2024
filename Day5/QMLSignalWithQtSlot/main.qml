import QtQuick 2.15
import TekTutor 1.3

Window {
    id: topWindow
    width: 500
    height: 500
    visible: true

    title: "QML Signal with Qt Slot Demo"
    property string value: "Click Me"

    TekTutorMyClass {
        id: myClass
    }

    Connections {
        target: topWindow

    }

    Rectangle {
        width: parent.width - 20
        height: parent.height - 20

        radius: 50
        color: Qt.color("steelblue")

        Text {
            anchors.centerIn: parent
            text: value
            font.pointSize: 25

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    myClass.name = "MyClass"
                    console.log("Mouse clicked " + myClass.name)
                    value = myClass.name

                    //Invoking C++ method from QML
                    myClass.onButtonClickedCppMethod()
                    myClass.setName("From QML")

                    console.log(myClass.getName())
                }
            }
        }

    }

}
