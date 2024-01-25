import QtQuick 2.15
import QtTest 1.0
import "../SimpleMathApp"


TestCase {
    name: "TestMathApp"

    Calculator {
        id: calculator
    }

    function test_case1() {

        calculator.firstNumber = 100.5
        calculator.secondNumber = 200.5

        mouseClick(calculator.addButton)

        compare(calculator.resultEdit.caption,"301.00", "Result must be 301.00")

    }
}
