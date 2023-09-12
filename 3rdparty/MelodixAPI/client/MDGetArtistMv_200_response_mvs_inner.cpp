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

#include "MDGetArtistMv_200_response_mvs_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetArtistMv_200_response_mvs_inner::MDGetArtistMv_200_response_mvs_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetArtistMv_200_response_mvs_inner::MDGetArtistMv_200_response_mvs_inner() {
    this->initializeModel();
}

MDGetArtistMv_200_response_mvs_inner::~MDGetArtistMv_200_response_mvs_inner() {}

void MDGetArtistMv_200_response_mvs_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_artist_isSet = false;
    m_artist_isValid = false;

    m_imgurl_isSet = false;
    m_imgurl_isValid = false;

    m_imgurl16v9_isSet = false;
    m_imgurl16v9_isValid = false;

    m_artist_name_isSet = false;
    m_artist_name_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;

    m_play_count_isSet = false;
    m_play_count_isValid = false;

    m_publish_time_isSet = false;
    m_publish_time_isValid = false;

    m_subed_isSet = false;
    m_subed_isValid = false;
}

void MDGetArtistMv_200_response_mvs_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetArtistMv_200_response_mvs_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::MelodixAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_status_isValid = ::MelodixAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_artist_isValid = ::MelodixAPI::fromJsonValue(m_artist, json[QString("artist")]);
    m_artist_isSet = !json[QString("artist")].isNull() && m_artist_isValid;

    m_imgurl_isValid = ::MelodixAPI::fromJsonValue(m_imgurl, json[QString("imgurl")]);
    m_imgurl_isSet = !json[QString("imgurl")].isNull() && m_imgurl_isValid;

    m_imgurl16v9_isValid = ::MelodixAPI::fromJsonValue(m_imgurl16v9, json[QString("imgurl16v9")]);
    m_imgurl16v9_isSet = !json[QString("imgurl16v9")].isNull() && m_imgurl16v9_isValid;

    m_artist_name_isValid = ::MelodixAPI::fromJsonValue(m_artist_name, json[QString("artistName")]);
    m_artist_name_isSet = !json[QString("artistName")].isNull() && m_artist_name_isValid;

    m_duration_isValid = ::MelodixAPI::fromJsonValue(m_duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;

    m_play_count_isValid = ::MelodixAPI::fromJsonValue(m_play_count, json[QString("playCount")]);
    m_play_count_isSet = !json[QString("playCount")].isNull() && m_play_count_isValid;

    m_publish_time_isValid = ::MelodixAPI::fromJsonValue(m_publish_time, json[QString("publishTime")]);
    m_publish_time_isSet = !json[QString("publishTime")].isNull() && m_publish_time_isValid;

    m_subed_isValid = ::MelodixAPI::fromJsonValue(m_subed, json[QString("subed")]);
    m_subed_isSet = !json[QString("subed")].isNull() && m_subed_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetArtistMv_200_response_mvs_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::MelodixAPI::toJsonValue(m_name));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::MelodixAPI::toJsonValue(m_status));
    }
    if (m_artist.isSet()) {
        obj.insert(QString("artist"), ::MelodixAPI::toJsonValue(m_artist));
    }
    if (m_imgurl_isSet) {
        obj.insert(QString("imgurl"), ::MelodixAPI::toJsonValue(m_imgurl));
    }
    if (m_imgurl16v9_isSet) {
        obj.insert(QString("imgurl16v9"), ::MelodixAPI::toJsonValue(m_imgurl16v9));
    }
    if (m_artist_name_isSet) {
        obj.insert(QString("artistName"), ::MelodixAPI::toJsonValue(m_artist_name));
    }
    if (m_duration_isSet) {
        obj.insert(QString("duration"), ::MelodixAPI::toJsonValue(m_duration));
    }
    if (m_play_count_isSet) {
        obj.insert(QString("playCount"), ::MelodixAPI::toJsonValue(m_play_count));
    }
    if (m_publish_time_isSet) {
        obj.insert(QString("publishTime"), ::MelodixAPI::toJsonValue(m_publish_time));
    }
    if (m_subed_isSet) {
        obj.insert(QString("subed"), ::MelodixAPI::toJsonValue(m_subed));
    }
    return obj;
}

