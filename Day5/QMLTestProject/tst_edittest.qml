import QtQuick 2.15
import QtTest 1.0

TestCase {
    name: "EditTest"
    when: windowShown

    Edit {
        id: edit
    }

    function initTestCase() {
        //test preparation or initialization can be done here
        console.log("will be invoked before very test case is executed")
    }

    function test_EditValueOnMouseClick() {
        //compare(1 + 1, 2, "sanity check");

        var editValueBeforeMouseClick = "Edit"
        var editValueAfterMouseClick  = ""

        verify(
            edit.value === editValueBeforeMouseClick,
            "Edit qml widget should have default value as " + editValueBeforeMouseClick
        )

        mouseClick(edit)



        verify(
            edit.value === editValueAfterMouseClick,
            "Edit qml widget should be " + editValueAfterMouseClick
        )

    }

    function cleanupTestCase() {
        //test clean or teardown can be done here
        console.log("will be invoked after very test case is executed")

    }

}
