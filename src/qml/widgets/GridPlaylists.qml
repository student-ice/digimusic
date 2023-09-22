import "../../router"
import "../../util"
import QtQuick 2.11
import QtQuick.Controls 2.4
import org.deepin.dtk 1.0

Item {
    property ListModel lists

    Grid {
        id: gridLayout

        anchors.fill: parent
        columns: 5
        columnSpacing: 30
        rowSpacing: 30

        Repeater {
            id: repeater

            model: lists

            Item {
                width: (scrollWidth - 30 * 4) * 0.2
                height: width + 20

                Rectangle {
                    id: imgRect

                    width: parent.width
                    height: parent.width
                    color: "transparent"
                    radius: 5

                    RoundedImage {
                        id: img

                        width: parent.width - 10
                        height: parent.width - 10
                        anchors.centerIn: parent
                        imgSrc: modelData.coverImgUrl || modelData.picUrl || modelData.cover

                        MouseArea {
                            anchors.fill: parent
                            hoverEnabled: true
                            cursorShape: Qt.PointingHandCursor
                            onEntered: {
                                imgRect.color = Util.mouseHoverColor;
                            }
                            onExited: {
                                imgRect.color = "transparent";
                            }
                            onPressed: {
                                imgRect.color = Util.mousePressedColor;
                            }
                            onReleased: {
                                imgRect.color = Util.mouseReleasedColor;
                            }
                            onClicked: {
                                Router.showPlaylistDetail(modelData.id);
                            }
                        }

                    }

                }

                Item {
                    anchors.top: imgRect.bottom
                    anchors.horizontalCenter: imgRect.horizontalCenter
                    width: imgRect.width - 10
                    anchors.leftMargin: 10
                    height: 30

                    Text {
                        id: hotPlaylistTitle

                        anchors.left: parent.left
                        anchors.verticalCenter: parent.verticalCenter
                        width: parent.width
                        text: modelData.name || modelData.albumName
                        elide: Qt.ElideRight
                        color: Util.textColor

                        MouseArea {
                            anchors.fill: parent
                            hoverEnabled: true
                            cursorShape: Qt.PointingHandCursor
                            onEntered: {
                                hotPlaylistTitle.font.underline = true;
                                tooltip.visible = true;
                            }
                            onExited: {
                                hotPlaylistTitle.font.underline = false;
                                tooltip.visible = false;
                            }
                            onClicked: {
                                Router.showPlaylistDetail(modelData.id);
                            }
                        }

                        ToolTip {
                            id: tooltip
                            text: modelData.name
                            visible: false
                        }

                    }

                }

            }

        }

    }

    lists: ListModel {
    }

}
