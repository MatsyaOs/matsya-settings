import QtQuick 2.5
import QtGraphicalEffects 1.0

/**
 * This is the container card for the image and the information
 */

Item {
    property alias imageSource: cardImage.source
    property alias userName: cardImage.userName

    property alias countryName: cardImage.locName
    property alias contact: cardImage.contactInfo
    property alias about: cardDetails.about

    id: root

    DropShadow {
        anchors.fill: cardDetails
        horizontalOffset: 3
        verticalOffset: 3
        radius: 8.0
        samples: 16
        color: "#80000000"
        source: cardDetails
        scale: cardDetails.scale
        opacity: cardDetails.opacity
    }

    CardDetails {
        id: cardDetails
        y: cardImage.placeOffset * 0.5
        width: parent.width * 1.1
        height: parent.height
        anchors.horizontalCenter: parent.horizontalCenter
    }

    DropShadow {
        anchors.fill: cardImage
        horizontalOffset: 1
        verticalOffset: 1
        radius: 8.0
        samples: 16
        color: "#80000000"
        source: cardImage
        scale: cardImage.scale
        opacity: cardImage.opacity
    }

    CardImage {
        id: cardImage
        width: parent.width
        height: parent.height
        fillMode: Image.PreserveAspectCrop
        onYChanged: {
            // Map the Y position to scale and opacity of cardDetails
            cardDetails.scale = cardImage.map(cardImage.y, 0, -cardImage.placeOffset, 0.5, 1, true);
            cardDetails.opacity = cardImage.map(cardImage.y, 0, -cardImage.placeOffset, 0, 1, true);
        }
    }
}
