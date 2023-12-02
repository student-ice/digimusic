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

#include "MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner() {
    this->initializeModel();
}

MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::~MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner() {}

void MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::initializeModel() {

    m_rate_isSet = false;
    m_rate_isValid = false;

    m_charge_type_isSet = false;
    m_charge_type_isValid = false;
}

void MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::fromJsonObject(QJsonObject json) {

    m_rate_isValid = ::MelodixAPI::fromJsonValue(m_rate, json[QString("rate")]);
    m_rate_isSet = !json[QString("rate")].isNull() && m_rate_isValid;

    m_charge_type_isValid = ::MelodixAPI::fromJsonValue(m_charge_type, json[QString("chargeType")]);
    m_charge_type_isSet = !json[QString("chargeType")].isNull() && m_charge_type_isValid;
}

QString MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_rate_isSet) {
        obj.insert(QString("rate"), ::MelodixAPI::toJsonValue(m_rate));
    }
    if (m_charge_type_isSet) {
        obj.insert(QString("chargeType"), ::MelodixAPI::toJsonValue(m_charge_type));
    }
    return obj;
}

qint32 MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::getRate() const {
    return m_rate;
}
void MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::setRate(const qint32 &rate) {
    m_rate = rate;
    m_rate_isSet = true;
}

bool MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::is_rate_Set() const{
    return m_rate_isSet;
}

bool MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::is_rate_Valid() const{
    return m_rate_isValid;
}

qint32 MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::getChargeType() const {
    return m_charge_type;
}
void MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::setChargeType(const qint32 &charge_type) {
    m_charge_type = charge_type;
    m_charge_type_isSet = true;
}

bool MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::is_charge_type_Set() const{
    return m_charge_type_isSet;
}

bool MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::is_charge_type_Valid() const{
    return m_charge_type_isValid;
}

bool MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_rate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_charge_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetRecommendedNewSongs_200_response_result_inner_song_privilege_chargeInfoList_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_rate_isValid && m_charge_type_isValid && true;
}

} // namespace MelodixAPI
