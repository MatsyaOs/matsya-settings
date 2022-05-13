Matsya/*
 * Copyright (C) 2021 MatsyaOS Team.
 *
 * Author:     revenmartin <revenmartin@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.4
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

import Matsya.Settings 1.0
import MatsyaUI 1.0 as MatsyaUI
import "../"

ItemPage {
    headerTitle: qsTr("Appearance")

    Appearance {
        id: appearance
    }

    Scrollable {
        anchors.fill: parent
        contentHeight: layout.implicitHeight

        ColumnLayout {
            id: layout
            anchors.fill: parent
            // anchors.bottomMargin: MatsyaUI.Units.largeSpacing
            spacing: MatsyaUI.Units.largeSpacing * 2

            RoundedItem {
                Label {
                    text: qsTr("Theme")
                    color: MatsyaUI.Theme.disabledTextColor
                }

                // Light Mode and Dark Mode
                RowLayout {
                    spacing: MatsyaUI.Units.largeSpacing * 2

                    IconCheckBox {
                        source: "qrc:/images/light_mode.svg"
                        text: qsTr("Light")
                        checked: !MatsyaUI.Theme.darkMode
                        onClicked: appearance.switchDarkMode(false)
                    }

                    IconCheckBox {
                        source: "qrc:/images/dark_mode.svg"
                        text: qsTr("Dark")
                        checked: MatsyaUI.Theme.darkMode
                        onClicked: appearance.switchDarkMode(true)
                    }
                }

                HorizontalDivider {}

                RowLayout {
                    spacing: MatsyaUI.Units.largeSpacing

                    Label {
                        id: dimsTipsLabel
                        text: qsTr("Dim the wallpaper in dark theme")
                        bottomPadding: MatsyaUI.Units.smallSpacing
                        Layout.alignment: Qt.AlignVCenter | Qt.AlignLeft
                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    Switch {
                        checked: appearance.dimsWallpaper
                        height: dimsTipsLabel.height
                        Layout.alignment: Qt.AlignVCenter | Qt.AlignRight
                        onCheckedChanged: appearance.setDimsWallpaper(checked)
                        rightPadding: 0
                    }
                }

                RowLayout {
                    Label {
                        text: qsTr("System effects")
                        Layout.alignment: Qt.AlignVCenter | Qt.AlignLeft
                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    Switch {
                        checked: appearance.systemEffects
                        Layout.fillHeight: true
                        Layout.alignment: Qt.AlignVCenter | Qt.AlignRight
                        onCheckedChanged: appearance.systemEffects = checked
                        rightPadding: 0
                    }
                }
            }

            RoundedItem {
                RowLayout {
                    spacing: MatsyaUI.Units.largeSpacing * 2

                    Label {
                        text: qsTr("Minimize animation")
                    }

                    TabBar {
                        Layout.fillWidth: true
                        currentIndex: appearance.minimiumAnimation
                        onCurrentIndexChanged: appearance.minimiumAnimation = currentIndex

                        TabButton {
                            text: qsTr("Default")
                        }

                        TabButton {
                            text: qsTr("Magic Lamp")
                        }
                    }
                }
            }

            RoundedItem {
                Label {
                    text: qsTr("Accent color")
                    color: MatsyaUI.Theme.disabledTextColor
                }

                GridView {
                    id: accentColorView
                    height: itemSize
                    Layout.fillWidth: true
                    cellWidth: height
                    cellHeight: height
                    interactive: false
                    model: ListModel {}

                    property var itemSize: 30 + MatsyaUI.Units.largeSpacing * 2

                    Component.onCompleted: {
                        model.append({"accentColor": String(MatsyaUI.Theme.blueColor)})
                        model.append({"accentColor": String(MatsyaUI.Theme.redColor)})
                        model.append({"accentColor": String(MatsyaUI.Theme.greenColor)})
                        model.append({"accentColor": String(MatsyaUI.Theme.purpleColor)})
                        model.append({"accentColor": String(MatsyaUI.Theme.pinkColor)})
                        model.append({"accentColor": String(MatsyaUI.Theme.orangeColor)})
                        model.append({"accentColor": String(MatsyaUI.Theme.greyColor)})
                    }

                    delegate: Item {
                        id: _accentColorItem

                        property bool checked: Qt.colorEqual(MatsyaUI.Theme.highlightColor, accentColor)
                        property color currentColor: accentColor

                        width: GridView.view.itemSize
                        height: width

                        MouseArea {
                            id: _mouseArea
                            anchors.fill: parent
                            hoverEnabled: true
                            onClicked: appearance.setAccentColor(index)
                        }

                        Rectangle {
                            anchors.fill: parent
                            anchors.margins: MatsyaUI.Units.smallSpacing
                            color: "transparent"
                            radius: width / 2

                            border.color: _mouseArea.pressed ? Qt.rgba(currentColor.r,
                                                                       currentColor.g,
                                                                       currentColor.b, 0.6)
                                                             : Qt.rgba(currentColor.r,
                                                                       currentColor.g,
                                                                       currentColor.b, 0.4)
                            border.width: checked || _mouseArea.containsMouse ? 3 : 0

                            Rectangle {
                                anchors.fill: parent
                                anchors.margins: MatsyaUI.Units.smallSpacing
                                color: currentColor
                                radius: width / 2

                                Image {
                                    anchors.centerIn: parent
                                    width: parent.height * 0.6
                                    height: width
                                    sourceSize: Qt.size(width, height)
                                    source: "qrc:/images/dark/checked.svg"
                                    visible: checked
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
