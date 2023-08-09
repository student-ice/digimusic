#ifndef NETWORK_H
#define NETWORK_H

#include <QDir>
#include <QNetworkAccessManager>
#include <QNetworkCookie>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QSettings>

class Network : public QObject
{
    Q_OBJECT
public:
    explicit Network(QObject *parent = nullptr);
    // qml发起请求函数
    Q_INVOKABLE void makeRequest(QString);
    // 判断用户是否以登录
    Q_INVOKABLE void accountInfo(QString);
    Q_INVOKABLE void saveCookie(QString);
    // 获取歌曲url
    Q_INVOKABLE void getSongUrl(QString);
    // 用户退出登录，清除cookie
    Q_INVOKABLE void logout();
    // 解析cookie
    void parseCookie();
signals:
    void sendReplyFinished(QString);
    void accountReplyFinished(QString);
    void songUrlRequestFinished(QByteArray);
public slots:
    Q_INVOKABLE void replyFinished(QNetworkReply *reply);
    Q_INVOKABLE void onAccountInfoReplyFinished(QNetworkReply *reply);
    Q_INVOKABLE void onSongUrlReplyFinished(QNetworkReply *reply);

private:
    QNetworkAccessManager *manager = nullptr;
    QString BASE_URL = "http://81.70.119.233:3000";
    // QSettings 对象用于保存和加载 Cookie
    QSettings *m_settings = nullptr;
    QString m_cookie;
    // 请求时根据是否是需要cookie,设置请求头
    QList<QNetworkCookie> m_request_cookies;
};

#endif // NETWORK_H