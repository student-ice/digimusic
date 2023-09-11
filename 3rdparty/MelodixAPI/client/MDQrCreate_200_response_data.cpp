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

#include "MDQrCreate_200_response_data.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDQrCreate_200_response_data::MDQrCreate_200_response_data(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDQrCreate_200_response_data::MDQrCreate_200_response_data() {
    this->initializeModel();
}

MDQrCreate_200_response_data::~MDQrCreate_200_response_data() {}

void MDQrCreate_200_response_data::initializeModel() {

    m_qrurl_isSet = false;
    m_qrurl_isValid = false;

    m_qrimg_isSet = false;
    m_qrimg_isValid = false;
}

void MDQrCreate_200_response_data::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDQrCreate_200_response_data::fromJsonObject(QJsonObject json) {

    m_qrurl_isValid = ::MelodixAPI::fromJsonValue(m_qrurl, json[QString("qrurl")]);
    m_qrurl_isSet = !json[QString("qrurl")].isNull() && m_qrurl_isValid;

    m_qrimg_isValid = ::MelodixAPI::fromJsonValue(m_qrimg, json[QString("qrimg")]);
    m_qrimg_isSet = !json[QString("qrimg")].isNull() && m_qrimg_isValid;
}

QString MDQrCreate_200_response_data::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDQrCreate_200_response_data::asJsonObject() const {
    QJsonObject obj;
    if (m_qrurl_isSet) {
        obj.insert(QString("qrurl"), ::MelodixAPI::toJsonValue(m_qrurl));
    }
    if (m_qrimg_isSet) {
        obj.insert(QString("qrimg"), ::MelodixAPI::toJsonValue(m_qrimg));
    }
    return obj;
}

QString MDQrCreate_200_response_data::getQrurl() const {
    return m_qrurl;
}
void MDQrCreate_200_response_data::setQrurl(const QString &qrurl) {
    m_qrurl = qrurl;
    m_qrurl_isSet = true;
}

bool MDQrCreate_200_response_data::is_qrurl_Set() const{
    return m_qrurl_isSet;
}

bool MDQrCreate_200_response_data::is_qrurl_Valid() const{
    return m_qrurl_isValid;
}

QString MDQrCreate_200_response_data::getQrimg() const {
    return m_qrimg;
}
void MDQrCreate_200_response_data::setQrimg(const QString &qrimg) {
    m_qrimg = qrimg;
    m_qrimg_isSet = true;
}

bool MDQrCreate_200_response_data::is_qrimg_Set() const{
    return m_qrimg_isSet;
}

bool MDQrCreate_200_response_data::is_qrimg_Valid() const{
    return m_qrimg_isValid;
}

bool MDQrCreate_200_response_data::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_qrurl_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_qrimg_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDQrCreate_200_response_data::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_qrurl_isValid && m_qrimg_isValid && true;
}

} // namespace MelodixAPI
