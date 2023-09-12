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

#include "MDGetHotComment_200_response_hotComments_inner_user_vipRights.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetHotComment_200_response_hotComments_inner_user_vipRights::MDGetHotComment_200_response_hotComments_inner_user_vipRights(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetHotComment_200_response_hotComments_inner_user_vipRights::MDGetHotComment_200_response_hotComments_inner_user_vipRights() {
    this->initializeModel();
}

MDGetHotComment_200_response_hotComments_inner_user_vipRights::~MDGetHotComment_200_response_hotComments_inner_user_vipRights() {}

void MDGetHotComment_200_response_hotComments_inner_user_vipRights::initializeModel() {

    m_associator_isSet = false;
    m_associator_isValid = false;

    m_music_package_isSet = false;
    m_music_package_isValid = false;

    m_red_vip_annual_count_isSet = false;
    m_red_vip_annual_count_isValid = false;

    m_red_vip_level_isSet = false;
    m_red_vip_level_isValid = false;
}

void MDGetHotComment_200_response_hotComments_inner_user_vipRights::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetHotComment_200_response_hotComments_inner_user_vipRights::fromJsonObject(QJsonObject json) {

    m_associator_isValid = ::MelodixAPI::fromJsonValue(m_associator, json[QString("associator")]);
    m_associator_isSet = !json[QString("associator")].isNull() && m_associator_isValid;

    m_music_package_isValid = ::MelodixAPI::fromJsonValue(m_music_package, json[QString("musicPackage")]);
    m_music_package_isSet = !json[QString("musicPackage")].isNull() && m_music_package_isValid;

    m_red_vip_annual_count_isValid = ::MelodixAPI::fromJsonValue(m_red_vip_annual_count, json[QString("redVipAnnualCount")]);
    m_red_vip_annual_count_isSet = !json[QString("redVipAnnualCount")].isNull() && m_red_vip_annual_count_isValid;

    m_red_vip_level_isValid = ::MelodixAPI::fromJsonValue(m_red_vip_level, json[QString("redVipLevel")]);
    m_red_vip_level_isSet = !json[QString("redVipLevel")].isNull() && m_red_vip_level_isValid;
}

QString MDGetHotComment_200_response_hotComments_inner_user_vipRights::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetHotComment_200_response_hotComments_inner_user_vipRights::asJsonObject() const {
    QJsonObject obj;
    if (m_associator.isSet()) {
        obj.insert(QString("associator"), ::MelodixAPI::toJsonValue(m_associator));
    }
    if (m_music_package.isSet()) {
        obj.insert(QString("musicPackage"), ::MelodixAPI::toJsonValue(m_music_package));
    }
    if (m_red_vip_annual_count_isSet) {
        obj.insert(QString("redVipAnnualCount"), ::MelodixAPI::toJsonValue(m_red_vip_annual_count));
    }
    if (m_red_vip_level_isSet) {
        obj.insert(QString("redVipLevel"), ::MelodixAPI::toJsonValue(m_red_vip_level));
    }
    return obj;
}

MDGetHotComment_200_response_hotComments_inner_user_vipRights_associator MDGetHotComment_200_response_hotComments_inner_user_vipRights::getAssociator() const {
    return m_associator;
}
void MDGetHotComment_200_response_hotComments_inner_user_vipRights::setAssociator(const MDGetHotComment_200_response_hotComments_inner_user_vipRights_associator &associator) {
    m_associator = associator;
    m_associator_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::is_associator_Set() const{
    return m_associator_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::is_associator_Valid() const{
    return m_associator_isValid;
}

MDGetHotComment_200_response_hotComments_inner_user_vipRights_associator MDGetHotComment_200_response_hotComments_inner_user_vipRights::getMusicPackage() const {
    return m_music_package;
}
void MDGetHotComment_200_response_hotComments_inner_user_vipRights::setMusicPackage(const MDGetHotComment_200_response_hotComments_inner_user_vipRights_associator &music_package) {
    m_music_package = music_package;
    m_music_package_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::is_music_package_Set() const{
    return m_music_package_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::is_music_package_Valid() const{
    return m_music_package_isValid;
}

qint32 MDGetHotComment_200_response_hotComments_inner_user_vipRights::getRedVipAnnualCount() const {
    return m_red_vip_annual_count;
}
void MDGetHotComment_200_response_hotComments_inner_user_vipRights::setRedVipAnnualCount(const qint32 &red_vip_annual_count) {
    m_red_vip_annual_count = red_vip_annual_count;
    m_red_vip_annual_count_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::is_red_vip_annual_count_Set() const{
    return m_red_vip_annual_count_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::is_red_vip_annual_count_Valid() const{
    return m_red_vip_annual_count_isValid;
}

qint32 MDGetHotComment_200_response_hotComments_inner_user_vipRights::getRedVipLevel() const {
    return m_red_vip_level;
}
void MDGetHotComment_200_response_hotComments_inner_user_vipRights::setRedVipLevel(const qint32 &red_vip_level) {
    m_red_vip_level = red_vip_level;
    m_red_vip_level_isSet = true;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::is_red_vip_level_Set() const{
    return m_red_vip_level_isSet;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::is_red_vip_level_Valid() const{
    return m_red_vip_level_isValid;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_associator.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_music_package.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_red_vip_annual_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_red_vip_level_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetHotComment_200_response_hotComments_inner_user_vipRights::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_associator_isValid && m_music_package_isValid && m_red_vip_annual_count_isValid && m_red_vip_level_isValid && true;
}

} // namespace MelodixAPI
