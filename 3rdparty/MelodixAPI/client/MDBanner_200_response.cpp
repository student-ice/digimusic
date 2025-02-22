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

#include "MDBanner_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDBanner_200_response::MDBanner_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDBanner_200_response::MDBanner_200_response() {
    this->initializeModel();
}

MDBanner_200_response::~MDBanner_200_response() {}

void MDBanner_200_response::initializeModel() {

    m_banners_isSet = false;
    m_banners_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;
}

void MDBanner_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDBanner_200_response::fromJsonObject(QJsonObject json) {

    m_banners_isValid = ::MelodixAPI::fromJsonValue(m_banners, json[QString("banners")]);
    m_banners_isSet = !json[QString("banners")].isNull() && m_banners_isValid;

    m_code_isValid = ::MelodixAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;
}

QString MDBanner_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDBanner_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_banners.size() > 0) {
        obj.insert(QString("banners"), ::MelodixAPI::toJsonValue(m_banners));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::MelodixAPI::toJsonValue(m_code));
    }
    return obj;
}

QList<MDBanner_200_response_banners_inner> MDBanner_200_response::getBanners() const {
    return m_banners;
}
void MDBanner_200_response::setBanners(const QList<MDBanner_200_response_banners_inner> &banners) {
    m_banners = banners;
    m_banners_isSet = true;
}

bool MDBanner_200_response::is_banners_Set() const{
    return m_banners_isSet;
}

bool MDBanner_200_response::is_banners_Valid() const{
    return m_banners_isValid;
}

qint32 MDBanner_200_response::getCode() const {
    return m_code;
}
void MDBanner_200_response::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool MDBanner_200_response::is_code_Set() const{
    return m_code_isSet;
}

bool MDBanner_200_response::is_code_Valid() const{
    return m_code_isValid;
}

bool MDBanner_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_banners.size() > 0) {
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

bool MDBanner_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_banners_isValid && m_code_isValid && true;
}

} // namespace MelodixAPI
