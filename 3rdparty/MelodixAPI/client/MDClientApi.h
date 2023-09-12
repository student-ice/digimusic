/**
 * MelodixAPI
 * Melodix API
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef MD_MDClientApi_H
#define MD_MDClientApi_H

#include "MDHelpers.h"
#include "MDHttpRequest.h"
#include "MDServerConfiguration.h"
#include "MDOauth.h"

#include "MDBanner_200_response.h"
#include "MDCellphoneLogin_200_response.h"
#include "MDCheckMusic_200_response.h"
#include "MDGetAccountInfo_200_response.h"
#include "MDGetArtistAlbum_200_response.h"
#include "MDGetArtistDetail_200_response.h"
#include "MDGetArtistMv_200_response.h"
#include "MDGetArtistSingle_200_response.h"
#include "MDGetArtistSublist_200_response.h"
#include "MDGetHotComment_200_response.h"
#include "MDGetLikeSongId_200_response.h"
#include "MDGetLoginStatus_200_response.h"
#include "MDGetLyric_200_response.h"
#include "MDGetMvSublist_200_response.h"
#include "MDGetPlaylistDetail_200_response.h"
#include "MDGetPlaylistTrackAll_200_response.h"
#include "MDGetPurchasedAlbum_200_response.h"
#include "MDGetQrKey_200_response.h"
#include "MDGetRecommendedMv_200_response.h"
#include "MDGetRecommendedNewSongs_200_response.h"
#include "MDGetRecommendedPlaylist_200_response.h"
#include "MDGetSongDetail_200_response.h"
#include "MDGetSongUrl_200_response.h"
#include "MDGetTopArtists_200_response.h"
#include "MDGetTopPlaylist_200_response.h"
#include "MDGetUserPlaylist_200_response.h"
#include "MDObject.h"
#include "MDQrCheck_200_response.h"
#include "MDQrCreate_200_response.h"
#include "MDSearch_200_response.h"
#include "MDSendCaptcha_200_response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace MelodixAPI {

class MDClientApi : public QObject {
    Q_OBJECT

public:
    MDClientApi(const int timeOut = 0);
    ~MDClientApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, MDServerVariable> &variables = QMap<QString, MDServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, MDServerVariable> &variables =  QMap<QString, MDServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, MDServerVariable> &variables =  QMap<QString, MDServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  type QString [optional]
    */
    void banner(const ::MelodixAPI::OptionalParam<QString> &type = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  phone QString [required]
    * @param[in]  password QString [required]
    * @param[in]  captcha QString [optional]
    * @param[in]  countrycode QString [optional]
    * @param[in]  md5_password QString [optional]
    */
    void cellphoneLogin(const QString &phone, const QString &password, const ::MelodixAPI::OptionalParam<QString> &captcha = ::MelodixAPI::OptionalParam<QString>(), const ::MelodixAPI::OptionalParam<QString> &countrycode = ::MelodixAPI::OptionalParam<QString>(), const ::MelodixAPI::OptionalParam<QString> &md5_password = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  id QString [required]
    * @param[in]  br QString [optional]
    */
    void checkMusic(const QString &id, const ::MelodixAPI::OptionalParam<QString> &br = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  timestamp double [required]
    */
    void getAccountInfo(const double &timestamp);

    /**
    * @param[in]  id QString [required]
    * @param[in]  limit QString [optional]
    */
    void getArtistAlbum(const QString &id, const ::MelodixAPI::OptionalParam<QString> &limit = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  id QString [required]
    */
    void getArtistDetail(const QString &id);

    /**
    * @param[in]  id QString [required]
    */
    void getArtistMv(const QString &id);

    /**
    * @param[in]  id QString [required]
    */
    void getArtistSingle(const QString &id);

    /**
    * @param[in]  timestamp QString [required]
    */
    void getArtistSublist(const QString &timestamp);

    /**
    * @param[in]  id QString [required]
    * @param[in]  type QString [required]
    */
    void getHotComment(const QString &id, const QString &type);

    /**
    * @param[in]  uid QString [required]
    */
    void getLikeSongId(const QString &uid);

    /**
    * @param[in]  timestamp QString [required]
    */
    void getLoginStatus(const QString &timestamp);

    /**
    * @param[in]  id QString [required]
    */
    void getLyric(const QString &id);

    /**
    * @param[in]  mvid QString [required]
    */
    void getMvDetail(const QString &mvid);

    /**
    * @param[in]  timestamp QString [required]
    */
    void getMvSublist(const QString &timestamp);

    /**
    * @param[in]  id QString [required]
    * @param[in]  r QString [optional]
    */
    void getMvUrl(const QString &id, const ::MelodixAPI::OptionalParam<QString> &r = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  id QString [required]
    */
    void getPlaylistDetail(const QString &id);

    /**
    * @param[in]  id QString [required]
    * @param[in]  limit QString [optional]
    * @param[in]  offset QString [optional]
    */
    void getPlaylistTrackAll(const QString &id, const ::MelodixAPI::OptionalParam<QString> &limit = ::MelodixAPI::OptionalParam<QString>(), const ::MelodixAPI::OptionalParam<QString> &offset = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  limit QString [optional]
    */
    void getPurchasedAlbum(const ::MelodixAPI::OptionalParam<QString> &limit = ::MelodixAPI::OptionalParam<QString>());


    void getQrKey();


    void getRecommendedMv();

    /**
    * @param[in]  limit QString [optional]
    */
    void getRecommendedNewSongs(const ::MelodixAPI::OptionalParam<QString> &limit = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  limit QString [optional]
    */
    void getRecommendedPlaylist(const ::MelodixAPI::OptionalParam<QString> &limit = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  ids QString [required]
    */
    void getSongDetail(const QString &ids);

    /**
    * @param[in]  id QString [required]
    */
    void getSongUrl(const QString &id);


    void getTopArtists();

    /**
    * @param[in]  cat QString [required]
    * @param[in]  order QString [optional]
    * @param[in]  limit QString [optional]
    * @param[in]  offset QString [optional]
    */
    void getTopPlaylist(const QString &cat, const ::MelodixAPI::OptionalParam<QString> &order = ::MelodixAPI::OptionalParam<QString>(), const ::MelodixAPI::OptionalParam<QString> &limit = ::MelodixAPI::OptionalParam<QString>(), const ::MelodixAPI::OptionalParam<QString> &offset = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  uid QString [required]
    */
    void getUserPlaylist(const QString &uid);

    /**
    * @param[in]  key QString [required]
    * @param[in]  body MDObject [optional]
    */
    void qrCheck(const QString &key, const ::MelodixAPI::OptionalParam<MDObject> &body = ::MelodixAPI::OptionalParam<MDObject>());

    /**
    * @param[in]  key QString [required]
    * @param[in]  qrimg double [optional]
    */
    void qrCreate(const QString &key, const ::MelodixAPI::OptionalParam<double> &qrimg = ::MelodixAPI::OptionalParam<double>());

    /**
    * @param[in]  keywords QString [required]
    * @param[in]  limit QString [optional]
    * @param[in]  type QString [optional]
    */
    void search(const QString &keywords, const ::MelodixAPI::OptionalParam<QString> &limit = ::MelodixAPI::OptionalParam<QString>(), const ::MelodixAPI::OptionalParam<QString> &type = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  phone QString [required]
    * @param[in]  ctcode QString [optional]
    */
    void sendCaptcha(const QString &phone, const ::MelodixAPI::OptionalParam<QString> &ctcode = ::MelodixAPI::OptionalParam<QString>());

    /**
    * @param[in]  phone QString [required]
    * @param[in]  captcha QString [required]
    */
    void verifyCaptcha(const QString &phone, const QString &captcha);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<MDServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    MDHttpRequestInput _latestInput;
    MDHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void bannerCallback(MDHttpRequestWorker *worker);
    void cellphoneLoginCallback(MDHttpRequestWorker *worker);
    void checkMusicCallback(MDHttpRequestWorker *worker);
    void getAccountInfoCallback(MDHttpRequestWorker *worker);
    void getArtistAlbumCallback(MDHttpRequestWorker *worker);
    void getArtistDetailCallback(MDHttpRequestWorker *worker);
    void getArtistMvCallback(MDHttpRequestWorker *worker);
    void getArtistSingleCallback(MDHttpRequestWorker *worker);
    void getArtistSublistCallback(MDHttpRequestWorker *worker);
    void getHotCommentCallback(MDHttpRequestWorker *worker);
    void getLikeSongIdCallback(MDHttpRequestWorker *worker);
    void getLoginStatusCallback(MDHttpRequestWorker *worker);
    void getLyricCallback(MDHttpRequestWorker *worker);
    void getMvDetailCallback(MDHttpRequestWorker *worker);
    void getMvSublistCallback(MDHttpRequestWorker *worker);
    void getMvUrlCallback(MDHttpRequestWorker *worker);
    void getPlaylistDetailCallback(MDHttpRequestWorker *worker);
    void getPlaylistTrackAllCallback(MDHttpRequestWorker *worker);
    void getPurchasedAlbumCallback(MDHttpRequestWorker *worker);
    void getQrKeyCallback(MDHttpRequestWorker *worker);
    void getRecommendedMvCallback(MDHttpRequestWorker *worker);
    void getRecommendedNewSongsCallback(MDHttpRequestWorker *worker);
    void getRecommendedPlaylistCallback(MDHttpRequestWorker *worker);
    void getSongDetailCallback(MDHttpRequestWorker *worker);
    void getSongUrlCallback(MDHttpRequestWorker *worker);
    void getTopArtistsCallback(MDHttpRequestWorker *worker);
    void getTopPlaylistCallback(MDHttpRequestWorker *worker);
    void getUserPlaylistCallback(MDHttpRequestWorker *worker);
    void qrCheckCallback(MDHttpRequestWorker *worker);
    void qrCreateCallback(MDHttpRequestWorker *worker);
    void searchCallback(MDHttpRequestWorker *worker);
    void sendCaptchaCallback(MDHttpRequestWorker *worker);
    void verifyCaptchaCallback(MDHttpRequestWorker *worker);

signals:

    void bannerSignal(MDBanner_200_response summary);
    void cellphoneLoginSignal(MDCellphoneLogin_200_response summary);
    void checkMusicSignal(MDCheckMusic_200_response summary);
    void getAccountInfoSignal(MDGetAccountInfo_200_response summary);
    void getArtistAlbumSignal(MDGetArtistAlbum_200_response summary);
    void getArtistDetailSignal(MDGetArtistDetail_200_response summary);
    void getArtistMvSignal(MDGetArtistMv_200_response summary);
    void getArtistSingleSignal(MDGetArtistSingle_200_response summary);
    void getArtistSublistSignal(MDGetArtistSublist_200_response summary);
    void getHotCommentSignal(MDGetHotComment_200_response summary);
    void getLikeSongIdSignal(MDGetLikeSongId_200_response summary);
    void getLoginStatusSignal(MDGetLoginStatus_200_response summary);
    void getLyricSignal(MDGetLyric_200_response summary);
    void getMvDetailSignal(MDObject summary);
    void getMvSublistSignal(MDGetMvSublist_200_response summary);
    void getMvUrlSignal(MDObject summary);
    void getPlaylistDetailSignal(MDGetPlaylistDetail_200_response summary);
    void getPlaylistTrackAllSignal(MDGetPlaylistTrackAll_200_response summary);
    void getPurchasedAlbumSignal(MDGetPurchasedAlbum_200_response summary);
    void getQrKeySignal(MDGetQrKey_200_response summary);
    void getRecommendedMvSignal(MDGetRecommendedMv_200_response summary);
    void getRecommendedNewSongsSignal(MDGetRecommendedNewSongs_200_response summary);
    void getRecommendedPlaylistSignal(MDGetRecommendedPlaylist_200_response summary);
    void getSongDetailSignal(MDGetSongDetail_200_response summary);
    void getSongUrlSignal(MDGetSongUrl_200_response summary);
    void getTopArtistsSignal(MDGetTopArtists_200_response summary);
    void getTopPlaylistSignal(MDGetTopPlaylist_200_response summary);
    void getUserPlaylistSignal(MDGetUserPlaylist_200_response summary);
    void qrCheckSignal(MDQrCheck_200_response summary);
    void qrCreateSignal(MDQrCreate_200_response summary);
    void searchSignal(MDSearch_200_response summary);
    void sendCaptchaSignal(MDSendCaptcha_200_response summary);
    void verifyCaptchaSignal(MDSendCaptcha_200_response summary);

    void bannerSignalFull(MDHttpRequestWorker *worker, MDBanner_200_response summary);
    void cellphoneLoginSignalFull(MDHttpRequestWorker *worker, MDCellphoneLogin_200_response summary);
    void checkMusicSignalFull(MDHttpRequestWorker *worker, MDCheckMusic_200_response summary);
    void getAccountInfoSignalFull(MDHttpRequestWorker *worker, MDGetAccountInfo_200_response summary);
    void getArtistAlbumSignalFull(MDHttpRequestWorker *worker, MDGetArtistAlbum_200_response summary);
    void getArtistDetailSignalFull(MDHttpRequestWorker *worker, MDGetArtistDetail_200_response summary);
    void getArtistMvSignalFull(MDHttpRequestWorker *worker, MDGetArtistMv_200_response summary);
    void getArtistSingleSignalFull(MDHttpRequestWorker *worker, MDGetArtistSingle_200_response summary);
    void getArtistSublistSignalFull(MDHttpRequestWorker *worker, MDGetArtistSublist_200_response summary);
    void getHotCommentSignalFull(MDHttpRequestWorker *worker, MDGetHotComment_200_response summary);
    void getLikeSongIdSignalFull(MDHttpRequestWorker *worker, MDGetLikeSongId_200_response summary);
    void getLoginStatusSignalFull(MDHttpRequestWorker *worker, MDGetLoginStatus_200_response summary);
    void getLyricSignalFull(MDHttpRequestWorker *worker, MDGetLyric_200_response summary);
    void getMvDetailSignalFull(MDHttpRequestWorker *worker, MDObject summary);
    void getMvSublistSignalFull(MDHttpRequestWorker *worker, MDGetMvSublist_200_response summary);
    void getMvUrlSignalFull(MDHttpRequestWorker *worker, MDObject summary);
    void getPlaylistDetailSignalFull(MDHttpRequestWorker *worker, MDGetPlaylistDetail_200_response summary);
    void getPlaylistTrackAllSignalFull(MDHttpRequestWorker *worker, MDGetPlaylistTrackAll_200_response summary);
    void getPurchasedAlbumSignalFull(MDHttpRequestWorker *worker, MDGetPurchasedAlbum_200_response summary);
    void getQrKeySignalFull(MDHttpRequestWorker *worker, MDGetQrKey_200_response summary);
    void getRecommendedMvSignalFull(MDHttpRequestWorker *worker, MDGetRecommendedMv_200_response summary);
    void getRecommendedNewSongsSignalFull(MDHttpRequestWorker *worker, MDGetRecommendedNewSongs_200_response summary);
    void getRecommendedPlaylistSignalFull(MDHttpRequestWorker *worker, MDGetRecommendedPlaylist_200_response summary);
    void getSongDetailSignalFull(MDHttpRequestWorker *worker, MDGetSongDetail_200_response summary);
    void getSongUrlSignalFull(MDHttpRequestWorker *worker, MDGetSongUrl_200_response summary);
    void getTopArtistsSignalFull(MDHttpRequestWorker *worker, MDGetTopArtists_200_response summary);
    void getTopPlaylistSignalFull(MDHttpRequestWorker *worker, MDGetTopPlaylist_200_response summary);
    void getUserPlaylistSignalFull(MDHttpRequestWorker *worker, MDGetUserPlaylist_200_response summary);
    void qrCheckSignalFull(MDHttpRequestWorker *worker, MDQrCheck_200_response summary);
    void qrCreateSignalFull(MDHttpRequestWorker *worker, MDQrCreate_200_response summary);
    void searchSignalFull(MDHttpRequestWorker *worker, MDSearch_200_response summary);
    void sendCaptchaSignalFull(MDHttpRequestWorker *worker, MDSendCaptcha_200_response summary);
    void verifyCaptchaSignalFull(MDHttpRequestWorker *worker, MDSendCaptcha_200_response summary);

    void bannerSignalE(MDBanner_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void cellphoneLoginSignalE(MDCellphoneLogin_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void checkMusicSignalE(MDCheckMusic_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getAccountInfoSignalE(MDGetAccountInfo_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistAlbumSignalE(MDGetArtistAlbum_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistDetailSignalE(MDGetArtistDetail_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistMvSignalE(MDGetArtistMv_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistSingleSignalE(MDGetArtistSingle_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistSublistSignalE(MDGetArtistSublist_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getHotCommentSignalE(MDGetHotComment_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getLikeSongIdSignalE(MDGetLikeSongId_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getLoginStatusSignalE(MDGetLoginStatus_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getLyricSignalE(MDGetLyric_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMvDetailSignalE(MDObject summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMvSublistSignalE(MDGetMvSublist_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMvUrlSignalE(MDObject summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getPlaylistDetailSignalE(MDGetPlaylistDetail_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getPlaylistTrackAllSignalE(MDGetPlaylistTrackAll_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getPurchasedAlbumSignalE(MDGetPurchasedAlbum_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getQrKeySignalE(MDGetQrKey_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getRecommendedMvSignalE(MDGetRecommendedMv_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getRecommendedNewSongsSignalE(MDGetRecommendedNewSongs_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getRecommendedPlaylistSignalE(MDGetRecommendedPlaylist_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSongDetailSignalE(MDGetSongDetail_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSongUrlSignalE(MDGetSongUrl_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getTopArtistsSignalE(MDGetTopArtists_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getTopPlaylistSignalE(MDGetTopPlaylist_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserPlaylistSignalE(MDGetUserPlaylist_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void qrCheckSignalE(MDQrCheck_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void qrCreateSignalE(MDQrCreate_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void searchSignalE(MDSearch_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendCaptchaSignalE(MDSendCaptcha_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void verifyCaptchaSignalE(MDSendCaptcha_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void bannerSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void cellphoneLoginSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void checkMusicSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAccountInfoSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistAlbumSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistDetailSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistMvSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistSingleSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getArtistSublistSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getHotCommentSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getLikeSongIdSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getLoginStatusSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getLyricSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMvDetailSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMvSublistSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMvUrlSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getPlaylistDetailSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getPlaylistTrackAllSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getPurchasedAlbumSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getQrKeySignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getRecommendedMvSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getRecommendedNewSongsSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getRecommendedPlaylistSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSongDetailSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSongUrlSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getTopArtistsSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getTopPlaylistSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserPlaylistSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void qrCheckSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void qrCreateSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void searchSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendCaptchaSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void verifyCaptchaSignalEFull(MDHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace MelodixAPI
#endif
