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

#include "MDGetLoginStatus_200_response_data.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetLoginStatus_200_response_data::MDGetLoginStatus_200_response_data(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetLoginStatus_200_response_data::MDGetLoginStatus_200_response_data() {
    this->initializeModel();
}

MDGetLoginStatus_200_response_data::~MDGetLoginStatus_200_response_data() {}

void MDGetLoginStatus_200_response_data::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_account_isSet = false;
    m_account_isValid = false;

    m_profile_isSet = false;
    m_profile_isValid = false;
}

void MDGetLoginStatus_200_response_data::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetLoginStatus_200_response_data::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::MelodixAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_account_isValid = ::MelodixAPI::fromJsonValue(m_account, json[QString("account")]);
    m_account_isSet = !json[QString("account")].isNull() && m_account_isValid;

    m_profile_isValid = ::MelodixAPI::fromJsonValue(m_profile, json[QString("profile")]);
    m_profile_isSet = !json[QString("profile")].isNull() && m_profile_isValid;
}

QString MDGetLoginStatus_200_response_data::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetLoginStatus_200_response_data::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::MelodixAPI::toJsonValue(m_code));
    }
    if (m_account.isSet()) {
        obj.insert(QString("account"), ::MelodixAPI::toJsonValue(m_account));
    }
    if (m_profile.isSet()) {
        obj.insert(QString("profile"), ::MelodixAPI::toJsonValue(m_profile));
    }
    return obj;
}

qint32 MDGetLoginStatus_200_response_data::getCode() const {
    return m_code;
}
void MDGetLoginStatus_200_response_data::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool MDGetLoginStatus_200_response_data::is_code_Set() const{
    return m_code_isSet;
}

bool MDGetLoginStatus_200_response_data::is_code_Valid() const{
    return m_code_isValid;
}

MDGetLoginStatus_200_response_data_account MDGetLoginStatus_200_response_data::getAccount() const {
    return m_account;
}
void MDGetLoginStatus_200_response_data::setAccount(const MDGetLoginStatus_200_response_data_account &account) {
    m_account = account;
    m_account_isSet = true;
}

bool MDGetLoginStatus_200_response_data::is_account_Set() const{
    return m_account_isSet;
}

bool MDGetLoginStatus_200_response_data::is_account_Valid() const{
    return m_account_isValid;
}

MDGetLoginStatus_200_response_data_profile MDGetLoginStatus_200_response_data::getProfile() const {
    return m_profile;
}
void MDGetLoginStatus_200_response_data::setProfile(const MDGetLoginStatus_200_response_data_profile &profile) {
    m_profile = profile;
    m_profile_isSet = true;
}

bool MDGetLoginStatus_200_response_data::is_profile_Set() const{
    return m_profile_isSet;
}

bool MDGetLoginStatus_200_response_data::is_profile_Valid() const{
    return m_profile_isValid;
}

bool MDGetLoginStatus_200_response_data::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_account.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_profile.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetLoginStatus_200_response_data::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_account_isValid && m_profile_isValid && true;
}

} // namespace MelodixAPI
