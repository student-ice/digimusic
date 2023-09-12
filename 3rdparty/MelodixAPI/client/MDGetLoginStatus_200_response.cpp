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

#include "MDGetLoginStatus_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetLoginStatus_200_response::MDGetLoginStatus_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetLoginStatus_200_response::MDGetLoginStatus_200_response() {
    this->initializeModel();
}

MDGetLoginStatus_200_response::~MDGetLoginStatus_200_response() {}

void MDGetLoginStatus_200_response::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;
}

void MDGetLoginStatus_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetLoginStatus_200_response::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::MelodixAPI::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;
}

QString MDGetLoginStatus_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetLoginStatus_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_data.isSet()) {
        obj.insert(QString("data"), ::MelodixAPI::toJsonValue(m_data));
    }
    return obj;
}

MDGetLoginStatus_200_response_data MDGetLoginStatus_200_response::getData() const {
    return m_data;
}
void MDGetLoginStatus_200_response::setData(const MDGetLoginStatus_200_response_data &data) {
    m_data = data;
    m_data_isSet = true;
}

bool MDGetLoginStatus_200_response::is_data_Set() const{
    return m_data_isSet;
}

bool MDGetLoginStatus_200_response::is_data_Valid() const{
    return m_data_isValid;
}

bool MDGetLoginStatus_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_data.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetLoginStatus_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_data_isValid && true;
}

} // namespace MelodixAPI
