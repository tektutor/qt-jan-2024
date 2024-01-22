import QtQuick 2.15

Window {
    width: 1000
    height: 1000
    visible: true

    Timer {
        running: true
        interval: 3000
        repeat: true

        onTriggered: {
           if ( trafficSignal.state === "Stop" )
               trafficSignal.state = "Ready"
           else if ( trafficSignal.state === "Ready" )
               trafficSignal.state = "Go"
           else
               trafficSignal.state = "Stop"
        }
    }

    TrafficSignal {
        id: trafficSignal
    }
}
