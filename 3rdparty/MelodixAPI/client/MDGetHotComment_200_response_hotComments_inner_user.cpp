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

#include "MDGetHotComment_200_response_hotComments_inner_user.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetHotComment_200_response_hotComments_inner_user::MDGetHotComment_200_response_hotComments_inner_user(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetHotComment_200_response_hotComments_inner_user::MDGetHotComment_200_response_hotComments_inner_user() {
    this->initializeModel();
}

MDGetHotComment_200_response_hotComments_inner_user::~MDGetHotComment_200_response_hotComments_inner_user() {}

void MDGetHotComment_200_response_hotComments_inner_user::initializeModel() {

    m_anonym_isSet = false;
    m_anonym_isValid = false;

    m_avatar_detail_isSet = false;
    m_avatar_detail_isValid = false;

    m_user_type_isSet = false;
    m_user_type_isValid = false;

    m_avatar_url_isSet = false;
    m_avatar_url_isValid = false;

    m_followed_isSet = false;
    m_followed_isValid = false;

    m_mutual_isSet = false;
    m_mutual_isValid = false;

    m_vip_rights_isSet = false;
    m_vip_rights_isValid = false;

    m_nickname_isSet = false;
    m_nickname_isValid = false;

    m_auth_status_isSet = false;
    m_auth_status_isValid = false;

    m_vip_type_isSet = false;
    m_vip_type_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;
}

void MDGetHotComment_200_response_hotComments_inner_user::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetHotComment_200_response_hotComments_inner_user::fromJsonObject(QJsonObject json) {

    m_anonym_isValid = ::MelodixAPI::fromJsonValue(m_anonym, json[QString("anonym")]);
    m_anonym_isSet = !json[QString("anonym")].isNull() && m_anonym_isValid;

    m_avatar_detail_isValid = ::MelodixAPI::fromJsonValue(m_avatar_detail, json[QString("avatarDetail")]);
    m_avatar_detail_isSet = !json[QString("avatarDetail")].isNull() && m_avatar_detail_isValid;

    m_user_type_isValid = ::MelodixAPI::fromJsonValue(m_user_type, json[QString("userType")]);
    m_user_type_isSet = !json[QString("userType")].isNull() && m_user_type_isValid;

    m_avatar_url_isValid = ::MelodixAPI::fromJsonValue(m_avatar_url, json[QString("avatarUrl")]);
    m_avatar_url_isSet = !json[QString("avatarUrl")].isNull() && m_avatar_url_isValid;

    m_followed_isValid = ::MelodixAPI::fromJsonValue(m_followed, json[QString("followed")]);
    m_followed_isSet = !json[QString("followed")].isNull() && m_followed_isValid;

    m_mutual_isValid = ::MelodixAPI::fromJsonValue(m_mutual, json[QString("mutual")]);
    m_mutual_isSet = !json[QString("mutual")].isNull() && m_mutual_isValid;

    m_vip_rights_isValid = ::MelodixAPI::fromJsonValue(m_vip_rights, json[QString("vipRights")]);
    m_vip_rights_isSet = !json[QString("vipRights")].isNull() && m_vip_rights_isValid;

    m_nickname_isValid = ::MelodixAPI::fromJsonValue(m_nickname, json[QString("nickname")]);
    m_nickname_isSet = !json[QString("nickname")].isNull() && m_nickname_isValid;

    m_auth_status_isValid = ::MelodixAPI::fromJsonValue(m_auth_status, json[QString("authStatus")]);
    m_auth_status_isSet = !json[QString("authStatus")].isNull() && m_auth_status_isValid;

    m_vip_type_isValid = ::MelodixAPI::fromJsonValue(m_vip_type, json[QString("vipType")]);
    m_vip_type_isSet = !json[QString("vipType")].isNull() && m_vip_type_isValid;

    m_user_id_isValid = ::MelodixAPI::fromJsonValue(m_user_id, json[QString("userId")]);
    m_user_id_isSet = !json[QString("userId")].isNull() && m_user_id_isValid;
}

QString MDGetHotComment_200_response_hotComments_inner_user::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetHotComment_200_response_hotComments_inner_user::asJsonObject() const {
    QJsonObject obj;
    if (m_anonym_isSet) {
        obj.insert(QString("anonym"), ::MelodixAPI::toJsonValue(m_anonym));
    }
    if (m_avatar_detail.isSet()) {
        obj.insert(QString("avatarDetail"), ::MelodixAPI::toJsonValue(m_avatar_detail));
    }
    if (m_user_type_isSet) {
        obj.insert(QString("userType"), ::MelodixAPI::toJsonValue(m_user_type));
    }
    if (m_avatar_url_isSet) {
        obj.insert(QString("avatarUrl"), ::MelodixAPI::toJsonValue(m_avatar_url));
    }
    if (m_followed_isSet) {
        obj.insert(QString("followed"), ::MelodixAPI::toJsonValue(m_followed));
    }
    if (m_mutual_isSet) {
        obj.insert(QString("mutual"), ::MelodixAPI::toJsonValue(m_mutual));
    }
    if (m_vip_rights.isSet()) {
        obj.insert(QString("vipRights"), ::MelodixAPI::toJsonValue(m_vip_rights));
    }
    if (m_nickname_isSet) {
        obj.insert(QString("nickname"), ::MelodixAPI::toJsonValue(m_nickname));
    }
    if (m_auth_status_isSet) {
        obj.insert(QString("authStatus"), ::MelodixAPI::toJsonValue(m_auth_status));
    }
    if (m_vip_type_isSet) {
        obj.insert(QString("vipType"), ::MelodixAPI::toJsonValue(m_vip_type));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("userId"), ::MelodixAPI::toJsonValue(m_user_id));
    }
    return obj;
}

