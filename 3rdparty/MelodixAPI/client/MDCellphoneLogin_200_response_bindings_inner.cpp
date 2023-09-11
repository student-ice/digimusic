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

#include "MDCellphoneLogin_200_response_bindings_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDCellphoneLogin_200_response_bindings_inner::MDCellphoneLogin_200_response_bindings_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDCellphoneLogin_200_response_bindings_inner::MDCellphoneLogin_200_response_bindings_inner() {
    this->initializeModel();
}

MDCellphoneLogin_200_response_bindings_inner::~MDCellphoneLogin_200_response_bindings_inner() {}

void MDCellphoneLogin_200_response_bindings_inner::initializeModel() {

    m_binding_time_isSet = false;
    m_binding_time_isValid = false;

    m_refresh_time_isSet = false;
    m_refresh_time_isValid = false;

    m_token_json_str_isSet = false;
    m_token_json_str_isValid = false;

    m_expires_in_isSet = false;
    m_expires_in_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_expired_isSet = false;
    m_expired_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;
}

void MDCellphoneLogin_200_response_bindings_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDCellphoneLogin_200_response_bindings_inner::fromJsonObject(QJsonObject json) {

    m_binding_time_isValid = ::MelodixAPI::fromJsonValue(m_binding_time, json[QString("bindingTime")]);
    m_binding_time_isSet = !json[QString("bindingTime")].isNull() && m_binding_time_isValid;

    m_refresh_time_isValid = ::MelodixAPI::fromJsonValue(m_refresh_time, json[QString("refreshTime")]);
    m_refresh_time_isSet = !json[QString("refreshTime")].isNull() && m_refresh_time_isValid;

    m_token_json_str_isValid = ::MelodixAPI::fromJsonValue(m_token_json_str, json[QString("tokenJsonStr")]);
    m_token_json_str_isSet = !json[QString("tokenJsonStr")].isNull() && m_token_json_str_isValid;

    m_expires_in_isValid = ::MelodixAPI::fromJsonValue(m_expires_in, json[QString("expiresIn")]);
    m_expires_in_isSet = !json[QString("expiresIn")].isNull() && m_expires_in_isValid;

    m_url_isValid = ::MelodixAPI::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_expired_isValid = ::MelodixAPI::fromJsonValue(m_expired, json[QString("expired")]);
    m_expired_isSet = !json[QString("expired")].isNull() && m_expired_isValid;

    m_user_id_isValid = ::MelodixAPI::fromJsonValue(m_user_id, json[QString("userId")]);
    m_user_id_isSet = !json[QString("userId")].isNull() && m_user_id_isValid;

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_type_isValid = ::MelodixAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;
}

QString MDCellphoneLogin_200_response_bindings_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDCellphoneLogin_200_response_bindings_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_binding_time_isSet) {
        obj.insert(QString("bindingTime"), ::MelodixAPI::toJsonValue(m_binding_time));
    }
    if (m_refresh_time_isSet) {
        obj.insert(QString("refreshTime"), ::MelodixAPI::toJsonValue(m_refresh_time));
    }
    if (m_token_json_str_isSet) {
        obj.insert(QString("tokenJsonStr"), ::MelodixAPI::toJsonValue(m_token_json_str));
    }
    if (m_expires_in_isSet) {
        obj.insert(QString("expiresIn"), ::MelodixAPI::toJsonValue(m_expires_in));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::MelodixAPI::toJsonValue(m_url));
    }
    if (m_expired_isSet) {
        obj.insert(QString("expired"), ::MelodixAPI::toJsonValue(m_expired));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("userId"), ::MelodixAPI::toJsonValue(m_user_id));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::MelodixAPI::toJsonValue(m_type));
    }
    return obj;
}

qint32 MDCellphoneLogin_200_response_bindings_inner::getBindingTime() const {
    return m_binding_time;
}
void MDCellphoneLogin_200_response_bindings_inner::setBindingTime(const qint32 &binding_time) {
    m_binding_time = binding_time;
    m_binding_time_isSet = true;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_binding_time_Set() const{
    return m_binding_time_isSet;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_binding_time_Valid() const{
    return m_binding_time_isValid;
}

qint32 MDCellphoneLogin_200_response_bindings_inner::getRefreshTime() const {
    return m_refresh_time;
}
void MDCellphoneLogin_200_response_bindings_inner::setRefreshTime(const qint32 &refresh_time) {
    m_refresh_time = refresh_time;
    m_refresh_time_isSet = true;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_refresh_time_Set() const{
    return m_refresh_time_isSet;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_refresh_time_Valid() const{
    return m_refresh_time_isValid;
}

QString MDCellphoneLogin_200_response_bindings_inner::getTokenJsonStr() const {
    return m_token_json_str;
}
void MDCellphoneLogin_200_response_bindings_inner::setTokenJsonStr(const QString &token_json_str) {
    m_token_json_str = token_json_str;
    m_token_json_str_isSet = true;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_token_json_str_Set() const{
    return m_token_json_str_isSet;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_token_json_str_Valid() const{
    return m_token_json_str_isValid;
}

qint32 MDCellphoneLogin_200_response_bindings_inner::getExpiresIn() const {
    return m_expires_in;
}
void MDCellphoneLogin_200_response_bindings_inner::setExpiresIn(const qint32 &expires_in) {
    m_expires_in = expires_in;
    m_expires_in_isSet = true;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_expires_in_Set() const{
    return m_expires_in_isSet;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_expires_in_Valid() const{
    return m_expires_in_isValid;
}

QString MDCellphoneLogin_200_response_bindings_inner::getUrl() const {
    return m_url;
}
void MDCellphoneLogin_200_response_bindings_inner::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_url_Set() const{
    return m_url_isSet;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_url_Valid() const{
    return m_url_isValid;
}

bool MDCellphoneLogin_200_response_bindings_inner::isExpired() const {
    return m_expired;
}
void MDCellphoneLogin_200_response_bindings_inner::setExpired(const bool &expired) {
    m_expired = expired;
    m_expired_isSet = true;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_expired_Set() const{
    return m_expired_isSet;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_expired_Valid() const{
    return m_expired_isValid;
}

qint32 MDCellphoneLogin_200_response_bindings_inner::getUserId() const {
    return m_user_id;
}
void MDCellphoneLogin_200_response_bindings_inner::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_user_id_Valid() const{
    return m_user_id_isValid;
}

qint32 MDCellphoneLogin_200_response_bindings_inner::getId() const {
    return m_id;
}
void MDCellphoneLogin_200_response_bindings_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_id_Set() const{
    return m_id_isSet;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_id_Valid() const{
    return m_id_isValid;
}

qint32 MDCellphoneLogin_200_response_bindings_inner::getType() const {
    return m_type;
}
void MDCellphoneLogin_200_response_bindings_inner::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_type_Set() const{
    return m_type_isSet;
}

bool MDCellphoneLogin_200_response_bindings_inner::is_type_Valid() const{
    return m_type_isValid;
}

bool MDCellphoneLogin_200_response_bindings_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_binding_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_refresh_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_token_json_str_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expires_in_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expired_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDCellphoneLogin_200_response_bindings_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_binding_time_isValid && m_refresh_time_isValid && m_token_json_str_isValid && m_expires_in_isValid && m_url_isValid && m_expired_isValid && m_user_id_isValid && m_id_isValid && m_type_isValid && true;
}

} // namespace MelodixAPI
