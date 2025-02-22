import "../../util"
import Melodix.Player 1.0
import QtGraphicalEffects 1.0
import QtQuick 2.11
import QtQuick.Controls 2.4
import org.deepin.dtk 1.0
import org.deepin.dtk.impl 1.0 as D
import org.deepin.dtk.style 1.0 as DS

Control {
    id: root

    property int headerHeight: 73
    property int playlistHeight: rootWindow.height - 90
    property int playlistMediaCount: 0
    property int selectedIndex: -1

    signal playlistHided()

    function playlistShow() {
        playlistRaiseAnimation.start();
    }

    function playlistHide() {
        playlistHideAnimation.start();
    }

    function onMediaCountChanged(newCount) {
        playlistMediaCount = newCount;
        playlistView.model = Player.getPlaylistModel();
    }

    function onPlaylistCurrentIndexChanged() {
        selectedIndex = Player.getCurrentIndex();
        console.log("Player的playlistCurrentIndexChanged信号触发， selectedIndex: " + selectedIndex);
        if (selectedIndex > (playlistMediaCount - (playlistView.height / 56) + 1))
            return ;

        playlistView.contentY = selectedIndex * 56;
    }

    visible: isPlaylistShow
    Component.onCompleted: {
        Player.mediaCountChanged.connect(onMediaCountChanged);
        Player.playlistCurrentIndexChanged.connect(onPlaylistCurrentIndexChanged);
        console.log(root.width, root.height);
    }

    Rectangle {
        anchors.fill: parent
        color: "transparent"

        MouseArea {
            width: rootWindow.width - 320 - 10
            height: parent.height
            onClicked: {
                playlistHideAnimation.start();
            }
        }

    }

    FloatingPanel {
        id: playlistRoot

        width: 320
        height: root.height - 10
        radius: 8
        x: rootWindow.width - 320 - 10
        y: 5

        MouseArea {
            anchors.fill: parent
            onWheel: {
            }
        }

        Column {
            width: parent.width
            height: parent.height

            Item {
                id: headerArea

                width: parent.width
                height: headerHeight

                Column {
                    spacing: 6
                    topPadding: 10
                    leftPadding: 10
                    width: parent.width - 20
                    height: parent.height

                    Item {
                        width: parent.width
                        height: 26

                        Text {
                            id: playlistText

                            text: qsTr("播放列表")
                            font: DTK.fontManager.t5
                            color: Util.textColor
                        }

                    }

                    Item {
                        width: parent.width
                        height: 17

                        Item {
                            width: parent.width * 0.3
                            height: parent.height
                            anchors.left: parent.left

                            Text {
                                id: songsCountText

                                text: playlistMediaCount + " 首歌曲"
                                color: Util.textColor
                                font: DTK.fontManager.t7
                            }

                        }

                        ToolButton {
                            id: deleteBtn

                            height: 20
                            anchors.right: parent.right
                            anchors.rightMargin: 2
                            icon.name: "playlist_delete"
                            icon.width: 20
                            icon.height: 20
                            enabled: playlistMediaCount == 0 ? false : true
                            text: "清空"
                            font: DTK.fontManager.t9
                            display: AbstractButton.TextBesideIcon
                            spacing: 1
                            padding: 0
                            onClicked: {
                                Player.clearPlaylist();
                            }

                            textColor: Palette {
                                hovered: palette.highlight
                            }

                        }

                    }

                }

            }

            ListView {
                id: playlistView

                width: parent.width
                height: parent.height - headerHeight
                anchors.left: parent.left
                clip: true
                focus: true

                ScrollBar.vertical: ScrollBar {
                }

                delegate: PlaylistDelegate {
                    id: playlistDelegate

                    width: 300
                    height: 56
                    x: 10
                    backgroundVisible: index % 2 === 0
                }

            }

        }

        Connections {
            function onStopped() {
                isPlaylistShow = false;
            }

            target: playlistHideAnimation
        }

        background: D.InWindowBlur {
            implicitWidth: playlistRoot.width
            implicitHeight: playlistRoot.height
            radius: 32
            offscreen: true

            D.ItemViewport {
                anchors.fill: parent
                fixed: true
                sourceItem: parent
                radius: playlistRoot.radius
                hideSource: false
            }

            BoxShadow {
                anchors.fill: backgroundRect
                shadowOffsetX: 0
                shadowOffsetY: 4
                shadowColor: playlistRoot.D.ColorSelector.dropShadowColor
                shadowBlur: 20
                cornerRadius: backgroundRect.radius
                spread: 0
                hollow: true
            }

            Rectangle {
                id: backgroundRect

                anchors.fill: parent
                radius: playlistRoot.radius
                color: playlistRoot.D.ColorSelector.backgroundColor

                border {
                    width: 0
                }

            }

        }

        NumberAnimation on x {
            id: playlistRaiseAnimation

            running: false
            from: rootWindow.width
            to: rootWindow.width - 320 - 10
            duration: 500
            easing.type: Easing.OutQuart
        }

        NumberAnimation on x {
            id: playlistHideAnimation

            running: false
            from: rootWindow.width - 320 - 10
            to: rootWindow.width
            duration: 300
            easing.type: Easing.OutQuart
            onStopped: playlistHided()
        }

    }

}
