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

#include "MDGetPurchasedAlbum_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetPurchasedAlbum_200_response::MDGetPurchasedAlbum_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetPurchasedAlbum_200_response::MDGetPurchasedAlbum_200_response() {
    this->initializeModel();
}

MDGetPurchasedAlbum_200_response::~MDGetPurchasedAlbum_200_response() {}

void MDGetPurchasedAlbum_200_response::initializeModel() {

    m_total_isSet = false;
    m_total_isValid = false;

    m_paid_albums_isSet = false;
    m_paid_albums_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;
}

void MDGetPurchasedAlbum_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetPurchasedAlbum_200_response::fromJsonObject(QJsonObject json) {

    m_total_isValid = ::MelodixAPI::fromJsonValue(m_total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;

    m_paid_albums_isValid = ::MelodixAPI::fromJsonValue(m_paid_albums, json[QString("paidAlbums")]);
    m_paid_albums_isSet = !json[QString("paidAlbums")].isNull() && m_paid_albums_isValid;

    m_code_isValid = ::MelodixAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;
}

QString MDGetPurchasedAlbum_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetPurchasedAlbum_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_total_isSet) {
        obj.insert(QString("total"), ::MelodixAPI::toJsonValue(m_total));
    }
    if (m_paid_albums.size() > 0) {
        obj.insert(QString("paidAlbums"), ::MelodixAPI::toJsonValue(m_paid_albums));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::MelodixAPI::toJsonValue(m_code));
    }
    return obj;
}

qint32 MDGetPurchasedAlbum_200_response::getTotal() const {
    return m_total;
}
void MDGetPurchasedAlbum_200_response::setTotal(const qint32 &total) {
    m_total = total;
    m_total_isSet = true;
}

bool MDGetPurchasedAlbum_200_response::is_total_Set() const{
    return m_total_isSet;
}

bool MDGetPurchasedAlbum_200_response::is_total_Valid() const{
    return m_total_isValid;
}

QList<MDGetPurchasedAlbum_200_response_paidAlbums_inner> MDGetPurchasedAlbum_200_response::getPaidAlbums() const {
    return m_paid_albums;
}
void MDGetPurchasedAlbum_200_response::setPaidAlbums(const QList<MDGetPurchasedAlbum_200_response_paidAlbums_inner> &paid_albums) {
    m_paid_albums = paid_albums;
    m_paid_albums_isSet = true;
}

bool MDGetPurchasedAlbum_200_response::is_paid_albums_Set() const{
    return m_paid_albums_isSet;
}

bool MDGetPurchasedAlbum_200_response::is_paid_albums_Valid() const{
    return m_paid_albums_isValid;
}

qint32 MDGetPurchasedAlbum_200_response::getCode() const {
    return m_code;
}
void MDGetPurchasedAlbum_200_response::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool MDGetPurchasedAlbum_200_response::is_code_Set() const{
    return m_code_isSet;
}

bool MDGetPurchasedAlbum_200_response::is_code_Valid() const{
    return m_code_isValid;
}

bool MDGetPurchasedAlbum_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_albums.size() > 0) {
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

bool MDGetPurchasedAlbum_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_total_isValid && m_paid_albums_isValid && m_code_isValid && true;
}

} // namespace MelodixAPI
