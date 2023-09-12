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

#include "MDGetArtistMv_200_response_mvs_inner_artist.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetArtistMv_200_response_mvs_inner_artist::MDGetArtistMv_200_response_mvs_inner_artist(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetArtistMv_200_response_mvs_inner_artist::MDGetArtistMv_200_response_mvs_inner_artist() {
    this->initializeModel();
}

MDGetArtistMv_200_response_mvs_inner_artist::~MDGetArtistMv_200_response_mvs_inner_artist() {}

void MDGetArtistMv_200_response_mvs_inner_artist::initializeModel() {

    m_img1v1_id_isSet = false;
    m_img1v1_id_isValid = false;

    m_topic_person_isSet = false;
    m_topic_person_isValid = false;

    m_music_size_isSet = false;
    m_music_size_isValid = false;

    m_brief_desc_isSet = false;
    m_brief_desc_isValid = false;

    m_pic_url_isSet = false;
    m_pic_url_isValid = false;

    m_img1v1_url_isSet = false;
    m_img1v1_url_isValid = false;

    m_album_size_isSet = false;
    m_album_size_isValid = false;

    m_trans_isSet = false;
    m_trans_isValid = false;

    m_alias_isSet = false;
    m_alias_isValid = false;

    m_pic_id_isSet = false;
    m_pic_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_img1v1_id_str_isSet = false;
    m_img1v1_id_str_isValid = false;
}

