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

#include "MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege() {
    this->initializeModel();
}

MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::~MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege() {}

void MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::initializeModel() {

    m_res_consumable_isSet = false;
    m_res_consumable_isValid = false;

    m_user_consumable_isSet = false;
    m_user_consumable_isValid = false;
}

void MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::fromJsonObject(QJsonObject json) {

    m_res_consumable_isValid = ::MelodixAPI::fromJsonValue(m_res_consumable, json[QString("resConsumable")]);
    m_res_consumable_isSet = !json[QString("resConsumable")].isNull() && m_res_consumable_isValid;

    m_user_consumable_isValid = ::MelodixAPI::fromJsonValue(m_user_consumable, json[QString("userConsumable")]);
    m_user_consumable_isSet = !json[QString("userConsumable")].isNull() && m_user_consumable_isValid;
}

QString MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::asJsonObject() const {
    QJsonObject obj;
    if (m_res_consumable_isSet) {
        obj.insert(QString("resConsumable"), ::MelodixAPI::toJsonValue(m_res_consumable));
    }
    if (m_user_consumable_isSet) {
        obj.insert(QString("userConsumable"), ::MelodixAPI::toJsonValue(m_user_consumable));
    }
    return obj;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::isResConsumable() const {
    return m_res_consumable;
}
void MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::setResConsumable(const bool &res_consumable) {
    m_res_consumable = res_consumable;
    m_res_consumable_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::is_res_consumable_Set() const{
    return m_res_consumable_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::is_res_consumable_Valid() const{
    return m_res_consumable_isValid;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::isUserConsumable() const {
    return m_user_consumable;
}
void MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::setUserConsumable(const bool &user_consumable) {
    m_user_consumable = user_consumable;
    m_user_consumable_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::is_user_consumable_Set() const{
    return m_user_consumable_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::is_user_consumable_Valid() const{
    return m_user_consumable_isValid;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_res_consumable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_consumable_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_res_consumable_isValid && m_user_consumable_isValid && true;
}

} // namespace MelodixAPI
