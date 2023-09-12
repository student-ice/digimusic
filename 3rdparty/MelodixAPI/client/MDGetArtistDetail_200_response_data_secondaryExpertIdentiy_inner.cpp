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

#include "MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner() {
    this->initializeModel();
}

MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::~MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner() {}

void MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::initializeModel() {

    m_expert_identiy_id_isSet = false;
    m_expert_identiy_id_isValid = false;

    m_expert_identiy_name_isSet = false;
    m_expert_identiy_name_isValid = false;

    m_expert_identiy_count_isSet = false;
    m_expert_identiy_count_isValid = false;
}

void MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::fromJsonObject(QJsonObject json) {

    m_expert_identiy_id_isValid = ::MelodixAPI::fromJsonValue(m_expert_identiy_id, json[QString("expertIdentiyId")]);
    m_expert_identiy_id_isSet = !json[QString("expertIdentiyId")].isNull() && m_expert_identiy_id_isValid;

    m_expert_identiy_name_isValid = ::MelodixAPI::fromJsonValue(m_expert_identiy_name, json[QString("expertIdentiyName")]);
    m_expert_identiy_name_isSet = !json[QString("expertIdentiyName")].isNull() && m_expert_identiy_name_isValid;

    m_expert_identiy_count_isValid = ::MelodixAPI::fromJsonValue(m_expert_identiy_count, json[QString("expertIdentiyCount")]);
    m_expert_identiy_count_isSet = !json[QString("expertIdentiyCount")].isNull() && m_expert_identiy_count_isValid;
}

QString MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_expert_identiy_id_isSet) {
        obj.insert(QString("expertIdentiyId"), ::MelodixAPI::toJsonValue(m_expert_identiy_id));
    }
    if (m_expert_identiy_name_isSet) {
        obj.insert(QString("expertIdentiyName"), ::MelodixAPI::toJsonValue(m_expert_identiy_name));
    }
    if (m_expert_identiy_count_isSet) {
        obj.insert(QString("expertIdentiyCount"), ::MelodixAPI::toJsonValue(m_expert_identiy_count));
    }
    return obj;
}

qint32 MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::getExpertIdentiyId() const {
    return m_expert_identiy_id;
}
void MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::setExpertIdentiyId(const qint32 &expert_identiy_id) {
    m_expert_identiy_id = expert_identiy_id;
    m_expert_identiy_id_isSet = true;
}

bool MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::is_expert_identiy_id_Set() const{
    return m_expert_identiy_id_isSet;
}

bool MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::is_expert_identiy_id_Valid() const{
    return m_expert_identiy_id_isValid;
}

QString MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::getExpertIdentiyName() const {
    return m_expert_identiy_name;
}
void MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::setExpertIdentiyName(const QString &expert_identiy_name) {
    m_expert_identiy_name = expert_identiy_name;
    m_expert_identiy_name_isSet = true;
}

bool MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::is_expert_identiy_name_Set() const{
    return m_expert_identiy_name_isSet;
}

bool MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::is_expert_identiy_name_Valid() const{
    return m_expert_identiy_name_isValid;
}

qint32 MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::getExpertIdentiyCount() const {
    return m_expert_identiy_count;
}
void MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::setExpertIdentiyCount(const qint32 &expert_identiy_count) {
    m_expert_identiy_count = expert_identiy_count;
    m_expert_identiy_count_isSet = true;
}

bool MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::is_expert_identiy_count_Set() const{
    return m_expert_identiy_count_isSet;
}

bool MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::is_expert_identiy_count_Valid() const{
    return m_expert_identiy_count_isValid;
}

bool MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_expert_identiy_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expert_identiy_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expert_identiy_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_expert_identiy_id_isValid && m_expert_identiy_name_isValid && m_expert_identiy_count_isValid && true;
}

} // namespace MelodixAPI
