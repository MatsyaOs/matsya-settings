import QtQuick 2.5

Rectangle {
    property alias about: aboutLabel.text

    id: root
    scale: 0.5
    opacity: 0
    radius: 10
    color: "#D1D4D5"

    Text {
        id: aboutLabel
        anchors {
            bottom: profileImages.top
            bottomMargin: profileImages.height * 1.5 - height / 2
            left: profileImages.left
        }
        font {
            pointSize: 13
        }
        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
        width: parent.width - profileImages.anchors.leftMargin * 2
    }

    ProfileImages {
        id: profileImages
        imageSize: Qt.size(35, 35)
        anchors {
            bottom: parent.bottom
            bottomMargin: profileImages.imageSize.height / 2
            left: parent.left
            leftMargin: profileImages.imageSize.width
        }
        images: [
            "qrc:/icons/system-suspend.svg",
            "qrc:/icons/system-reboot.svg",
            "qrc:/icons/system-lock-screen.svg",
            "qrc:/icons/system-shutdown.svg",
            "qrc:/icons/system-log-out.svg"
        ]
    }

    /*Rating {
        id: rating
        anchors {
            top: aboutLabel.bottom
            right: parent.right
            rightMargin: profileImages.anchors.leftMargin
        }
    }*/
}
