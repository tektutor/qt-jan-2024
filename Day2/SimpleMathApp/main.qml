import QtQuick 2.15

Window {
    width: 600
    height: 300
    visible: true

    title: "Simple Math Application"
    color: "lightgray"

    property double firstNumber: 0.0
    property double secondNumber: 0.0
    property double result: 0.0

    function retrieveInputs() {
        firstNumber = parseFloat(firstNumEdit.value)
        secondNumber = parseFloat(secondNumEdit.value)
    }

    Column {
        spacing: 20
        anchors.centerIn: parent
        Rectangle {

            width: 500
            height: 200
            border.color: "green"
            border.width: 3
            radius: 20

            Grid {
                rows: 3
                columns: 2
                spacing: 5
                anchors.centerIn: parent

                Label {
                    caption: "First Number"
                }

                Edit {
                    id: firstNumEdit
                    onTabPressed: {
                        console.log("Tab pressed in first edit")
                        //secondNumEdit.activeFocusOnTab
                    }

                }

                Label {
                    caption: "Second Number"
                }

                Edit {
                    id: secondNumEdit

                    onTabPressed: {

                    }
                }
                Label {
                    caption: "Result"
                }

                Edit {
                    id: resultEdit
                }
            }
        }

        Row {
            spacing: 10
            Button {
                caption: "Add"
                onButtonClicked: {
                    console.log("Add Button clicked")
                    retrieveInputs()
                    result = firstNumber + secondNumber
                    resultEdit.caption = result
                    console.log ( firstNumber )
                }
            }
            Button {
                caption: "Subtract"
                onButtonClicked: {
                    console.log("Subtract Button clicked")
                    retrieveInputs()
                    result = firstNumber - secondNumber
                    resultEdit.caption = result
                }
            }
            Button {
                caption: "Multiply"
                onButtonClicked: {
                    console.log("Multiply Button clicked")
                    retrieveInputs()
                    result = firstNumber * secondNumber
                    resultEdit.caption = result

                }
            }
            Button {
                caption: "Divide"
                onButtonClicked: {
                    console.log("Divide Button clicked")
                    retrieveInputs()
                    result = firstNumber / secondNumber
                    resultEdit.caption = result

                }
            }
            Button {
                caption: "Exit"
                onButtonClicked: {
                    console.log("Exit Button clicked")
                    close()
                }
            }
        }
    }
}
