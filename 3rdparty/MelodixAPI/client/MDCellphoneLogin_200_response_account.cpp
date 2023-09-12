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

#include "MDCellphoneLogin_200_response_account.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDCellphoneLogin_200_response_account::MDCellphoneLogin_200_response_account(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDCellphoneLogin_200_response_account::MDCellphoneLogin_200_response_account() {
    this->initializeModel();
}

MDCellphoneLogin_200_response_account::~MDCellphoneLogin_200_response_account() {}

void MDCellphoneLogin_200_response_account::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_user_name_isSet = false;
    m_user_name_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_whitelist_authority_isSet = false;
    m_whitelist_authority_isValid = false;

    m_create_time_isSet = false;
    m_create_time_isValid = false;

    m_salt_isSet = false;
    m_salt_isValid = false;

    m_token_version_isSet = false;
    m_token_version_isValid = false;

    m_ban_isSet = false;
    m_ban_isValid = false;

    m_baoyue_version_isSet = false;
    m_baoyue_version_isValid = false;

    m_donate_version_isSet = false;
    m_donate_version_isValid = false;

    m_vip_type_isSet = false;
    m_vip_type_isValid = false;

    m_viptype_version_isSet = false;
    m_viptype_version_isValid = false;

    m_anonimous_user_isSet = false;
    m_anonimous_user_isValid = false;

    m_uninitialized_isSet = false;
    m_uninitialized_isValid = false;
}

void MDCellphoneLogin_200_response_account::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDCellphoneLogin_200_response_account::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_user_name_isValid = ::MelodixAPI::fromJsonValue(m_user_name, json[QString("userName")]);
    m_user_name_isSet = !json[QString("userName")].isNull() && m_user_name_isValid;

    m_type_isValid = ::MelodixAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_status_isValid = ::MelodixAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_whitelist_authority_isValid = ::MelodixAPI::fromJsonValue(m_whitelist_authority, json[QString("whitelistAuthority")]);
    m_whitelist_authority_isSet = !json[QString("whitelistAuthority")].isNull() && m_whitelist_authority_isValid;

    m_create_time_isValid = ::MelodixAPI::fromJsonValue(m_create_time, json[QString("createTime")]);
    m_create_time_isSet = !json[QString("createTime")].isNull() && m_create_time_isValid;

    m_salt_isValid = ::MelodixAPI::fromJsonValue(m_salt, json[QString("salt")]);
    m_salt_isSet = !json[QString("salt")].isNull() && m_salt_isValid;

    m_token_version_isValid = ::MelodixAPI::fromJsonValue(m_token_version, json[QString("tokenVersion")]);
    m_token_version_isSet = !json[QString("tokenVersion")].isNull() && m_token_version_isValid;

    m_ban_isValid = ::MelodixAPI::fromJsonValue(m_ban, json[QString("ban")]);
    m_ban_isSet = !json[QString("ban")].isNull() && m_ban_isValid;

    m_baoyue_version_isValid = ::MelodixAPI::fromJsonValue(m_baoyue_version, json[QString("baoyueVersion")]);
    m_baoyue_version_isSet = !json[QString("baoyueVersion")].isNull() && m_baoyue_version_isValid;

    m_donate_version_isValid = ::MelodixAPI::fromJsonValue(m_donate_version, json[QString("donateVersion")]);
    m_donate_version_isSet = !json[QString("donateVersion")].isNull() && m_donate_version_isValid;

    m_vip_type_isValid = ::MelodixAPI::fromJsonValue(m_vip_type, json[QString("vipType")]);
    m_vip_type_isSet = !json[QString("vipType")].isNull() && m_vip_type_isValid;

    m_viptype_version_isValid = ::MelodixAPI::fromJsonValue(m_viptype_version, json[QString("viptypeVersion")]);
    m_viptype_version_isSet = !json[QString("viptypeVersion")].isNull() && m_viptype_version_isValid;

    m_anonimous_user_isValid = ::MelodixAPI::fromJsonValue(m_anonimous_user, json[QString("anonimousUser")]);
    m_anonimous_user_isSet = !json[QString("anonimousUser")].isNull() && m_anonimous_user_isValid;

    m_uninitialized_isValid = ::MelodixAPI::fromJsonValue(m_uninitialized, json[QString("uninitialized")]);
    m_uninitialized_isSet = !json[QString("uninitialized")].isNull() && m_uninitialized_isValid;
}

