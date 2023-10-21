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

#include "MDGetUserDynamic_200_response_events_inner_tailMark.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetUserDynamic_200_response_events_inner_tailMark::MDGetUserDynamic_200_response_events_inner_tailMark(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetUserDynamic_200_response_events_inner_tailMark::MDGetUserDynamic_200_response_events_inner_tailMark() {
    this->initializeModel();
}

MDGetUserDynamic_200_response_events_inner_tailMark::~MDGetUserDynamic_200_response_events_inner_tailMark() {}

void MDGetUserDynamic_200_response_events_inner_tailMark::initializeModel() {

    m_mark_title_isSet = false;
    m_mark_title_isValid = false;

    m_mark_type_isSet = false;
    m_mark_type_isValid = false;

    m_mark_resource_id_isSet = false;
    m_mark_resource_id_isValid = false;

    m_mark_orpheus_url_isSet = false;
    m_mark_orpheus_url_isValid = false;

    m_circle_isSet = false;
    m_circle_isValid = false;
}

void MDGetUserDynamic_200_response_events_inner_tailMark::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetUserDynamic_200_response_events_inner_tailMark::fromJsonObject(QJsonObject json) {

    m_mark_title_isValid = ::MelodixAPI::fromJsonValue(m_mark_title, json[QString("markTitle")]);
    m_mark_title_isSet = !json[QString("markTitle")].isNull() && m_mark_title_isValid;

    m_mark_type_isValid = ::MelodixAPI::fromJsonValue(m_mark_type, json[QString("markType")]);
    m_mark_type_isSet = !json[QString("markType")].isNull() && m_mark_type_isValid;

    m_mark_resource_id_isValid = ::MelodixAPI::fromJsonValue(m_mark_resource_id, json[QString("markResourceId")]);
    m_mark_resource_id_isSet = !json[QString("markResourceId")].isNull() && m_mark_resource_id_isValid;

    m_mark_orpheus_url_isValid = ::MelodixAPI::fromJsonValue(m_mark_orpheus_url, json[QString("markOrpheusUrl")]);
    m_mark_orpheus_url_isSet = !json[QString("markOrpheusUrl")].isNull() && m_mark_orpheus_url_isValid;

    m_circle_isValid = ::MelodixAPI::fromJsonValue(m_circle, json[QString("circle")]);
    m_circle_isSet = !json[QString("circle")].isNull() && m_circle_isValid;
}

QString MDGetUserDynamic_200_response_events_inner_tailMark::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetUserDynamic_200_response_events_inner_tailMark::asJsonObject() const {
    QJsonObject obj;
    if (m_mark_title_isSet) {
        obj.insert(QString("markTitle"), ::MelodixAPI::toJsonValue(m_mark_title));
    }
    if (m_mark_type_isSet) {
        obj.insert(QString("markType"), ::MelodixAPI::toJsonValue(m_mark_type));
    }
    if (m_mark_resource_id_isSet) {
        obj.insert(QString("markResourceId"), ::MelodixAPI::toJsonValue(m_mark_resource_id));
    }
    if (m_mark_orpheus_url_isSet) {
        obj.insert(QString("markOrpheusUrl"), ::MelodixAPI::toJsonValue(m_mark_orpheus_url));
    }
    if (m_circle.isSet()) {
        obj.insert(QString("circle"), ::MelodixAPI::toJsonValue(m_circle));
    }
    return obj;
}

QString MDGetUserDynamic_200_response_events_inner_tailMark::getMarkTitle() const {
    return m_mark_title;
}
void MDGetUserDynamic_200_response_events_inner_tailMark::setMarkTitle(const QString &mark_title) {
    m_mark_title = mark_title;
    m_mark_title_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_mark_title_Set() const{
    return m_mark_title_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_mark_title_Valid() const{
    return m_mark_title_isValid;
}

QString MDGetUserDynamic_200_response_events_inner_tailMark::getMarkType() const {
    return m_mark_type;
}
void MDGetUserDynamic_200_response_events_inner_tailMark::setMarkType(const QString &mark_type) {
    m_mark_type = mark_type;
    m_mark_type_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_mark_type_Set() const{
    return m_mark_type_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_mark_type_Valid() const{
    return m_mark_type_isValid;
}

QString MDGetUserDynamic_200_response_events_inner_tailMark::getMarkResourceId() const {
    return m_mark_resource_id;
}
void MDGetUserDynamic_200_response_events_inner_tailMark::setMarkResourceId(const QString &mark_resource_id) {
    m_mark_resource_id = mark_resource_id;
    m_mark_resource_id_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_mark_resource_id_Set() const{
    return m_mark_resource_id_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_mark_resource_id_Valid() const{
    return m_mark_resource_id_isValid;
}

QString MDGetUserDynamic_200_response_events_inner_tailMark::getMarkOrpheusUrl() const {
    return m_mark_orpheus_url;
}
void MDGetUserDynamic_200_response_events_inner_tailMark::setMarkOrpheusUrl(const QString &mark_orpheus_url) {
    m_mark_orpheus_url = mark_orpheus_url;
    m_mark_orpheus_url_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_mark_orpheus_url_Set() const{
    return m_mark_orpheus_url_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_mark_orpheus_url_Valid() const{
    return m_mark_orpheus_url_isValid;
}

MDGetUserDynamic_200_response_events_inner_tailMark_circle MDGetUserDynamic_200_response_events_inner_tailMark::getCircle() const {
    return m_circle;
}
void MDGetUserDynamic_200_response_events_inner_tailMark::setCircle(const MDGetUserDynamic_200_response_events_inner_tailMark_circle &circle) {
    m_circle = circle;
    m_circle_isSet = true;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_circle_Set() const{
    return m_circle_isSet;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::is_circle_Valid() const{
    return m_circle_isValid;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_mark_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mark_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mark_resource_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mark_orpheus_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_circle.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetUserDynamic_200_response_events_inner_tailMark::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_mark_title_isValid && m_mark_type_isValid && m_mark_resource_id_isValid && m_mark_orpheus_url_isValid && m_circle_isValid && true;
}

} // namespace MelodixAPI
