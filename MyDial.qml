import QtQuick 6.5
import QtQuick.Controls 6.5

Rectangle {
    width: 270
    height: 270
    color: "#2e323d"
    //color: "transparent"
    Rectangle {
        id: rectangle0
        objectName: "rectangle0"
        x: 130
        y: 16
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
    }

    Rectangle {
        id: rectangle1
        objectName: "rectangle1"
        x: 157
        y: 20
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 14
    }

    Rectangle {
        id: rectangle2
        objectName: "rectangle2"
        x: 181
        y: 29
        width: 11
        height: 24
        color: "#47a7da"
        radius: 5
        rotation: 30
    }

    Rectangle {
        id: rectangle3
        objectName: "rectangle3"
        x: 203
        y: 46
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 45
    }

    Rectangle {
        id: rectangle4
        objectName: "rectangle4"
        x: 219
        y: 66
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 60
    }

    Rectangle {
        id: rectangle5
        objectName: "rectangle5"
        x: 230
        y: 91
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 75
    }

    Rectangle {
        id: rectangle6
        objectName: "rectangle6"
        x: 233
        y: 117
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 90
    }

    Rectangle {
        id: rectangle7
        objectName: "rectangle7"
        x: 230
        y: 145
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 105
    }

    Rectangle {
        id: rectangle8
        objectName: "rectangle8"
        x: 219
        y: 169
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 120
    }

    Rectangle {
        id: rectangle9
        objectName: "rectangle9"
        x: 202
        y: 191
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 135
    }

    Rectangle {
        id: rectangle10
        objectName: "rectangle10"
        x: 182
        y: 206
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 150
    }

    Rectangle {
        id: rectangle11
        objectName: "rectangle11"
        x: 157
        y: 216
        width: 10
        height: 25
        color: "#47a7da"
        radius: 5
        rotation: 165
    }

    Rectangle {
        id: rectangle12
        objectName: "rectangle12"
        x: 130
        y: 221
        width: 10
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 180
    }

    Rectangle {
        id: rectangle13
        objectName: "rectangle13"
        x: 103
        y: 216
        width: 10
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 195
    }

    Rectangle {
        id: rectangle14
        objectName: "rectangle14"
        x: 78
        y: 206
        width: 10
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 208
    }

    Rectangle {
        id: rectangle15
        objectName: "rectangle15"
        x: 57
        y: 190
        width: 11
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 224
    }

    Rectangle {
        id: rectangle16
        objectName: "rectangle16"
        x: 40
        y: 168
        width: 11
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 235
    }

    Rectangle {
        id: rectangle17
        objectName: "rectangle17"
        x: 30
        y: 144
        width: 11
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 250
    }

    Rectangle {
        id: rectangle18
        objectName: "rectangle18"
        x: 28
        y: 117
        width: 11
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 270
    }

    Rectangle {
        id: rectangle19
        objectName: "rectangle19"
        x: 30
        y: 91
        width: 11
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 285
    }

    Rectangle {
        id: rectangle20
        objectName: "rectangle20"
        x: 40
        y: 66
        width: 11
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 300
    }

    Rectangle {
        id: rectangle21
        objectName: "rectangle21"
        x: 57
        y: 45
        width: 11
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 315
    }

    Rectangle {
        id: rectangle22
        objectName: "rectangle22"
        x: 78
        y: 28
        width: 11
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 330
    }

    Rectangle {
        id: rectangle23
        objectName: "rectangle23"
        x: 103
        y: 20
        width: 11
        height: 26
        color: "#47a7da"
        radius: 5
        rotation: 345
    }

    Image {
        id: img_dial
        x: 0
        y: 0
        width: 270
        height: 270
        source: "qrc:/Dial.svg"
        fillMode: Image.PreserveAspectFit
        Item {
            anchors.fill: parent
            width: 103
            height: 65
            x: 84
            y: 103

            Text {
                objectName: "timeText"
                anchors.fill: parent
                font.pixelSize: 36
                font.family: "SF Pro Text"
                font.bold: true
                color: "#FFFFFF"

                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                text: "25 min"
            }
        }

    }

    // DropShadow {
    //     anchors.fill: img_dial
    //     anchors.leftMargin: 0
    //     anchors.rightMargin: 0
    //     anchors.topMargin: 8
    //     anchors.bottomMargin: -8
    //     horizontalOffset: 5
    //     verticalOffset: 5
    //     radius: 5
    //     samples: 16
    //     color: "#80000000"
    // }
    StateGroup {
        id: stateGroup
    }
}
