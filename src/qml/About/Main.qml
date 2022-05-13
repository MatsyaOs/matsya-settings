/*
 * Copyright (C) 2021 CutefishOS Team.
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

import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import FishUI 1.0 as FishUI
import Cutefish.Settings 1.0
import QtGraphicalEffects 1.0
import "../"

ItemPage {
    headerTitle: qsTr("About")

    About {
        id: about
    }

    Scrollable {
        anchors.fill: parent
        contentHeight: layout.implicitHeight

        ColumnLayout {
            id: layout
            anchors.fill: parent

            Item {
                height: FishUI.Units.largeSpacing
            }

            Image {
                Layout.alignment: Qt.AlignTop | Qt.AlignHCenter
                width: 753*0.4
                height:391*0.4
                sourceSize: Qt.size(width, height)
                source: FishUI.Theme.darkMode ? "qrc:/images/dark/logo.svg"
                                                      : "qrc:/images/light/logo.svg"
            }

            Item {
                height: FishUI.Units.smallSpacing
            }

            Label {
                            Layout.alignment: Qt.AlignTop | Qt.AlignHCenter
                            text: "<b>Matsya OS</b>"
                            visible:!about.isCutefishOS
                            font.pointSize: 24
                            color:  FishUI.Theme.darkMode ? "#FFFFFF":"#000000"
                            leftPadding: FishUI.Units.largeSpacing * 2
                            rightPadding: FishUI.Units.largeSpacing * 2


            }
            Image {
                Layout.preferredWidth: 681*0.37
                Layout.preferredHeight: 71*0.37
                sourceSize: Qt.size(681, 71)
                source:FishUI.Theme.darkMode ? "qrc:/images/dark/logo.png"
                                             : "qrc:/images/light/logo.png"
                Layout.alignment: Qt.AlignHCenter
                visible: about.isCutefishOS
                asynchronous: true
            }

            Label {
                text: qsTr("Built on %1").arg(about.prettyProductName)
                visible: !about.isCutefishOS
                Layout.alignment: Qt.AlignTop | Qt.AlignHCenter
                color: FishUI.Theme.disabledTextColor
            }

            Item {
                height: FishUI.Units.largeSpacing * 2
            }

            RoundedItem {
                StandardItem {
                    key: qsTr("System Version")
                    value: about.version
                }

                StandardItem {
                    key: qsTr("System Type")
                    value: about.architecture
                }

                StandardItem {
                    key: qsTr("Kernel Version")
                    value: about.kernelVersion
                }

                StandardItem {
                    key: qsTr("Processor")
                    value: about.cpuInfo
                }

                StandardItem {
                    key: qsTr("RAM")
                    value: about.memorySize
                }

                StandardItem {
                    key: qsTr("Internal Storage")
                    value: about.internalStorage
                }
            }

            Item {
                height: FishUI.Units.smallSpacing
            }

            StandardButton {
                Layout.fillWidth: true
                visible: about.isCutefishOS
                text: qsTr("Software Update")
                onClicked: {
                    about.openUpdator()
                }
            }
        }
    }
}