QString MDCellphoneLogin_200_response_account::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDCellphoneLogin_200_response_account::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_user_name_isSet) {
        obj.insert(QString("userName"), ::MelodixAPI::toJsonValue(m_user_name));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::MelodixAPI::toJsonValue(m_type));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::MelodixAPI::toJsonValue(m_status));
    }
    if (m_whitelist_authority_isSet) {
        obj.insert(QString("whitelistAuthority"), ::MelodixAPI::toJsonValue(m_whitelist_authority));
    }
    if (m_create_time_isSet) {
        obj.insert(QString("createTime"), ::MelodixAPI::toJsonValue(m_create_time));
    }
    if (m_salt_isSet) {
        obj.insert(QString("salt"), ::MelodixAPI::toJsonValue(m_salt));
    }
    if (m_token_version_isSet) {
        obj.insert(QString("tokenVersion"), ::MelodixAPI::toJsonValue(m_token_version));
    }
    if (m_ban_isSet) {
        obj.insert(QString("ban"), ::MelodixAPI::toJsonValue(m_ban));
    }
    if (m_baoyue_version_isSet) {
        obj.insert(QString("baoyueVersion"), ::MelodixAPI::toJsonValue(m_baoyue_version));
    }
    if (m_donate_version_isSet) {
        obj.insert(QString("donateVersion"), ::MelodixAPI::toJsonValue(m_donate_version));
    }
    if (m_vip_type_isSet) {
        obj.insert(QString("vipType"), ::MelodixAPI::toJsonValue(m_vip_type));
    }
    if (m_viptype_version_isSet) {
        obj.insert(QString("viptypeVersion"), ::MelodixAPI::toJsonValue(m_viptype_version));
    }
    if (m_anonimous_user_isSet) {
        obj.insert(QString("anonimousUser"), ::MelodixAPI::toJsonValue(m_anonimous_user));
    }
    if (m_uninitialized_isSet) {
        obj.insert(QString("uninitialized"), ::MelodixAPI::toJsonValue(m_uninitialized));
    }
    return obj;
}

qint32 MDCellphoneLogin_200_response_account::getId() const {
    return m_id;
}
void MDCellphoneLogin_200_response_account::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_id_Set() const{
    return m_id_isSet;
}

bool MDCellphoneLogin_200_response_account::is_id_Valid() const{
    return m_id_isValid;
}

