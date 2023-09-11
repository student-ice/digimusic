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

#include "MDGetArtistSingle_200_response_hotSongs_inner_al.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetArtistSingle_200_response_hotSongs_inner_al::MDGetArtistSingle_200_response_hotSongs_inner_al(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetArtistSingle_200_response_hotSongs_inner_al::MDGetArtistSingle_200_response_hotSongs_inner_al() {
    this->initializeModel();
}

MDGetArtistSingle_200_response_hotSongs_inner_al::~MDGetArtistSingle_200_response_hotSongs_inner_al() {}

void MDGetArtistSingle_200_response_hotSongs_inner_al::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_pic_url_isSet = false;
    m_pic_url_isValid = false;

    m_pic_str_isSet = false;
    m_pic_str_isValid = false;

    m_pic_isSet = false;
    m_pic_isValid = false;

    m_alia_isSet = false;
    m_alia_isValid = false;

    m_tns_isSet = false;
    m_tns_isValid = false;
}

void MDGetArtistSingle_200_response_hotSongs_inner_al::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetArtistSingle_200_response_hotSongs_inner_al::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::MelodixAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_pic_url_isValid = ::MelodixAPI::fromJsonValue(m_pic_url, json[QString("picUrl")]);
    m_pic_url_isSet = !json[QString("picUrl")].isNull() && m_pic_url_isValid;

    m_pic_str_isValid = ::MelodixAPI::fromJsonValue(m_pic_str, json[QString("pic_str")]);
    m_pic_str_isSet = !json[QString("pic_str")].isNull() && m_pic_str_isValid;

    m_pic_isValid = ::MelodixAPI::fromJsonValue(m_pic, json[QString("pic")]);
    m_pic_isSet = !json[QString("pic")].isNull() && m_pic_isValid;

    m_alia_isValid = ::MelodixAPI::fromJsonValue(m_alia, json[QString("alia")]);
    m_alia_isSet = !json[QString("alia")].isNull() && m_alia_isValid;

    m_tns_isValid = ::MelodixAPI::fromJsonValue(m_tns, json[QString("tns")]);
    m_tns_isSet = !json[QString("tns")].isNull() && m_tns_isValid;
}

QString MDGetArtistSingle_200_response_hotSongs_inner_al::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetArtistSingle_200_response_hotSongs_inner_al::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::MelodixAPI::toJsonValue(m_name));
    }
    if (m_pic_url_isSet) {
        obj.insert(QString("picUrl"), ::MelodixAPI::toJsonValue(m_pic_url));
    }
    if (m_pic_str_isSet) {
        obj.insert(QString("pic_str"), ::MelodixAPI::toJsonValue(m_pic_str));
    }
    if (m_pic_isSet) {
        obj.insert(QString("pic"), ::MelodixAPI::toJsonValue(m_pic));
    }
    if (m_alia.size() > 0) {
        obj.insert(QString("alia"), ::MelodixAPI::toJsonValue(m_alia));
    }
    if (m_tns.size() > 0) {
        obj.insert(QString("tns"), ::MelodixAPI::toJsonValue(m_tns));
    }
    return obj;
}

qint32 MDGetArtistSingle_200_response_hotSongs_inner_al::getId() const {
    return m_id;
}
void MDGetArtistSingle_200_response_hotSongs_inner_al::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_id_Valid() const{
    return m_id_isValid;
}

QString MDGetArtistSingle_200_response_hotSongs_inner_al::getName() const {
    return m_name;
}
void MDGetArtistSingle_200_response_hotSongs_inner_al::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_name_Set() const{
    return m_name_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_name_Valid() const{
    return m_name_isValid;
}

QString MDGetArtistSingle_200_response_hotSongs_inner_al::getPicUrl() const {
    return m_pic_url;
}
void MDGetArtistSingle_200_response_hotSongs_inner_al::setPicUrl(const QString &pic_url) {
    m_pic_url = pic_url;
    m_pic_url_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_pic_url_Set() const{
    return m_pic_url_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_pic_url_Valid() const{
    return m_pic_url_isValid;
}

QString MDGetArtistSingle_200_response_hotSongs_inner_al::getPicStr() const {
    return m_pic_str;
}
void MDGetArtistSingle_200_response_hotSongs_inner_al::setPicStr(const QString &pic_str) {
    m_pic_str = pic_str;
    m_pic_str_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_pic_str_Set() const{
    return m_pic_str_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_pic_str_Valid() const{
    return m_pic_str_isValid;
}

qint32 MDGetArtistSingle_200_response_hotSongs_inner_al::getPic() const {
    return m_pic;
}
void MDGetArtistSingle_200_response_hotSongs_inner_al::setPic(const qint32 &pic) {
    m_pic = pic;
    m_pic_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_pic_Set() const{
    return m_pic_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_pic_Valid() const{
    return m_pic_isValid;
}

QList<QString> MDGetArtistSingle_200_response_hotSongs_inner_al::getAlia() const {
    return m_alia;
}
void MDGetArtistSingle_200_response_hotSongs_inner_al::setAlia(const QList<QString> &alia) {
    m_alia = alia;
    m_alia_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_alia_Set() const{
    return m_alia_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_alia_Valid() const{
    return m_alia_isValid;
}

QList<QString> MDGetArtistSingle_200_response_hotSongs_inner_al::getTns() const {
    return m_tns;
}
void MDGetArtistSingle_200_response_hotSongs_inner_al::setTns(const QList<QString> &tns) {
    m_tns = tns;
    m_tns_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_tns_Set() const{
    return m_tns_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::is_tns_Valid() const{
    return m_tns_isValid;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::isSet() const {
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

        if (m_pic_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pic_str_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pic_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_alia.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_tns.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_al::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_pic_url_isValid && m_pic_str_isValid && m_pic_isValid && true;
}

} // namespace MelodixAPI
