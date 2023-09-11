/**
 * MelodixAPI
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner() {
    this->initializeModel();
}

MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::~MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner() {}

void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_area_id_isSet = false;
    m_area_id_isValid = false;

    m_initial_isSet = false;
    m_initial_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_pic_id_isSet = false;
    m_pic_id_isValid = false;

    m_music_size_isSet = false;
    m_music_size_isValid = false;

    m_album_size_isSet = false;
    m_album_size_isValid = false;

    m_score_isSet = false;
    m_score_isValid = false;

    m_click_isSet = false;
    m_click_isValid = false;

    m_hot_songs_isSet = false;
    m_hot_songs_isValid = false;

    m_hot_albums_isSet = false;
    m_hot_albums_isValid = false;

    m_albums_isSet = false;
    m_albums_isValid = false;

    m_brief_desc_isSet = false;
    m_brief_desc_isValid = false;

    m_desc_isSet = false;
    m_desc_isValid = false;

    m_valid_isSet = false;
    m_valid_isValid = false;

    m_copyright_isSet = false;
    m_copyright_isValid = false;
}

void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::MelodixAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_area_id_isValid = ::MelodixAPI::fromJsonValue(m_area_id, json[QString("areaId")]);
    m_area_id_isSet = !json[QString("areaId")].isNull() && m_area_id_isValid;

    m_initial_isValid = ::MelodixAPI::fromJsonValue(m_initial, json[QString("initial")]);
    m_initial_isSet = !json[QString("initial")].isNull() && m_initial_isValid;

    m_type_isValid = ::MelodixAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_pic_id_isValid = ::MelodixAPI::fromJsonValue(m_pic_id, json[QString("picId")]);
    m_pic_id_isSet = !json[QString("picId")].isNull() && m_pic_id_isValid;

    m_music_size_isValid = ::MelodixAPI::fromJsonValue(m_music_size, json[QString("musicSize")]);
    m_music_size_isSet = !json[QString("musicSize")].isNull() && m_music_size_isValid;

    m_album_size_isValid = ::MelodixAPI::fromJsonValue(m_album_size, json[QString("albumSize")]);
    m_album_size_isSet = !json[QString("albumSize")].isNull() && m_album_size_isValid;

    m_score_isValid = ::MelodixAPI::fromJsonValue(m_score, json[QString("score")]);
    m_score_isSet = !json[QString("score")].isNull() && m_score_isValid;

    m_click_isValid = ::MelodixAPI::fromJsonValue(m_click, json[QString("click")]);
    m_click_isSet = !json[QString("click")].isNull() && m_click_isValid;

    m_hot_songs_isValid = ::MelodixAPI::fromJsonValue(m_hot_songs, json[QString("hotSongs")]);
    m_hot_songs_isSet = !json[QString("hotSongs")].isNull() && m_hot_songs_isValid;

    m_hot_albums_isValid = ::MelodixAPI::fromJsonValue(m_hot_albums, json[QString("hotAlbums")]);
    m_hot_albums_isSet = !json[QString("hotAlbums")].isNull() && m_hot_albums_isValid;

    m_albums_isValid = ::MelodixAPI::fromJsonValue(m_albums, json[QString("albums")]);
    m_albums_isSet = !json[QString("albums")].isNull() && m_albums_isValid;

    m_brief_desc_isValid = ::MelodixAPI::fromJsonValue(m_brief_desc, json[QString("briefDesc")]);
    m_brief_desc_isSet = !json[QString("briefDesc")].isNull() && m_brief_desc_isValid;

    m_desc_isValid = ::MelodixAPI::fromJsonValue(m_desc, json[QString("desc")]);
    m_desc_isSet = !json[QString("desc")].isNull() && m_desc_isValid;

    m_valid_isValid = ::MelodixAPI::fromJsonValue(m_valid, json[QString("valid")]);
    m_valid_isSet = !json[QString("valid")].isNull() && m_valid_isValid;

    m_copyright_isValid = ::MelodixAPI::fromJsonValue(m_copyright, json[QString("copyright")]);
    m_copyright_isSet = !json[QString("copyright")].isNull() && m_copyright_isValid;
}

QString MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::MelodixAPI::toJsonValue(m_name));
    }
    if (m_area_id_isSet) {
        obj.insert(QString("areaId"), ::MelodixAPI::toJsonValue(m_area_id));
    }
    if (m_initial_isSet) {
        obj.insert(QString("initial"), ::MelodixAPI::toJsonValue(m_initial));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::MelodixAPI::toJsonValue(m_type));
    }
    if (m_pic_id_isSet) {
        obj.insert(QString("picId"), ::MelodixAPI::toJsonValue(m_pic_id));
    }
    if (m_music_size_isSet) {
        obj.insert(QString("musicSize"), ::MelodixAPI::toJsonValue(m_music_size));
    }
    if (m_album_size_isSet) {
        obj.insert(QString("albumSize"), ::MelodixAPI::toJsonValue(m_album_size));
    }
    if (m_score_isSet) {
        obj.insert(QString("score"), ::MelodixAPI::toJsonValue(m_score));
    }
    if (m_click_isSet) {
        obj.insert(QString("click"), ::MelodixAPI::toJsonValue(m_click));
    }
    if (m_hot_songs.size() > 0) {
        obj.insert(QString("hotSongs"), ::MelodixAPI::toJsonValue(m_hot_songs));
    }
    if (m_hot_albums.size() > 0) {
        obj.insert(QString("hotAlbums"), ::MelodixAPI::toJsonValue(m_hot_albums));
    }
    if (m_albums.size() > 0) {
        obj.insert(QString("albums"), ::MelodixAPI::toJsonValue(m_albums));
    }
    if (m_brief_desc_isSet) {
        obj.insert(QString("briefDesc"), ::MelodixAPI::toJsonValue(m_brief_desc));
    }
    if (m_desc_isSet) {
        obj.insert(QString("desc"), ::MelodixAPI::toJsonValue(m_desc));
    }
    if (m_valid_isSet) {
        obj.insert(QString("valid"), ::MelodixAPI::toJsonValue(m_valid));
    }
    if (m_copyright_isSet) {
        obj.insert(QString("copyright"), ::MelodixAPI::toJsonValue(m_copyright));
    }
    return obj;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getId() const {
    return m_id;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_id_Valid() const{
    return m_id_isValid;
}

QString MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getName() const {
    return m_name;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_name_Set() const{
    return m_name_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_name_Valid() const{
    return m_name_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getAreaId() const {
    return m_area_id;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setAreaId(const qint32 &area_id) {
    m_area_id = area_id;
    m_area_id_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_area_id_Set() const{
    return m_area_id_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_area_id_Valid() const{
    return m_area_id_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getInitial() const {
    return m_initial;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setInitial(const qint32 &initial) {
    m_initial = initial;
    m_initial_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_initial_Set() const{
    return m_initial_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_initial_Valid() const{
    return m_initial_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getType() const {
    return m_type;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_type_Set() const{
    return m_type_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_type_Valid() const{
    return m_type_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getPicId() const {
    return m_pic_id;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setPicId(const qint32 &pic_id) {
    m_pic_id = pic_id;
    m_pic_id_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_pic_id_Set() const{
    return m_pic_id_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_pic_id_Valid() const{
    return m_pic_id_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getMusicSize() const {
    return m_music_size;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setMusicSize(const qint32 &music_size) {
    m_music_size = music_size;
    m_music_size_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_music_size_Set() const{
    return m_music_size_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_music_size_Valid() const{
    return m_music_size_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getAlbumSize() const {
    return m_album_size;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setAlbumSize(const qint32 &album_size) {
    m_album_size = album_size;
    m_album_size_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_album_size_Set() const{
    return m_album_size_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_album_size_Valid() const{
    return m_album_size_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getScore() const {
    return m_score;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setScore(const qint32 &score) {
    m_score = score;
    m_score_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_score_Set() const{
    return m_score_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_score_Valid() const{
    return m_score_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getClick() const {
    return m_click;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setClick(const qint32 &click) {
    m_click = click;
    m_click_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_click_Set() const{
    return m_click_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_click_Valid() const{
    return m_click_isValid;
}

QList<QString> MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getHotSongs() const {
    return m_hot_songs;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setHotSongs(const QList<QString> &hot_songs) {
    m_hot_songs = hot_songs;
    m_hot_songs_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_hot_songs_Set() const{
    return m_hot_songs_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_hot_songs_Valid() const{
    return m_hot_songs_isValid;
}

QList<QString> MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getHotAlbums() const {
    return m_hot_albums;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setHotAlbums(const QList<QString> &hot_albums) {
    m_hot_albums = hot_albums;
    m_hot_albums_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_hot_albums_Set() const{
    return m_hot_albums_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_hot_albums_Valid() const{
    return m_hot_albums_isValid;
}

QList<QString> MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getAlbums() const {
    return m_albums;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setAlbums(const QList<QString> &albums) {
    m_albums = albums;
    m_albums_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_albums_Set() const{
    return m_albums_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_albums_Valid() const{
    return m_albums_isValid;
}

QString MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getBriefDesc() const {
    return m_brief_desc;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setBriefDesc(const QString &brief_desc) {
    m_brief_desc = brief_desc;
    m_brief_desc_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_brief_desc_Set() const{
    return m_brief_desc_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_brief_desc_Valid() const{
    return m_brief_desc_isValid;
}

QString MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getDesc() const {
    return m_desc;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setDesc(const QString &desc) {
    m_desc = desc;
    m_desc_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_desc_Set() const{
    return m_desc_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_desc_Valid() const{
    return m_desc_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getValid() const {
    return m_valid;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setValid(const qint32 &valid) {
    m_valid = valid;
    m_valid_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_valid_Set() const{
    return m_valid_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_valid_Valid() const{
    return m_valid_isValid;
}

qint32 MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::getCopyright() const {
    return m_copyright;
}
void MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::setCopyright(const qint32 &copyright) {
    m_copyright = copyright;
    m_copyright_isSet = true;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_copyright_Set() const{
    return m_copyright_isSet;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::is_copyright_Valid() const{
    return m_copyright_isValid;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::isSet() const {
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

        if (m_area_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_initial_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pic_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_music_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_album_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_score_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_click_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hot_songs.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_hot_albums.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_albums.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_brief_desc_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_desc_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_valid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_copyright_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetPurchasedAlbum_200_response_paidAlbums_inner_artists_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_area_id_isValid && m_initial_isValid && m_type_isValid && m_pic_id_isValid && m_music_size_isValid && m_album_size_isValid && m_score_isValid && m_click_isValid && m_hot_songs_isValid && m_hot_albums_isValid && m_albums_isValid && m_brief_desc_isValid && m_desc_isValid && m_valid_isValid && m_copyright_isValid && true;
}

} // namespace MelodixAPI
