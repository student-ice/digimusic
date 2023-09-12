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

#include "MDGetMvSublist_200_response_data_inner_creator_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetMvSublist_200_response_data_inner_creator_inner::MDGetMvSublist_200_response_data_inner_creator_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetMvSublist_200_response_data_inner_creator_inner::MDGetMvSublist_200_response_data_inner_creator_inner() {
    this->initializeModel();
}

MDGetMvSublist_200_response_data_inner_creator_inner::~MDGetMvSublist_200_response_data_inner_creator_inner() {}

void MDGetMvSublist_200_response_data_inner_creator_inner::initializeModel() {

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_user_name_isSet = false;
    m_user_name_isValid = false;
}

void MDGetMvSublist_200_response_data_inner_creator_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetMvSublist_200_response_data_inner_creator_inner::fromJsonObject(QJsonObject json) {

    m_user_id_isValid = ::MelodixAPI::fromJsonValue(m_user_id, json[QString("userId")]);
    m_user_id_isSet = !json[QString("userId")].isNull() && m_user_id_isValid;

    m_user_name_isValid = ::MelodixAPI::fromJsonValue(m_user_name, json[QString("userName")]);
    m_user_name_isSet = !json[QString("userName")].isNull() && m_user_name_isValid;
}

QString MDGetMvSublist_200_response_data_inner_creator_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetMvSublist_200_response_data_inner_creator_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_user_id_isSet) {
        obj.insert(QString("userId"), ::MelodixAPI::toJsonValue(m_user_id));
    }
    if (m_user_name_isSet) {
        obj.insert(QString("userName"), ::MelodixAPI::toJsonValue(m_user_name));
    }
    return obj;
}

qint32 MDGetMvSublist_200_response_data_inner_creator_inner::getUserId() const {
    return m_user_id;
}
void MDGetMvSublist_200_response_data_inner_creator_inner::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool MDGetMvSublist_200_response_data_inner_creator_inner::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool MDGetMvSublist_200_response_data_inner_creator_inner::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString MDGetMvSublist_200_response_data_inner_creator_inner::getUserName() const {
    return m_user_name;
}
void MDGetMvSublist_200_response_data_inner_creator_inner::setUserName(const QString &user_name) {
    m_user_name = user_name;
    m_user_name_isSet = true;
}

bool MDGetMvSublist_200_response_data_inner_creator_inner::is_user_name_Set() const{
    return m_user_name_isSet;
}

bool MDGetMvSublist_200_response_data_inner_creator_inner::is_user_name_Valid() const{
    return m_user_name_isValid;
}

bool MDGetMvSublist_200_response_data_inner_creator_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetMvSublist_200_response_data_inner_creator_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_id_isValid && m_user_name_isValid && true;
}

} // namespace MelodixAPI
