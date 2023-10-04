import "../../router"
import "../../util"
import "../widgets"
import Melodix.Player 1.0
import QtQuick 2.11
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.15
import org.deepin.dtk 1.0

Item {
    id: root

    // 歌单所有歌曲是否以经全部添加到了播放列表
    property bool isAddToPlaylist: false
    property string myFavoriteId: ""
    property int playlistAllSongsCount: 0
    property int listViewCount: 0
    property int currentSelectIndex: -1
    // 保存添加到listview的数据
    property var songs: []
    // 保存添加到播放列表的歌曲url,以及可以作为判断已经添加到播放列表的歌曲数
    property var songUrls: []
    property bool initing: true
    // 一次取出的歌曲数量
    property int limit: 0
    // 偏移量
    property int offset: 0
    // 是否正在“加载更多”
    property bool loadMore: false
    // 是否加载完全部歌曲
    property bool hasMore: true

    function playPlaylistAllMusic(index = -1) {
        function onReply(urls) {
            api.onSongUrlCompleted.disconnect(onReply);
            var urlOffset = songUrls.length;
            for (var i = 0; i < urls.length; i++) {
                var song = urls[i];
                songUrls[i + urlOffset] = song.url;
            }
            for (var i = urlOffset; i < songs.length; i++) {
                Player.addPlaylistToPlaylist(songUrls[i], songs[i].id, songs[i].name, songs[i].al.picUrl, Util.spliceSinger(songs[i].ar), Util.formatDuration(songs[i].dt), songs[i].al.name, Util.isVip(songs[i].fee));
            }
            if (index != -1)
                Player.play(index);
            else
                Player.play(0);
            Player.setCurrentPlaylistId(myFavoriteId);
            if (songUrls.length == playlistAllSongsCount)
                isAddToPlaylist = true;

        }

        Player.switchToPlaylistMode();
        if (Player.getCurrentPlaylistId() != "" && Player.getCurrentPlaylistId() != myFavoriteId) {
            console.log("当前歌单和播放列表中以添加的歌曲不是来自同一个歌单，先清空播放列表，再添加歌曲");
            Player.clearPlaylist();
        }
        if (index != -1 && index < songUrls.length) {
            Player.play(index);
            return ;
        }
        var ids = [];
        for (var i = songUrls.length; i < songs.length; i++) ids.push(songs[i].id)
        // 将所有id使用逗号连接成一个字符串
        var concatenatedIds = ids.join(',');
        api.onSongUrlCompleted.connect(onReply);
        api.getSongUrl(concatenatedIds);
    }

    function getMyFavoriteSongs() {
        function onReply(newSongs) {
            api.onPlaylistSongsCompleted.disconnect(onReply);
            for (const song of newSongs) {
                songs.push(song);
                songListModel.append({
                    "song": song
                });
            }
            listViewCount += newSongs.length;
            offset += newSongs.length;
            loadMore = false;
            initing = false;
            console.log("加载的歌曲数量: limit: " + limit + " offset: " + offset + " songs数组长度: " + songs.length);
        }

        if (playlistAllSongsCount - offset > 50) {
            limit = 50;
        } else {
            limit = playlistAllSongsCount - offset;
            hasMore = false;
        }
        api.onPlaylistSongsCompleted.connect(onReply);
        api.getPlaylistSongs(myFavoriteId, limit, offset);
    }

    function onPlaylistCurrentIndexChanged() {
        currentSelectIndex = Player.getCurrentIndex();
    }

    function onPlaylistCleared() {
        currentSelectIndex = -1;
    }

    Component.onCompleted: {
        playlistAllSongsCount = Router.routeCurrent.count;
        myFavoriteId = Router.routeCurrent.id;
        Player.playlistCurrentIndexChanged.connect(onPlaylistCurrentIndexChanged);
        Player.playlistCleared.connect(onPlaylistCleared);
        getMyFavoriteSongs();
    }
    Component.onDestruction: {
        Player.playlistCurrentIndexChanged.disconnect(onPlaylistCurrentIndexChanged);
        Player.playlistCleared.disconnect(onPlaylistCleared);
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
                getMyFavoriteSongs();
            }
        }

        Column {
            spacing: 20
            x: Util.pageLeftPadding
            y: 5

            Item {
                width: scrollWidth
                height: 40

                Row {
                    anchors.fill: parent
                    spacing: 10

                    RoundedImage {
                        height: parent.height
                        width: height
                        borderRadius: height
                        imgSrc: userAvatar
                    }

                    Text {
                        text: userNickname + "喜欢的音乐"
                        font.pixelSize: DTK.fontManager.t3.pixelSize
                        color: Util.textColor
                    }

                }

            }

            ListView {
                id: listView

                width: scrollWidth
                x: 20
                height: listViewCount * 55 + (listViewCount - 1) * 5 + 30
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
