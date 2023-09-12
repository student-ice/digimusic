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

#include "MDGetArtistDetail_200_response_data_user_avatarDetail.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetArtistDetail_200_response_data_user_avatarDetail::MDGetArtistDetail_200_response_data_user_avatarDetail(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetArtistDetail_200_response_data_user_avatarDetail::MDGetArtistDetail_200_response_data_user_avatarDetail() {
    this->initializeModel();
}

MDGetArtistDetail_200_response_data_user_avatarDetail::~MDGetArtistDetail_200_response_data_user_avatarDetail() {}

void MDGetArtistDetail_200_response_data_user_avatarDetail::initializeModel() {

    m_user_type_isSet = false;
    m_user_type_isValid = false;

    m_identity_level_isSet = false;
    m_identity_level_isValid = false;

    m_identity_icon_url_isSet = false;
    m_identity_icon_url_isValid = false;
}

void MDGetArtistDetail_200_response_data_user_avatarDetail::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetArtistDetail_200_response_data_user_avatarDetail::fromJsonObject(QJsonObject json) {

    m_user_type_isValid = ::MelodixAPI::fromJsonValue(m_user_type, json[QString("userType")]);
    m_user_type_isSet = !json[QString("userType")].isNull() && m_user_type_isValid;

    m_identity_level_isValid = ::MelodixAPI::fromJsonValue(m_identity_level, json[QString("identityLevel")]);
    m_identity_level_isSet = !json[QString("identityLevel")].isNull() && m_identity_level_isValid;

    m_identity_icon_url_isValid = ::MelodixAPI::fromJsonValue(m_identity_icon_url, json[QString("identityIconUrl")]);
    m_identity_icon_url_isSet = !json[QString("identityIconUrl")].isNull() && m_identity_icon_url_isValid;
}

QString MDGetArtistDetail_200_response_data_user_avatarDetail::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetArtistDetail_200_response_data_user_avatarDetail::asJsonObject() const {
    QJsonObject obj;
    if (m_user_type_isSet) {
        obj.insert(QString("userType"), ::MelodixAPI::toJsonValue(m_user_type));
    }
    if (m_identity_level_isSet) {
        obj.insert(QString("identityLevel"), ::MelodixAPI::toJsonValue(m_identity_level));
    }
    if (m_identity_icon_url_isSet) {
        obj.insert(QString("identityIconUrl"), ::MelodixAPI::toJsonValue(m_identity_icon_url));
    }
    return obj;
}

qint32 MDGetArtistDetail_200_response_data_user_avatarDetail::getUserType() const {
    return m_user_type;
}
void MDGetArtistDetail_200_response_data_user_avatarDetail::setUserType(const qint32 &user_type) {
    m_user_type = user_type;
    m_user_type_isSet = true;
}

bool MDGetArtistDetail_200_response_data_user_avatarDetail::is_user_type_Set() const{
    return m_user_type_isSet;
}

bool MDGetArtistDetail_200_response_data_user_avatarDetail::is_user_type_Valid() const{
    return m_user_type_isValid;
}

qint32 MDGetArtistDetail_200_response_data_user_avatarDetail::getIdentityLevel() const {
    return m_identity_level;
}
void MDGetArtistDetail_200_response_data_user_avatarDetail::setIdentityLevel(const qint32 &identity_level) {
    m_identity_level = identity_level;
    m_identity_level_isSet = true;
}

bool MDGetArtistDetail_200_response_data_user_avatarDetail::is_identity_level_Set() const{
    return m_identity_level_isSet;
}

bool MDGetArtistDetail_200_response_data_user_avatarDetail::is_identity_level_Valid() const{
    return m_identity_level_isValid;
}

QString MDGetArtistDetail_200_response_data_user_avatarDetail::getIdentityIconUrl() const {
    return m_identity_icon_url;
}
void MDGetArtistDetail_200_response_data_user_avatarDetail::setIdentityIconUrl(const QString &identity_icon_url) {
    m_identity_icon_url = identity_icon_url;
    m_identity_icon_url_isSet = true;
}

bool MDGetArtistDetail_200_response_data_user_avatarDetail::is_identity_icon_url_Set() const{
    return m_identity_icon_url_isSet;
}

bool MDGetArtistDetail_200_response_data_user_avatarDetail::is_identity_icon_url_Valid() const{
    return m_identity_icon_url_isValid;
}

bool MDGetArtistDetail_200_response_data_user_avatarDetail::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_identity_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_identity_icon_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetArtistDetail_200_response_data_user_avatarDetail::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_type_isValid && m_identity_level_isValid && m_identity_icon_url_isValid && true;
}

} // namespace MelodixAPI
