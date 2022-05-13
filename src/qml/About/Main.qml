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

import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import MatsyaUI 1.0 as MatsyaUI
import Matsya.Settings 1.0
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
                height: MatsyaUI.Units.largeSpacing
            }

            Image {
                Layout.alignment: Qt.AlignTop | Qt.AlignHCenter
                width: 753*0.4
                height:391*0.4
                sourceSize: Qt.size(width, height)
                source: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/logo.svg"
                                                      : "qrc:/images/light/logo.svg"
            }

            Item {
                height: MatsyaUI.Units.smallSpacing
            }

            Label {
                            Layout.alignment: Qt.AlignTop | Qt.AlignHCenter
                            text: "<b>Matsya OS</b>"
                            visible:!about.isMatsyaOS
                            font.pointSize: 24
                            color:  MatsyaUI.Theme.darkMode ? "#FFFFFF":"#000000"
                            leftPadding: MatsyaUI.Units.largeSpacing * 2
                            rightPadding: MatsyaUI.Units.largeSpacing * 2


            }
            Image {
                Layout.preferredWidth: 681*0.37
                Layout.preferredHeight: 71*0.37
                sourceSize: Qt.size(681, 71)
                source:MatsyaUI.Theme.darkMode ? "qrc:/images/dark/logo.png"
                                             : "qrc:/images/light/logo.png"
                Layout.alignment: Qt.AlignHCenter
                visible: about.isMatsyaOS
                asynchronous: true
            }

            Label {
                text: qsTr("Built on %1").arg(about.prettyProductName)
                visible: !about.isMatsyaOS
                Layout.alignment: Qt.AlignTop | Qt.AlignHCenter
                color: MatsyaUI.Theme.disabledTextColor
            }

            Item {
                height: MatsyaUI.Units.largeSpacing * 2
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
                height: MatsyaUI.Units.smallSpacing
            }

            StandardButton {
                Layout.fillWidth: true
                visible: about.isMatsyaOS
                text: qsTr("Software Update")
                onClicked: {
                    about.openUpdator()
                }
            }
        }
    }
}
