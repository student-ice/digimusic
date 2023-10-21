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

#include "MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner() {
    this->initializeModel();
}

MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::~MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner() {}

void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_sub_type_isSet = false;
    m_sub_type_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_target_isSet = false;
    m_target_isValid = false;

    m_ext_isSet = false;
    m_ext_isValid = false;
}

void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_type_isValid = ::MelodixAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_sub_type_isValid = ::MelodixAPI::fromJsonValue(m_sub_type, json[QString("subType")]);
    m_sub_type_isSet = !json[QString("subType")].isNull() && m_sub_type_isValid;

    m_name_isValid = ::MelodixAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_icon_isValid = ::MelodixAPI::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_target_isValid = ::MelodixAPI::fromJsonValue(m_target, json[QString("target")]);
    m_target_isSet = !json[QString("target")].isNull() && m_target_isValid;

    m_ext_isValid = ::MelodixAPI::fromJsonValue(m_ext, json[QString("ext")]);
    m_ext_isSet = !json[QString("ext")].isNull() && m_ext_isValid;
}

QString MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::MelodixAPI::toJsonValue(m_type));
    }
    if (m_sub_type_isSet) {
        obj.insert(QString("subType"), ::MelodixAPI::toJsonValue(m_sub_type));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::MelodixAPI::toJsonValue(m_name));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::MelodixAPI::toJsonValue(m_icon));
    }
    if (m_target_isSet) {
        obj.insert(QString("target"), ::MelodixAPI::toJsonValue(m_target));
    }
    if (m_ext_isSet) {
        obj.insert(QString("ext"), ::MelodixAPI::toJsonValue(m_ext));
    }
    return obj;
}

QString MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::getId() const {
    return m_id;
}
void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_id_Valid() const{
    return m_id_isValid;
}

qint32 MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::getType() const {
    return m_type;
}
void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_type_Set() const{
    return m_type_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_type_Valid() const{
    return m_type_isValid;
}

qint32 MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::getSubType() const {
    return m_sub_type;
}
void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::setSubType(const qint32 &sub_type) {
    m_sub_type = sub_type;
    m_sub_type_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_sub_type_Set() const{
    return m_sub_type_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_sub_type_Valid() const{
    return m_sub_type_isValid;
}

QString MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::getName() const {
    return m_name;
}
void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_name_Set() const{
    return m_name_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_name_Valid() const{
    return m_name_isValid;
}

QString MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::getIcon() const {
    return m_icon;
}
void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_icon_Set() const{
    return m_icon_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_icon_Valid() const{
    return m_icon_isValid;
}

QString MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::getTarget() const {
    return m_target;
}
void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::setTarget(const QString &target) {
    m_target = target;
    m_target_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_target_Set() const{
    return m_target_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_target_Valid() const{
    return m_target_isValid;
}

QString MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::getExt() const {
    return m_ext;
}
void MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::setExt(const QString &ext) {
    m_ext = ext;
    m_ext_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_ext_Set() const{
    return m_ext_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::is_ext_Valid() const{
    return m_ext_isValid;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sub_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ext_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace MelodixAPI
