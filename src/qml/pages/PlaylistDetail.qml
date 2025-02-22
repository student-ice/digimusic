import "../../router"
import "../../util"
import "../widgets"
import Melodix.API 1.0
import Melodix.Player 1.0
import QtQuick 2.11
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.15
import org.deepin.dtk 1.0

Item {
    id: root

    property bool initing: true
    // 是否已经将歌单全部歌曲添加到了播放列表
    property bool isAddToPlaylist: false
    property string currentPlaylistId: ""
    property var songs: []
    // 已经添加到播放列表的歌曲数量
    property int playlistSongCount: 0
    // 当前选中的歌曲索引
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
        function onReply(reply) {
            API.onPlaylistSongsCompleted.disconnect(onReply);
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

        // 如果当前未添加的歌曲数量大于50的时候，再加载50首
        // 否则通过歌曲总数减去当前的偏移量计算出剩余的歌曲（<50)，全部加载
        if (playlistSongAllCount - offset > 50) {
            limit = 50;
        } else {
            limit = playlistSongAllCount - offset;
            hasMore = false;
        }
        API.onPlaylistSongsCompleted.connect(onReply);
        API.getPlaylistSongs(currentPlaylistId, limit, offset);
    }

    function playPlaylistAllMusic(index = -1) {
        // 切换播放列表
        Player.switchToPlaylistMode();
        if (Player.getCurrentPlaylistId() != "" && Player.getCurrentPlaylistId() != currentPlaylistId) {
            console.log("当前歌单和播放列表中以添加的歌曲不是来自同一个歌单，先清空播放列表，再添加歌曲");
            Player.clearPlaylist();
        }
        // 判断点击的歌曲是否已经添加到播放列表
        // 如果添加了直接播放
        if (index != -1 && index < playlistSongCount) {
            Player.play(index);
            return ;
        }
        // 点击的歌曲不在播放列表中
        // 将不在播放列表中的歌曲添加到播放列表
        for (var i = playlistSongCount; i < songs.length; i++) {
            Player.addPlaylistToPlaylist(songs[i].id, songs[i].name, Util.spliceSinger(songs[i].ar), songs[i].pic, Util.formatDuration(songs[i].duration), songs[i].al);
        }
        playlistSongCount = songs.length;
        // 如果没有传入index参数
        // 则说明点击的是播放按钮
        if (index != -1)
            Player.play(index);
        else
            Player.play(0);
        // 给Player类设置当前的播放列表id
        Player.setCurrentPlaylistId(currentPlaylistId);
        // 如果playlistSongCount等于歌单歌曲总数
        // 说明全部歌曲都已经添加到了播放列表
        if (playlistSongCount == playlistSongAllCount)
            isAddToPlaylist = true;

    }

    function onPlaylistCurrentIndexChanged() {
        currentSelectIndex = Player.getCurrentIndex();
    }

    function onPlaylistCleared() {
        currentSelectIndex = -1;
    }

    Component.onCompleted: {
        console.log("跳转歌单id为： " + Router.routeCurrent.id);
        currentPlaylistId = Router.routeCurrent.id;
        API.getPlaylistDetail(currentPlaylistId);
        Player.playlistCurrentIndexChanged.connect(onPlaylistCurrentIndexChanged);
        Player.playlistCleared.connect(onPlaylistCleared);
    }
    Component.onDestruction: {
        console.log("歌单详情页销毁，断开信号的连接");
        Player.playlistCurrentIndexChanged.disconnect(onPlaylistCurrentIndexChanged);
        Player.playlistCleared.disconnect(onPlaylistCleared);
    }

    Connections {
        function onPlaylistDetailCompleted(playlist) {
            head.cover = playlist.coverImgUrl;
            head.name = playlist.name;
            head.creatorNickname = "Playlist by " + playlist.creator.nickname;
            head.updateTime = "最后更新于 " + Util.formatTime(playlist.updateTime) + " · " + playlist.trackCount + "首歌";
            if (playlist.description != null)
                head.description = playlist.description.replace(/\n/g, ' ');
            else
                head.description = "暂无介绍";
            playlistSongAllCount = playlist.trackCount;
            console.log("歌单共有：" + playlistSongAllCount + "首歌曲");
            getPlaylistSongsInfo();
        }

        target: API
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
            x: Util.pageLeftPadding
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

                delegate: ListViewDelegate {
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