QString MDCellphoneLogin_200_response_account::getUserName() const {
    return m_user_name;
}
void MDCellphoneLogin_200_response_account::setUserName(const QString &user_name) {
    m_user_name = user_name;
    m_user_name_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_user_name_Set() const{
    return m_user_name_isSet;
}

bool MDCellphoneLogin_200_response_account::is_user_name_Valid() const{
    return m_user_name_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getType() const {
    return m_type;
}
void MDCellphoneLogin_200_response_account::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_type_Set() const{
    return m_type_isSet;
}

bool MDCellphoneLogin_200_response_account::is_type_Valid() const{
    return m_type_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getStatus() const {
    return m_status;
}
void MDCellphoneLogin_200_response_account::setStatus(const qint32 &status) {
    m_status = status;
    m_status_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_status_Set() const{
    return m_status_isSet;
}

bool MDCellphoneLogin_200_response_account::is_status_Valid() const{
    return m_status_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getWhitelistAuthority() const {
    return m_whitelist_authority;
}
void MDCellphoneLogin_200_response_account::setWhitelistAuthority(const qint32 &whitelist_authority) {
    m_whitelist_authority = whitelist_authority;
    m_whitelist_authority_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_whitelist_authority_Set() const{
    return m_whitelist_authority_isSet;
}

bool MDCellphoneLogin_200_response_account::is_whitelist_authority_Valid() const{
    return m_whitelist_authority_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getCreateTime() const {
    return m_create_time;
}
void MDCellphoneLogin_200_response_account::setCreateTime(const qint32 &create_time) {
    m_create_time = create_time;
    m_create_time_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_create_time_Set() const{
    return m_create_time_isSet;
}

bool MDCellphoneLogin_200_response_account::is_create_time_Valid() const{
    return m_create_time_isValid;
}

QString MDCellphoneLogin_200_response_account::getSalt() const {
    return m_salt;
}
void MDCellphoneLogin_200_response_account::setSalt(const QString &salt) {
    m_salt = salt;
    m_salt_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_salt_Set() const{
    return m_salt_isSet;
}

bool MDCellphoneLogin_200_response_account::is_salt_Valid() const{
    return m_salt_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getTokenVersion() const {
    return m_token_version;
}
void MDCellphoneLogin_200_response_account::setTokenVersion(const qint32 &token_version) {
    m_token_version = token_version;
    m_token_version_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_token_version_Set() const{
    return m_token_version_isSet;
}

bool MDCellphoneLogin_200_response_account::is_token_version_Valid() const{
    return m_token_version_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getBan() const {
    return m_ban;
}
void MDCellphoneLogin_200_response_account::setBan(const qint32 &ban) {
    m_ban = ban;
    m_ban_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_ban_Set() const{
    return m_ban_isSet;
}

bool MDCellphoneLogin_200_response_account::is_ban_Valid() const{
    return m_ban_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getBaoyueVersion() const {
    return m_baoyue_version;
}
void MDCellphoneLogin_200_response_account::setBaoyueVersion(const qint32 &baoyue_version) {
    m_baoyue_version = baoyue_version;
    m_baoyue_version_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_baoyue_version_Set() const{
    return m_baoyue_version_isSet;
}

bool MDCellphoneLogin_200_response_account::is_baoyue_version_Valid() const{
    return m_baoyue_version_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getDonateVersion() const {
    return m_donate_version;
}
void MDCellphoneLogin_200_response_account::setDonateVersion(const qint32 &donate_version) {
    m_donate_version = donate_version;
    m_donate_version_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_donate_version_Set() const{
    return m_donate_version_isSet;
}

bool MDCellphoneLogin_200_response_account::is_donate_version_Valid() const{
    return m_donate_version_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getVipType() const {
    return m_vip_type;
}
void MDCellphoneLogin_200_response_account::setVipType(const qint32 &vip_type) {
    m_vip_type = vip_type;
    m_vip_type_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_vip_type_Set() const{
    return m_vip_type_isSet;
}

bool MDCellphoneLogin_200_response_account::is_vip_type_Valid() const{
    return m_vip_type_isValid;
}

qint32 MDCellphoneLogin_200_response_account::getViptypeVersion() const {
    return m_viptype_version;
}
void MDCellphoneLogin_200_response_account::setViptypeVersion(const qint32 &viptype_version) {
    m_viptype_version = viptype_version;
    m_viptype_version_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_viptype_version_Set() const{
    return m_viptype_version_isSet;
}

bool MDCellphoneLogin_200_response_account::is_viptype_version_Valid() const{
    return m_viptype_version_isValid;
}

bool MDCellphoneLogin_200_response_account::isAnonimousUser() const {
    return m_anonimous_user;
}
void MDCellphoneLogin_200_response_account::setAnonimousUser(const bool &anonimous_user) {
    m_anonimous_user = anonimous_user;
    m_anonimous_user_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_anonimous_user_Set() const{
    return m_anonimous_user_isSet;
}

bool MDCellphoneLogin_200_response_account::is_anonimous_user_Valid() const{
    return m_anonimous_user_isValid;
}

bool MDCellphoneLogin_200_response_account::isUninitialized() const {
    return m_uninitialized;
}
void MDCellphoneLogin_200_response_account::setUninitialized(const bool &uninitialized) {
    m_uninitialized = uninitialized;
    m_uninitialized_isSet = true;
}

bool MDCellphoneLogin_200_response_account::is_uninitialized_Set() const{
    return m_uninitialized_isSet;
}

bool MDCellphoneLogin_200_response_account::is_uninitialized_Valid() const{
    return m_uninitialized_isValid;
}

bool MDCellphoneLogin_200_response_account::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_whitelist_authority_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_create_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_salt_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_token_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ban_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_baoyue_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_donate_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vip_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_viptype_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_anonimous_user_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_uninitialized_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDCellphoneLogin_200_response_account::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_user_name_isValid && m_type_isValid && m_status_isValid && m_whitelist_authority_isValid && m_create_time_isValid && m_salt_isValid && m_token_version_isValid && m_ban_isValid && m_baoyue_version_isValid && m_donate_version_isValid && m_vip_type_isValid && m_viptype_version_isValid && m_anonimous_user_isValid && m_uninitialized_isValid && true;
}

} // namespace MelodixAPI
