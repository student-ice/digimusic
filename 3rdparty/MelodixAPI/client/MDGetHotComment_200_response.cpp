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

#include "MDGetHotComment_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetHotComment_200_response::MDGetHotComment_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetHotComment_200_response::MDGetHotComment_200_response() {
    this->initializeModel();
}

MDGetHotComment_200_response::~MDGetHotComment_200_response() {}

void MDGetHotComment_200_response::initializeModel() {

    m_top_comments_isSet = false;
    m_top_comments_isValid = false;

    m_has_more_isSet = false;
    m_has_more_isValid = false;

    m_hot_comments_isSet = false;
    m_hot_comments_isValid = false;

    m_total_isSet = false;
    m_total_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;
}

void MDGetHotComment_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetHotComment_200_response::fromJsonObject(QJsonObject json) {

    m_top_comments_isValid = ::MelodixAPI::fromJsonValue(m_top_comments, json[QString("topComments")]);
    m_top_comments_isSet = !json[QString("topComments")].isNull() && m_top_comments_isValid;

    m_has_more_isValid = ::MelodixAPI::fromJsonValue(m_has_more, json[QString("hasMore")]);
    m_has_more_isSet = !json[QString("hasMore")].isNull() && m_has_more_isValid;

    m_hot_comments_isValid = ::MelodixAPI::fromJsonValue(m_hot_comments, json[QString("hotComments")]);
    m_hot_comments_isSet = !json[QString("hotComments")].isNull() && m_hot_comments_isValid;

    m_total_isValid = ::MelodixAPI::fromJsonValue(m_total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;

    m_code_isValid = ::MelodixAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;
}

QString MDGetHotComment_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetHotComment_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_top_comments.size() > 0) {
        obj.insert(QString("topComments"), ::MelodixAPI::toJsonValue(m_top_comments));
    }
    if (m_has_more_isSet) {
        obj.insert(QString("hasMore"), ::MelodixAPI::toJsonValue(m_has_more));
    }
    if (m_hot_comments.size() > 0) {
        obj.insert(QString("hotComments"), ::MelodixAPI::toJsonValue(m_hot_comments));
    }
    if (m_total_isSet) {
        obj.insert(QString("total"), ::MelodixAPI::toJsonValue(m_total));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::MelodixAPI::toJsonValue(m_code));
    }
    return obj;
}

QList<QString> MDGetHotComment_200_response::getTopComments() const {
    return m_top_comments;
}
void MDGetHotComment_200_response::setTopComments(const QList<QString> &top_comments) {
    m_top_comments = top_comments;
    m_top_comments_isSet = true;
}

bool MDGetHotComment_200_response::is_top_comments_Set() const{
    return m_top_comments_isSet;
}

bool MDGetHotComment_200_response::is_top_comments_Valid() const{
    return m_top_comments_isValid;
}

bool MDGetHotComment_200_response::isHasMore() const {
    return m_has_more;
}
void MDGetHotComment_200_response::setHasMore(const bool &has_more) {
    m_has_more = has_more;
    m_has_more_isSet = true;
}

bool MDGetHotComment_200_response::is_has_more_Set() const{
    return m_has_more_isSet;
}

bool MDGetHotComment_200_response::is_has_more_Valid() const{
    return m_has_more_isValid;
}

QList<MDGetHotComment_200_response_hotComments_inner> MDGetHotComment_200_response::getHotComments() const {
    return m_hot_comments;
}
void MDGetHotComment_200_response::setHotComments(const QList<MDGetHotComment_200_response_hotComments_inner> &hot_comments) {
    m_hot_comments = hot_comments;
    m_hot_comments_isSet = true;
}

bool MDGetHotComment_200_response::is_hot_comments_Set() const{
    return m_hot_comments_isSet;
}

bool MDGetHotComment_200_response::is_hot_comments_Valid() const{
    return m_hot_comments_isValid;
}

qint32 MDGetHotComment_200_response::getTotal() const {
    return m_total;
}
void MDGetHotComment_200_response::setTotal(const qint32 &total) {
    m_total = total;
    m_total_isSet = true;
}

bool MDGetHotComment_200_response::is_total_Set() const{
    return m_total_isSet;
}

bool MDGetHotComment_200_response::is_total_Valid() const{
    return m_total_isValid;
}

qint32 MDGetHotComment_200_response::getCode() const {
    return m_code;
}
void MDGetHotComment_200_response::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool MDGetHotComment_200_response::is_code_Set() const{
    return m_code_isSet;
}

bool MDGetHotComment_200_response::is_code_Valid() const{
    return m_code_isValid;
}

bool MDGetHotComment_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_top_comments.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_more_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hot_comments.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_isSet) {
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

bool MDGetHotComment_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_top_comments_isValid && m_has_more_isValid && m_hot_comments_isValid && m_total_isValid && m_code_isValid && true;
}

} // namespace MelodixAPI
