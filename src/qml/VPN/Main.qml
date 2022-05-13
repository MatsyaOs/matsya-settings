/*
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
import "../"

ItemPage {
    headerTitle: qsTr("VPN")

    property bool vpnConnected: false

    function switchVPN(enabled) {
        if (enabled) {
            vpnConnected = true
        } else {
            vpnConnected = false
        }
    }

    Scrollable {
        anchors.fill: parent
        contentHeight: layout.implicitHeight

        ColumnLayout {
            id: layout
            anchors.fill: parent

            RoundedItem {
                id: mainItem
                spacing: MatsyaUI.Units.largeSpacing

                RowLayout {
                    Label {
                        text: qsTr("VPN")
                        color: MatsyaUI.Theme.disabledTextColor
                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    Switch {
                        id: vpnSwitch
                        Layout.fillHeight: true
                        rightPadding: 0
                        onCheckedChanged: {}
                    }
                }
            }

            Item {
                height: MatsyaUI.Units.smallSpacing
            }
        }
    }
}
