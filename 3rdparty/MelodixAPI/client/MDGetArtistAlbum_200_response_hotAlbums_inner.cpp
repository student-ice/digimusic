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

#include "MDGetArtistAlbum_200_response_hotAlbums_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetArtistAlbum_200_response_hotAlbums_inner::MDGetArtistAlbum_200_response_hotAlbums_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetArtistAlbum_200_response_hotAlbums_inner::MDGetArtistAlbum_200_response_hotAlbums_inner() {
    this->initializeModel();
}

MDGetArtistAlbum_200_response_hotAlbums_inner::~MDGetArtistAlbum_200_response_hotAlbums_inner() {}

void MDGetArtistAlbum_200_response_hotAlbums_inner::initializeModel() {

    m_songs_isSet = false;
    m_songs_isValid = false;

    m_artists_isSet = false;
    m_artists_isValid = false;

    m_artist_isSet = false;
    m_artist_isValid = false;

    m_publish_time_isSet = false;
    m_publish_time_isValid = false;

    m_pic_url_isSet = false;
    m_pic_url_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_size_isSet = false;
    m_size_isValid = false;

    m_blur_pic_url_isSet = false;
    m_blur_pic_url_isValid = false;
}

void MDGetArtistAlbum_200_response_hotAlbums_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetArtistAlbum_200_response_hotAlbums_inner::fromJsonObject(QJsonObject json) {

    m_songs_isValid = ::MelodixAPI::fromJsonValue(m_songs, json[QString("songs")]);
    m_songs_isSet = !json[QString("songs")].isNull() && m_songs_isValid;

    m_artists_isValid = ::MelodixAPI::fromJsonValue(m_artists, json[QString("artists")]);
    m_artists_isSet = !json[QString("artists")].isNull() && m_artists_isValid;

    m_artist_isValid = ::MelodixAPI::fromJsonValue(m_artist, json[QString("artist")]);
    m_artist_isSet = !json[QString("artist")].isNull() && m_artist_isValid;

    m_publish_time_isValid = ::MelodixAPI::fromJsonValue(m_publish_time, json[QString("publishTime")]);
    m_publish_time_isSet = !json[QString("publishTime")].isNull() && m_publish_time_isValid;

    m_pic_url_isValid = ::MelodixAPI::fromJsonValue(m_pic_url, json[QString("picUrl")]);
    m_pic_url_isSet = !json[QString("picUrl")].isNull() && m_pic_url_isValid;

    m_description_isValid = ::MelodixAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_name_isValid = ::MelodixAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_size_isValid = ::MelodixAPI::fromJsonValue(m_size, json[QString("size")]);
    m_size_isSet = !json[QString("size")].isNull() && m_size_isValid;

    m_blur_pic_url_isValid = ::MelodixAPI::fromJsonValue(m_blur_pic_url, json[QString("blurPicUrl")]);
    m_blur_pic_url_isSet = !json[QString("blurPicUrl")].isNull() && m_blur_pic_url_isValid;
}

QString MDGetArtistAlbum_200_response_hotAlbums_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetArtistAlbum_200_response_hotAlbums_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_songs.size() > 0) {
        obj.insert(QString("songs"), ::MelodixAPI::toJsonValue(m_songs));
    }
    if (m_artists.size() > 0) {
        obj.insert(QString("artists"), ::MelodixAPI::toJsonValue(m_artists));
    }
    if (m_artist.isSet()) {
        obj.insert(QString("artist"), ::MelodixAPI::toJsonValue(m_artist));
    }
    if (m_publish_time_isSet) {
        obj.insert(QString("publishTime"), ::MelodixAPI::toJsonValue(m_publish_time));
    }
    if (m_pic_url_isSet) {
        obj.insert(QString("picUrl"), ::MelodixAPI::toJsonValue(m_pic_url));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::MelodixAPI::toJsonValue(m_description));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::MelodixAPI::toJsonValue(m_name));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_size_isSet) {
        obj.insert(QString("size"), ::MelodixAPI::toJsonValue(m_size));
    }
    if (m_blur_pic_url_isSet) {
        obj.insert(QString("blurPicUrl"), ::MelodixAPI::toJsonValue(m_blur_pic_url));
    }
    return obj;
}

