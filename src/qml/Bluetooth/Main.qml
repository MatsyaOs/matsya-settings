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

import QtQuick 2.4
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.3
import Matsya.Settings 1.0
import MatsyaUI 1.0 as MatsyaUI
import Matsya.Bluez 1.0 as Bluez
import "../"

ItemPage {
    id: control
    headerTitle: qsTr("Bluetooth")

    property bool bluetoothDisConnected: Bluez.Manager.bluetoothBlocked

    onBluetoothDisConnectedChanged: {
        bluetoothSwitch.checked = !bluetoothDisConnected
    }

    function setBluetoothEnabled(enabled) {
        Bluez.Manager.bluetoothBlocked = !enabled

        for (var i = 0; i < Bluez.Manager.adapters.length; ++i) {
            var adapter = Bluez.Manager.adapters[i]
            adapter.powered = enabled
        }
    }

    Bluez.DevicesProxyModel {
        id: devicesProxyModel
        sourceModel: devicesModel
    }

    Bluez.DevicesModel {
        id: devicesModel
    }

    Bluez.BluetoothManager {
        id: bluetoothMgr

        onShowPairDialog: {
            _pairDialog.title = name
            _pairDialog.pin = pin
            _pairDialog.visible = true
        }

        onPairFailed: {
            rootWindow.showPassiveNotification(qsTr("Pairing unsuccessful"), 3000)
        }

        onConnectFailed: {
            rootWindow.showPassiveNotification(qsTr("Connecting Unsuccessful"), 3000)
        }
    }

    PairDialog {
        id: _pairDialog
    }

    Scrollable {
        anchors.fill: parent
        contentHeight: layout.implicitHeight

        ColumnLayout {
            id: layout
            anchors.fill: parent
            anchors.bottomMargin: MatsyaUI.Units.largeSpacing

            RoundedItem {
                id: mainItem
                spacing: MatsyaUI.Units.largeSpacing

                RowLayout {
                    Label {
                        text: qsTr("Bluetooth")
                        color: MatsyaUI.Theme.disabledTextColor
                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    Switch {
                        id: bluetoothSwitch
                        Layout.fillHeight: true
                        rightPadding: 0
                        checked: !Bluez.Manager.bluetoothBlocked
                        onCheckedChanged: setBluetoothEnabled(checked)
                    }
                }

                ListView {
                    id: _listView
                    visible: count > 0
                    interactive: false
                    spacing: 0

                    Layout.fillWidth: true

                    Layout.preferredHeight: {
                        var totalHeight = 0
                        for (var i = 0; i < _listView.visibleChildren.length; ++i) {
                            totalHeight += _listView.visibleChildren[i].height
                        }
                        return totalHeight
                    }

                    model: Bluez.Manager.bluetoothOperational ? devicesProxyModel : []

                    section.property: "Section"
                    section.criteria: ViewSection.FullString
                    section.delegate: Label {
                        color: MatsyaUI.Theme.disabledTextColor
                        topPadding: MatsyaUI.Units.largeSpacing
                        bottomPadding: MatsyaUI.Units.largeSpacing
                        text: section == "My devices" ? qsTr("My devices")
                                                     : qsTr("Other devices")
                    }

                    delegate: Item {
                        width: ListView.view.width
                        height: _itemLayout.implicitHeight + MatsyaUI.Units.largeSpacing

                        property bool paired: model.Connected && model.Paired

                        ColumnLayout {
                            id: _itemLayout
                            anchors.fill: parent
                            anchors.leftMargin: 0
                            anchors.rightMargin: 0
                            anchors.topMargin: MatsyaUI.Units.smallSpacing
                            anchors.bottomMargin: MatsyaUI.Units.smallSpacing
                            spacing: 0

                            Item {
                                Layout.fillWidth: true
                                height: _contentLayout.implicitHeight + MatsyaUI.Units.largeSpacing

                                Rectangle {
                                    anchors.fill: parent
                                    radius: MatsyaUI.Theme.smallRadius
                                    color: MatsyaUI.Theme.textColor
                                    opacity: mouseArea.pressed ? 0.15 :  mouseArea.containsMouse ? 0.1 : 0.0
                                }

                                MouseArea {
                                    id: mouseArea
                                    anchors.fill: parent
                                    hoverEnabled: true
                                    acceptedButtons: Qt.LeftButton

                                    onClicked: {
                                        if (model.Connected || model.Paired){
                                            additionalSettings.toggle()
                                            return
                                        }

                                        if (model.Paired) {
                                            bluetoothMgr.connectToDevice(model.Address)
                                        } else {
                                            bluetoothMgr.requestParingConnection(model.Address)
                                        }
                                    }
                                }

                                RowLayout {
                                    id: _contentLayout
                                    anchors.fill: parent
                                    anchors.rightMargin: MatsyaUI.Units.smallSpacing

                                    Image {
                                        width: 16
                                        height: 16
                                        sourceSize: Qt.size(16, 16)
                                        source: MatsyaUI.Theme.darkMode ? "qrc:/images/sidebar/dark/bluetooth.svg"
                                                                      : "qrc:/images/sidebar/light/bluetooth.svg"
                                        Layout.alignment: Qt.AlignVCenter
                                    }

                                    Label {
                                        text: model.DeviceFullName
                                        Layout.fillWidth: true
                                        Layout.alignment: Qt.AlignVCenter
                                    }

                                    Label {
                                        visible: model.Paired
                                        text: model.Connected ? qsTr("Connected") : qsTr("Not Connected")
                                    }
                                }
                            }

                            Hideable {
                                id: additionalSettings
                                spacing: 0

                                ColumnLayout {
                                    Item {
                                        height: MatsyaUI.Units.largeSpacing
                                    }

                                    RowLayout {
                                        spacing: MatsyaUI.Units.largeSpacing
                                        Layout.leftMargin: MatsyaUI.Units.smallSpacing

                                        Button {
                                            text: qsTr("Connect")
                                            visible: !model.Connected
                                            onClicked: {
                                                if (model.Paired) {
                                                    bluetoothMgr.connectToDevice(model.Address)
                                                } else {
                                                    bluetoothMgr.requestParingConnection(model.Address)
                                                }
                                            }
                                        }

                                        Button {
                                            text: qsTr("Disconnect")
                                            visible: model.Connected
                                            onClicked: {
                                                bluetoothMgr.deviceDisconnect(model.Address)
                                                additionalSettings.hide()
                                            }
                                        }

                                        Button {
                                            text: qsTr("Forget This Device")
                                            flat: true
                                            onClicked: {
                                                bluetoothMgr.deviceRemoved(model.Address)
                                                additionalSettings.hide()
                                            }
                                        }
                                    }
                                }

                                HorizontalDivider {}
                            }
                        }
                    }
                }
            }

            Item {
                height: MatsyaUI.Units.largeSpacing * 2
            }
        }
    }
}