void MDGetArtistMv_200_response_mvs_inner_artist::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetArtistMv_200_response_mvs_inner_artist::fromJsonObject(QJsonObject json) {

    m_img1v1_id_isValid = ::MelodixAPI::fromJsonValue(m_img1v1_id, json[QString("img1v1Id")]);
    m_img1v1_id_isSet = !json[QString("img1v1Id")].isNull() && m_img1v1_id_isValid;

    m_topic_person_isValid = ::MelodixAPI::fromJsonValue(m_topic_person, json[QString("topicPerson")]);
    m_topic_person_isSet = !json[QString("topicPerson")].isNull() && m_topic_person_isValid;

    m_music_size_isValid = ::MelodixAPI::fromJsonValue(m_music_size, json[QString("musicSize")]);
    m_music_size_isSet = !json[QString("musicSize")].isNull() && m_music_size_isValid;

    m_brief_desc_isValid = ::MelodixAPI::fromJsonValue(m_brief_desc, json[QString("briefDesc")]);
    m_brief_desc_isSet = !json[QString("briefDesc")].isNull() && m_brief_desc_isValid;

    m_pic_url_isValid = ::MelodixAPI::fromJsonValue(m_pic_url, json[QString("picUrl")]);
    m_pic_url_isSet = !json[QString("picUrl")].isNull() && m_pic_url_isValid;

    m_img1v1_url_isValid = ::MelodixAPI::fromJsonValue(m_img1v1_url, json[QString("img1v1Url")]);
    m_img1v1_url_isSet = !json[QString("img1v1Url")].isNull() && m_img1v1_url_isValid;

    m_album_size_isValid = ::MelodixAPI::fromJsonValue(m_album_size, json[QString("albumSize")]);
    m_album_size_isSet = !json[QString("albumSize")].isNull() && m_album_size_isValid;

    m_trans_isValid = ::MelodixAPI::fromJsonValue(m_trans, json[QString("trans")]);
    m_trans_isSet = !json[QString("trans")].isNull() && m_trans_isValid;

    m_alias_isValid = ::MelodixAPI::fromJsonValue(m_alias, json[QString("alias")]);
    m_alias_isSet = !json[QString("alias")].isNull() && m_alias_isValid;

    m_pic_id_isValid = ::MelodixAPI::fromJsonValue(m_pic_id, json[QString("picId")]);
    m_pic_id_isSet = !json[QString("picId")].isNull() && m_pic_id_isValid;

    m_name_isValid = ::MelodixAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_img1v1_id_str_isValid = ::MelodixAPI::fromJsonValue(m_img1v1_id_str, json[QString("img1v1Id_str")]);
    m_img1v1_id_str_isSet = !json[QString("img1v1Id_str")].isNull() && m_img1v1_id_str_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner_artist::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetArtistMv_200_response_mvs_inner_artist::asJsonObject() const {
    QJsonObject obj;
    if (m_img1v1_id_isSet) {
        obj.insert(QString("img1v1Id"), ::MelodixAPI::toJsonValue(m_img1v1_id));
    }
    if (m_topic_person_isSet) {
        obj.insert(QString("topicPerson"), ::MelodixAPI::toJsonValue(m_topic_person));
    }
    if (m_music_size_isSet) {
        obj.insert(QString("musicSize"), ::MelodixAPI::toJsonValue(m_music_size));
    }
    if (m_brief_desc_isSet) {
        obj.insert(QString("briefDesc"), ::MelodixAPI::toJsonValue(m_brief_desc));
    }
    if (m_pic_url_isSet) {
        obj.insert(QString("picUrl"), ::MelodixAPI::toJsonValue(m_pic_url));
    }
    if (m_img1v1_url_isSet) {
        obj.insert(QString("img1v1Url"), ::MelodixAPI::toJsonValue(m_img1v1_url));
    }
    if (m_album_size_isSet) {
        obj.insert(QString("albumSize"), ::MelodixAPI::toJsonValue(m_album_size));
    }
    if (m_trans_isSet) {
        obj.insert(QString("trans"), ::MelodixAPI::toJsonValue(m_trans));
    }
    if (m_alias.size() > 0) {
        obj.insert(QString("alias"), ::MelodixAPI::toJsonValue(m_alias));
    }
    if (m_pic_id_isSet) {
        obj.insert(QString("picId"), ::MelodixAPI::toJsonValue(m_pic_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::MelodixAPI::toJsonValue(m_name));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_img1v1_id_str_isSet) {
        obj.insert(QString("img1v1Id_str"), ::MelodixAPI::toJsonValue(m_img1v1_id_str));
    }
    return obj;
}

qint32 MDGetArtistMv_200_response_mvs_inner_artist::getImg1v1Id() const {
    return m_img1v1_id;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setImg1v1Id(const qint32 &img1v1_id) {
    m_img1v1_id = img1v1_id;
    m_img1v1_id_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_img1v1_id_Set() const{
    return m_img1v1_id_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_img1v1_id_Valid() const{
    return m_img1v1_id_isValid;
}

qint32 MDGetArtistMv_200_response_mvs_inner_artist::getTopicPerson() const {
    return m_topic_person;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setTopicPerson(const qint32 &topic_person) {
    m_topic_person = topic_person;
    m_topic_person_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_topic_person_Set() const{
    return m_topic_person_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_topic_person_Valid() const{
    return m_topic_person_isValid;
}

qint32 MDGetArtistMv_200_response_mvs_inner_artist::getMusicSize() const {
    return m_music_size;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setMusicSize(const qint32 &music_size) {
    m_music_size = music_size;
    m_music_size_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_music_size_Set() const{
    return m_music_size_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_music_size_Valid() const{
    return m_music_size_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner_artist::getBriefDesc() const {
    return m_brief_desc;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setBriefDesc(const QString &brief_desc) {
    m_brief_desc = brief_desc;
    m_brief_desc_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_brief_desc_Set() const{
    return m_brief_desc_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_brief_desc_Valid() const{
    return m_brief_desc_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner_artist::getPicUrl() const {
    return m_pic_url;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setPicUrl(const QString &pic_url) {
    m_pic_url = pic_url;
    m_pic_url_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_pic_url_Set() const{
    return m_pic_url_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_pic_url_Valid() const{
    return m_pic_url_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner_artist::getImg1v1Url() const {
    return m_img1v1_url;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setImg1v1Url(const QString &img1v1_url) {
    m_img1v1_url = img1v1_url;
    m_img1v1_url_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_img1v1_url_Set() const{
    return m_img1v1_url_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_img1v1_url_Valid() const{
    return m_img1v1_url_isValid;
}

qint32 MDGetArtistMv_200_response_mvs_inner_artist::getAlbumSize() const {
    return m_album_size;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setAlbumSize(const qint32 &album_size) {
    m_album_size = album_size;
    m_album_size_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_album_size_Set() const{
    return m_album_size_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_album_size_Valid() const{
    return m_album_size_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner_artist::getTrans() const {
    return m_trans;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setTrans(const QString &trans) {
    m_trans = trans;
    m_trans_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_trans_Set() const{
    return m_trans_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_trans_Valid() const{
    return m_trans_isValid;
}

QList<QString> MDGetArtistMv_200_response_mvs_inner_artist::getAlias() const {
    return m_alias;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setAlias(const QList<QString> &alias) {
    m_alias = alias;
    m_alias_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_alias_Set() const{
    return m_alias_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_alias_Valid() const{
    return m_alias_isValid;
}

qint32 MDGetArtistMv_200_response_mvs_inner_artist::getPicId() const {
    return m_pic_id;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setPicId(const qint32 &pic_id) {
    m_pic_id = pic_id;
    m_pic_id_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_pic_id_Set() const{
    return m_pic_id_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_pic_id_Valid() const{
    return m_pic_id_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner_artist::getName() const {
    return m_name;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_name_Set() const{
    return m_name_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_name_Valid() const{
    return m_name_isValid;
}

qint32 MDGetArtistMv_200_response_mvs_inner_artist::getId() const {
    return m_id;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_id_Valid() const{
    return m_id_isValid;
}

QString MDGetArtistMv_200_response_mvs_inner_artist::getImg1v1IdStr() const {
    return m_img1v1_id_str;
}
void MDGetArtistMv_200_response_mvs_inner_artist::setImg1v1IdStr(const QString &img1v1_id_str) {
    m_img1v1_id_str = img1v1_id_str;
    m_img1v1_id_str_isSet = true;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_img1v1_id_str_Set() const{
    return m_img1v1_id_str_isSet;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::is_img1v1_id_str_Valid() const{
    return m_img1v1_id_str_isValid;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_img1v1_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_topic_person_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_music_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_brief_desc_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pic_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_img1v1_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_album_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_trans_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_alias.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_pic_id_isSet) {
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

        if (m_img1v1_id_str_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetArtistMv_200_response_mvs_inner_artist::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_img1v1_id_isValid && m_topic_person_isValid && m_music_size_isValid && m_brief_desc_isValid && m_pic_url_isValid && m_img1v1_url_isValid && m_album_size_isValid && m_trans_isValid && m_alias_isValid && m_pic_id_isValid && m_name_isValid && m_id_isValid && m_img1v1_id_str_isValid && true;
}

} // namespace MelodixAPI
