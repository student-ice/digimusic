import "../../router"
import "../../util"
import "../widgets"
import QtQuick 2.11
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.15
import org.deepin.dtk 1.0

Item {
    id: root

    property bool initing: true
    property int scrollWidth: rootWindow.width - 40
    // 是否已经将歌单全部歌曲添加到了播放列表
    property bool isAddToPlaylist: false
    property string currentPlaylistId: ""
    property var songs: []
    // 保存添加到播放列表的歌曲url,以及可以作为判断已经添加到播放列表的歌曲数
    property var songUrls: []
    // 已经加载到listview中的歌曲数量
    property int currentSelectIndex: -1
    // 歌单歌曲总数
    property int playlistSongAllCount: 0
    // 一次加载的歌曲数量
    property int limit: 0
    // 歌曲偏移量
    property int offset: 0
    // 是否正在“加载更多”
    property bool loadMore: false
    // 是否加载完全部歌曲
    property bool hasMore: true

    function getPlaylistSongsInfo() {
        // 如果当前未添加的歌曲数量大于50的时候，再加载50首
        // 否则通过歌曲总数减去当前的偏移量计算出剩余的歌曲（<50)，全部加载
        if (playlistSongAllCount - offset > 50) {
            limit = 50;
        } else {
            limit = playlistSongAllCount - offset;
            hasMore = false;
        }
        api.getPlaylistSongs(currentPlaylistId, limit, offset);
    }

    function playPlaylistAllMusic(index = -1) {
        function onReply(reply) {
            api.onSongUrlCompleted.disconnect(onReply);
            // 获取播放列表中的歌曲url数量，用作偏移量
            var urlOffset = songUrls.length;
            // 将新的歌曲url添加到songUrls数组中
            for (var i = 0; i < reply.length; i++) {
                songUrls[i + urlOffset] = reply[i].url;
            }
            // 将新的歌曲url添加到播放列表
            for (var i = urlOffset; i < songs.length; i++) {
                player.addPlaylistToPlaylist(songUrls[i], songs[i].id, songs[i].name, songs[i].al.picUrl, Util.spliceSinger(songs[i].ar), Util.formatDuration(songs[i].dt), Util.isVip(songs[i].fee));
            }
            // 如果没有传入index参数
            // 则说明点击的是播放按钮
            if (index != -1)
                player.play(index);
            else
                player.play(0);
            // 给player类设置当前的播放列表id
            player.setCurrentPlaylistId(currentPlaylistId);
            // 如果歌曲url总数等于歌单歌曲总数
            // 说明全部歌曲都已经添加到了播放列表
            if (songUrls.length == playlistSongAllCount)
                isAddToPlaylist = true;

        }

        // 切换播放列表
        player.switchToPlaylistMode();
        if (player.getCurrentPlaylistId() != "" && player.getCurrentPlaylistId() != currentPlaylistId) {
            console.log("当前歌单和播放列表中以添加的歌曲不是来自同一个歌单，先清空播放列表，再添加歌曲");
            player.clearPlaylist();
        }
        // 判断点击的歌曲是否已经添加到播放列表
        // 如果添加了直接播放
        if (index != -1 && index < songUrls.length) {
            player.play(index);
            return ;
        }
        // 点击的歌曲不在播放列表中
        // 将不在播放列表中的歌曲添加到播放列表
        var ids = [];
        for (var i = songUrls.length; i < songs.length; i++) ids.push(songs[i].id)
        // 将所有id使用逗号连接成一个字符串
        var concatenatedIds = ids.join(',');
        api.onSongUrlCompleted.connect(onReply);
        api.getSongUrl(concatenatedIds);
    }

    function onPlaylistCurrentIndexChanged() {
        currentSelectIndex = player.getCurrentIndex();
    }

    function onPlaylistCleared() {
        currentSelectIndex = -1;
    }

    Component.onCompleted: {
        console.log("跳转歌单id为： " + Router.routeCurrent.id);
        currentPlaylistId = Router.routeCurrent.id;
        //getPlaylistDetail();
        api.getPlaylistDetail(currentPlaylistId);
        player.playlistCurrentIndexChanged.connect(onPlaylistCurrentIndexChanged);
        player.playlistCleared.connect(onPlaylistCleared);
    }
    Component.onDestruction: {
        console.log("歌单详情页销毁，断开信号的连接");
        player.playlistCurrentIndexChanged.disconnect(onPlaylistCurrentIndexChanged);
        player.playlistCleared.disconnect(onPlaylistCleared);
    }

    Connections {
        function onPlaylistDetailCompleted(playlist) {
            head.cover = playlist.coverImgUrl;
            head.name = playlist.name;
            head.creatorNickname = "Playlist by " + playlist.creator.nickname;
            head.updateTime = "最后更新于 " + Util.formatTime(playlist.updateTime) + " · " + playlist.trackIds.length + "首歌";
            if (playlist.description != null)
                head.description = playlist.description.replace(/\n/g, ' ');
            else
                head.description = "暂无介绍";
            playlistSongAllCount = playlist.trackIds.length;
            console.log("歌单共有：" + playlistSongAllCount + "首歌曲");
            getPlaylistSongsInfo();
        }

        function onPlaylistSongsCompleted(reply) {
            for (const song of reply) {
                songs.push(song);
                listView.model.append({
                    "song": song
                });
            }
            initing = false;
            offset += reply.length;
            loadMore = false;
            console.log("加载的歌曲数量: limit: " + limit + " offset: " + offset + " songs数组长度: " + songs.length);
        }

        target: api
    }

    ListModel {
        id: songListModel
    }

    // 歌单详情页
    ScrollView {
        anchors.fill: parent
        clip: true
        ScrollBar.vertical.onPositionChanged: () => {
            const position = ScrollBar.vertical.position + ScrollBar.vertical.size;
            if (position > 0.99 && !loadMore && hasMore) {
                console.log("position: " + position + " 滚动到底部，加载更多");
                loadMore = true;
                getPlaylistSongsInfo();
            }
        }

        Column {
            id: body

            spacing: 20
            x: 20
            y: 5

            Item {
                width: 20
                height: 20
            }

            PlaylistDetailHead {
                id: head
            }

            ListView {
                id: listView

                width: scrollWidth
                x: 20
                height: offset * 55 + (offset - 1) * 5 + 30
                spacing: 5
                model: songListModel
                clip: true

                delegate: ItemDelegate {
                    width: listView.width - 40
                    height: 55
                    backgroundVisible: false
                    checked: index == currentSelectIndex
                    onClicked: {
                        if (!isAddToPlaylist)
                            playPlaylistAllMusic(index);
                        else
                            player.play(index);
                    }

                    RowLayout {
                        anchors.fill: parent

                        RoundedImage {
                            Layout.leftMargin: 10
                            imgSrc: modelData.al.picUrl
                            height: 45
                            width: 45
                        }

                        Item {
                            Layout.preferredWidth: 300
                            Layout.alignment: Qt.AlignVCenter
                            Layout.leftMargin: 5
                            height: 45

                            Label {
                                id: title

                                width: 280
                                text: modelData.name
                                anchors.left: parent.left
                                anchors.top: parent.top
                                anchors.topMargin: 2.5
                                font.bold: true
                                elide: Qt.ElideRight
                            }

                            Label {
                                width: 280
                                text: Util.spliceSinger(modelData.ar)
                                anchors.left: parent.left
                                anchors.top: title.bottom
                                elide: Qt.ElideRight
                            }

                        }

                        Label {
                            text: modelData.al.name
                        }

                        Item {
                            Layout.fillWidth: true
                        }

                        Label {
                            Layout.rightMargin: 10
                            font.bold: true
                            text: Util.formatDuration(modelData.dt)
                        }

                    }

                }

            }

        }

    }

    Rectangle {
        id: loadAnimation

        visible: initing
        anchors.fill: root
        color: Util.pageBackgroundColor

        Loading {
            anchors.centerIn: parent
        }

    }

    BusyIndicator {
        id: indicator

        visible: loadMore
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 5
        running: true
        width: 20
        height: 20
    }

}