QList<QString> MDGetArtistAlbum_200_response_hotAlbums_inner::getSongs() const {
    return m_songs;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setSongs(const QList<QString> &songs) {
    m_songs = songs;
    m_songs_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_songs_Set() const{
    return m_songs_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_songs_Valid() const{
    return m_songs_isValid;
}

QList<MDGetArtistAlbum_200_response_hotAlbums_inner_artists_inner> MDGetArtistAlbum_200_response_hotAlbums_inner::getArtists() const {
    return m_artists;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setArtists(const QList<MDGetArtistAlbum_200_response_hotAlbums_inner_artists_inner> &artists) {
    m_artists = artists;
    m_artists_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_artists_Set() const{
    return m_artists_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_artists_Valid() const{
    return m_artists_isValid;
}

MDGetArtistAlbum_200_response_hotAlbums_inner_artist MDGetArtistAlbum_200_response_hotAlbums_inner::getArtist() const {
    return m_artist;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setArtist(const MDGetArtistAlbum_200_response_hotAlbums_inner_artist &artist) {
    m_artist = artist;
    m_artist_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_artist_Set() const{
    return m_artist_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_artist_Valid() const{
    return m_artist_isValid;
}

qint32 MDGetArtistAlbum_200_response_hotAlbums_inner::getPublishTime() const {
    return m_publish_time;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setPublishTime(const qint32 &publish_time) {
    m_publish_time = publish_time;
    m_publish_time_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_publish_time_Set() const{
    return m_publish_time_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_publish_time_Valid() const{
    return m_publish_time_isValid;
}

QString MDGetArtistAlbum_200_response_hotAlbums_inner::getPicUrl() const {
    return m_pic_url;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setPicUrl(const QString &pic_url) {
    m_pic_url = pic_url;
    m_pic_url_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_pic_url_Set() const{
    return m_pic_url_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_pic_url_Valid() const{
    return m_pic_url_isValid;
}

QString MDGetArtistAlbum_200_response_hotAlbums_inner::getDescription() const {
    return m_description;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_description_Set() const{
    return m_description_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_description_Valid() const{
    return m_description_isValid;
}

QString MDGetArtistAlbum_200_response_hotAlbums_inner::getName() const {
    return m_name;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_name_Set() const{
    return m_name_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_name_Valid() const{
    return m_name_isValid;
}

qint32 MDGetArtistAlbum_200_response_hotAlbums_inner::getId() const {
    return m_id;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_id_Valid() const{
    return m_id_isValid;
}

qint32 MDGetArtistAlbum_200_response_hotAlbums_inner::getSize() const {
    return m_size;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setSize(const qint32 &size) {
    m_size = size;
    m_size_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_size_Set() const{
    return m_size_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_size_Valid() const{
    return m_size_isValid;
}

QString MDGetArtistAlbum_200_response_hotAlbums_inner::getBlurPicUrl() const {
    return m_blur_pic_url;
}
void MDGetArtistAlbum_200_response_hotAlbums_inner::setBlurPicUrl(const QString &blur_pic_url) {
    m_blur_pic_url = blur_pic_url;
    m_blur_pic_url_isSet = true;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_blur_pic_url_Set() const{
    return m_blur_pic_url_isSet;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::is_blur_pic_url_Valid() const{
    return m_blur_pic_url_isValid;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_songs.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_artists.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_artist.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_publish_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pic_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_blur_pic_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetArtistAlbum_200_response_hotAlbums_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_songs_isValid && m_artists_isValid && m_artist_isValid && m_publish_time_isValid && m_pic_url_isValid && m_description_isValid && m_name_isValid && m_id_isValid && m_size_isValid && m_blur_pic_url_isValid && true;
}

} // namespace MelodixAPI