qint32 MDGetHotComment_200_response_hotComments_inner_user::getAnonym() const {
    return m_anonym;
}
void MDGetHotComment_200_response_hotComments_inner_user::setAnonym(const qint32 &anonym) {
    m_anonym = anonym;
    m_anonym_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_anonym_Set() const{
    return m_anonym_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_anonym_Valid() const{
    return m_anonym_isValid;
}

MDGetTopPlaylist_200_response_playlists_inner_creator_avatarDetail MDGetHotComment_200_response_hotComments_inner_user::getAvatarDetail() const {
    return m_avatar_detail;
}
void MDGetHotComment_200_response_hotComments_inner_user::setAvatarDetail(const MDGetTopPlaylist_200_response_playlists_inner_creator_avatarDetail &avatar_detail) {
    m_avatar_detail = avatar_detail;
    m_avatar_detail_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_avatar_detail_Set() const{
    return m_avatar_detail_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_avatar_detail_Valid() const{
    return m_avatar_detail_isValid;
}

qint32 MDGetHotComment_200_response_hotComments_inner_user::getUserType() const {
    return m_user_type;
}
void MDGetHotComment_200_response_hotComments_inner_user::setUserType(const qint32 &user_type) {
    m_user_type = user_type;
    m_user_type_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_user_type_Set() const{
    return m_user_type_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_user_type_Valid() const{
    return m_user_type_isValid;
}

QString MDGetHotComment_200_response_hotComments_inner_user::getAvatarUrl() const {
    return m_avatar_url;
}
void MDGetHotComment_200_response_hotComments_inner_user::setAvatarUrl(const QString &avatar_url) {
    m_avatar_url = avatar_url;
    m_avatar_url_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_avatar_url_Set() const{
    return m_avatar_url_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_avatar_url_Valid() const{
    return m_avatar_url_isValid;
}

bool MDGetHotComment_200_response_hotComments_inner_user::isFollowed() const {
    return m_followed;
}
void MDGetHotComment_200_response_hotComments_inner_user::setFollowed(const bool &followed) {
    m_followed = followed;
    m_followed_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_followed_Set() const{
    return m_followed_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_followed_Valid() const{
    return m_followed_isValid;
}

bool MDGetHotComment_200_response_hotComments_inner_user::isMutual() const {
    return m_mutual;
}
void MDGetHotComment_200_response_hotComments_inner_user::setMutual(const bool &mutual) {
    m_mutual = mutual;
    m_mutual_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_mutual_Set() const{
    return m_mutual_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_mutual_Valid() const{
    return m_mutual_isValid;
}

MDGetHotComment_200_response_hotComments_inner_user_vipRights MDGetHotComment_200_response_hotComments_inner_user::getVipRights() const {
    return m_vip_rights;
}
void MDGetHotComment_200_response_hotComments_inner_user::setVipRights(const MDGetHotComment_200_response_hotComments_inner_user_vipRights &vip_rights) {
    m_vip_rights = vip_rights;
    m_vip_rights_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_vip_rights_Set() const{
    return m_vip_rights_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_vip_rights_Valid() const{
    return m_vip_rights_isValid;
}

QString MDGetHotComment_200_response_hotComments_inner_user::getNickname() const {
    return m_nickname;
}
void MDGetHotComment_200_response_hotComments_inner_user::setNickname(const QString &nickname) {
    m_nickname = nickname;
    m_nickname_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_nickname_Set() const{
    return m_nickname_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_nickname_Valid() const{
    return m_nickname_isValid;
}

qint32 MDGetHotComment_200_response_hotComments_inner_user::getAuthStatus() const {
    return m_auth_status;
}
void MDGetHotComment_200_response_hotComments_inner_user::setAuthStatus(const qint32 &auth_status) {
    m_auth_status = auth_status;
    m_auth_status_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_auth_status_Set() const{
    return m_auth_status_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_auth_status_Valid() const{
    return m_auth_status_isValid;
}

qint32 MDGetHotComment_200_response_hotComments_inner_user::getVipType() const {
    return m_vip_type;
}
void MDGetHotComment_200_response_hotComments_inner_user::setVipType(const qint32 &vip_type) {
    m_vip_type = vip_type;
    m_vip_type_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_vip_type_Set() const{
    return m_vip_type_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_vip_type_Valid() const{
    return m_vip_type_isValid;
}

qint32 MDGetHotComment_200_response_hotComments_inner_user::getUserId() const {
    return m_user_id;
}
void MDGetHotComment_200_response_hotComments_inner_user::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user::is_user_id_Valid() const{
    return m_user_id_isValid;
}

bool MDGetHotComment_200_response_hotComments_inner_user::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_anonym_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avatar_detail.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avatar_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_followed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mutual_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vip_rights.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_nickname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_auth_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vip_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetHotComment_200_response_hotComments_inner_user::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_anonym_isValid && m_avatar_detail_isValid && m_user_type_isValid && m_avatar_url_isValid && m_followed_isValid && m_mutual_isValid && m_vip_rights_isValid && m_nickname_isValid && m_auth_status_isValid && m_vip_type_isValid && m_user_id_isValid && true;
}

} // namespace MelodixAPI