qint32 MDGetArtistMv_200_response_mvs_inner::getId() const {
    return m_id;
}
void MDGetArtistMv_200_response_mvs_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_id_Valid() const{
    return m_id_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner::getName() const {
    return m_name;
}
void MDGetArtistMv_200_response_mvs_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_name_Set() const{
    return m_name_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_name_Valid() const{
    return m_name_isValid;
}

qint32 MDGetArtistMv_200_response_mvs_inner::getStatus() const {
    return m_status;
}
void MDGetArtistMv_200_response_mvs_inner::setStatus(const qint32 &status) {
    m_status = status;
    m_status_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_status_Set() const{
    return m_status_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_status_Valid() const{
    return m_status_isValid;
}

MDGetArtistMv_200_response_mvs_inner_artist MDGetArtistMv_200_response_mvs_inner::getArtist() const {
    return m_artist;
}
void MDGetArtistMv_200_response_mvs_inner::setArtist(const MDGetArtistMv_200_response_mvs_inner_artist &artist) {
    m_artist = artist;
    m_artist_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_artist_Set() const{
    return m_artist_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_artist_Valid() const{
    return m_artist_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner::getImgurl() const {
    return m_imgurl;
}
void MDGetArtistMv_200_response_mvs_inner::setImgurl(const QString &imgurl) {
    m_imgurl = imgurl;
    m_imgurl_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_imgurl_Set() const{
    return m_imgurl_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_imgurl_Valid() const{
    return m_imgurl_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner::getImgurl16v9() const {
    return m_imgurl16v9;
}
void MDGetArtistMv_200_response_mvs_inner::setImgurl16v9(const QString &imgurl16v9) {
    m_imgurl16v9 = imgurl16v9;
    m_imgurl16v9_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_imgurl16v9_Set() const{
    return m_imgurl16v9_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_imgurl16v9_Valid() const{
    return m_imgurl16v9_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner::getArtistName() const {
    return m_artist_name;
}
void MDGetArtistMv_200_response_mvs_inner::setArtistName(const QString &artist_name) {
    m_artist_name = artist_name;
    m_artist_name_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_artist_name_Set() const{
    return m_artist_name_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_artist_name_Valid() const{
    return m_artist_name_isValid;
}

qint32 MDGetArtistMv_200_response_mvs_inner::getDuration() const {
    return m_duration;
}
void MDGetArtistMv_200_response_mvs_inner::setDuration(const qint32 &duration) {
    m_duration = duration;
    m_duration_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_duration_Set() const{
    return m_duration_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_duration_Valid() const{
    return m_duration_isValid;
}

qint32 MDGetArtistMv_200_response_mvs_inner::getPlayCount() const {
    return m_play_count;
}
void MDGetArtistMv_200_response_mvs_inner::setPlayCount(const qint32 &play_count) {
    m_play_count = play_count;
    m_play_count_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_play_count_Set() const{
    return m_play_count_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_play_count_Valid() const{
    return m_play_count_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner::getPublishTime() const {
    return m_publish_time;
}
void MDGetArtistMv_200_response_mvs_inner::setPublishTime(const QString &publish_time) {
    m_publish_time = publish_time;
    m_publish_time_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_publish_time_Set() const{
    return m_publish_time_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_publish_time_Valid() const{
    return m_publish_time_isValid;
}

bool MDGetArtistMv_200_response_mvs_inner::isSubed() const {
    return m_subed;
}
void MDGetArtistMv_200_response_mvs_inner::setSubed(const bool &subed) {
    m_subed = subed;
    m_subed_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner::is_subed_Set() const{
    return m_subed_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner::is_subed_Valid() const{
    return m_subed_isValid;
}

bool MDGetArtistMv_200_response_mvs_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_artist.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_imgurl_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_imgurl16v9_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_artist_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_play_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_publish_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetArtistMv_200_response_mvs_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_status_isValid && m_artist_isValid && m_imgurl_isValid && m_imgurl16v9_isValid && m_artist_name_isValid && m_duration_isValid && m_play_count_isValid && m_publish_time_isValid && m_subed_isValid && true;
}

} // namespace MelodixAPI
