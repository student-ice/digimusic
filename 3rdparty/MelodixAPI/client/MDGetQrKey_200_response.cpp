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

#include "MDGetQrKey_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetQrKey_200_response::MDGetQrKey_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetQrKey_200_response::MDGetQrKey_200_response() {
    this->initializeModel();
}

MDGetQrKey_200_response::~MDGetQrKey_200_response() {}

void MDGetQrKey_200_response::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;
}

void MDGetQrKey_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetQrKey_200_response::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::MelodixAPI::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_code_isValid = ::MelodixAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;
}

QString MDGetQrKey_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetQrKey_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_data.isSet()) {
        obj.insert(QString("data"), ::MelodixAPI::toJsonValue(m_data));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::MelodixAPI::toJsonValue(m_code));
    }
    return obj;
}

MDGetQrKey_200_response_data MDGetQrKey_200_response::getData() const {
    return m_data;
}
void MDGetQrKey_200_response::setData(const MDGetQrKey_200_response_data &data) {
    m_data = data;
    m_data_isSet = true;
}

bool MDGetQrKey_200_response::is_data_Set() const{
    return m_data_isSet;
}

bool MDGetQrKey_200_response::is_data_Valid() const{
    return m_data_isValid;
}

qint32 MDGetQrKey_200_response::getCode() const {
    return m_code;
}
void MDGetQrKey_200_response::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool MDGetQrKey_200_response::is_code_Set() const{
    return m_code_isSet;
}

bool MDGetQrKey_200_response::is_code_Valid() const{
    return m_code_isValid;
}

bool MDGetQrKey_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetQrKey_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_data_isValid && m_code_isValid && true;
}

} // namespace MelodixAPI
