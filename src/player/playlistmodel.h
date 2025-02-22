#ifndef PLAYLISTMODEL_H
#define PLAYLISTMODEL_H

#include <QAbstractListModel>
#include <QDebug>
#include <QList>
#include <QObject>
#include <QUrl>

class PlaylistModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit PlaylistModel(QObject *parent = nullptr);

    QString getId(int index) const;
    QString getTitle(int index) const;
    QString getImageUrl(int index) const;
    QString getAuthor(int index) const;
    QString getDuration(int index) const;
    QString getAlbum(int index) const;
    int indexOfId(const QString &id) const;
    void interchangeSong(const int index, const int to);

    // 定义角色枚举
    enum PlaylistRoles {
        IdRole = Qt::UserRole + 1,
        TitleRole,
        ImageRole,
        AuthorRole,
        DurationRole,
        AlbumRole,
    };

    // 重写 QAbstractListModel 的成员函数
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QHash<int, QByteArray> roleNames() const override;

    // 自定义方法用于添加歌曲
    void addSong(const QString &id,
                 const QString &title,
                 const QString &author,
                 const QString &imageUrl,
                 const QString &duration,
                 const QString &album);

    // 清空模型
    void clear();

    // 获取所有id,使用,号拼接成一个字符串
    QString getAllId();

private:
    struct Song
    {
        QString id;
        QString title;
        QString author;
        QString imageUrl;
        QString duration;
        QString album;
    };

    QList<Song> m_songs;
};

#endif // PLAYLISTMODEL_H
