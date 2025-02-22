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

#include "MDGetRecommendedPlaylist_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetRecommendedPlaylist_200_response::MDGetRecommendedPlaylist_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetRecommendedPlaylist_200_response::MDGetRecommendedPlaylist_200_response() {
    this->initializeModel();
}

MDGetRecommendedPlaylist_200_response::~MDGetRecommendedPlaylist_200_response() {}

void MDGetRecommendedPlaylist_200_response::initializeModel() {

    m_has_taste_isSet = false;
    m_has_taste_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;

    m_category_isSet = false;
    m_category_isValid = false;

    m_result_isSet = false;
    m_result_isValid = false;
}

void MDGetRecommendedPlaylist_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetRecommendedPlaylist_200_response::fromJsonObject(QJsonObject json) {

    m_has_taste_isValid = ::MelodixAPI::fromJsonValue(m_has_taste, json[QString("hasTaste")]);
    m_has_taste_isSet = !json[QString("hasTaste")].isNull() && m_has_taste_isValid;

    m_code_isValid = ::MelodixAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_category_isValid = ::MelodixAPI::fromJsonValue(m_category, json[QString("category")]);
    m_category_isSet = !json[QString("category")].isNull() && m_category_isValid;

    m_result_isValid = ::MelodixAPI::fromJsonValue(m_result, json[QString("result")]);
    m_result_isSet = !json[QString("result")].isNull() && m_result_isValid;
}

QString MDGetRecommendedPlaylist_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetRecommendedPlaylist_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_has_taste_isSet) {
        obj.insert(QString("hasTaste"), ::MelodixAPI::toJsonValue(m_has_taste));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::MelodixAPI::toJsonValue(m_code));
    }
    if (m_category_isSet) {
        obj.insert(QString("category"), ::MelodixAPI::toJsonValue(m_category));
    }
    if (m_result.size() > 0) {
        obj.insert(QString("result"), ::MelodixAPI::toJsonValue(m_result));
    }
    return obj;
}

bool MDGetRecommendedPlaylist_200_response::isHasTaste() const {
    return m_has_taste;
}
void MDGetRecommendedPlaylist_200_response::setHasTaste(const bool &has_taste) {
    m_has_taste = has_taste;
    m_has_taste_isSet = true;
}

bool MDGetRecommendedPlaylist_200_response::is_has_taste_Set() const{
    return m_has_taste_isSet;
}

bool MDGetRecommendedPlaylist_200_response::is_has_taste_Valid() const{
    return m_has_taste_isValid;
}

qint32 MDGetRecommendedPlaylist_200_response::getCode() const {
    return m_code;
}
void MDGetRecommendedPlaylist_200_response::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool MDGetRecommendedPlaylist_200_response::is_code_Set() const{
    return m_code_isSet;
}

bool MDGetRecommendedPlaylist_200_response::is_code_Valid() const{
    return m_code_isValid;
}

qint32 MDGetRecommendedPlaylist_200_response::getCategory() const {
    return m_category;
}
void MDGetRecommendedPlaylist_200_response::setCategory(const qint32 &category) {
    m_category = category;
    m_category_isSet = true;
}

bool MDGetRecommendedPlaylist_200_response::is_category_Set() const{
    return m_category_isSet;
}

bool MDGetRecommendedPlaylist_200_response::is_category_Valid() const{
    return m_category_isValid;
}

QList<MDGetRecommendedPlaylist_200_response_result_inner> MDGetRecommendedPlaylist_200_response::getResult() const {
    return m_result;
}
void MDGetRecommendedPlaylist_200_response::setResult(const QList<MDGetRecommendedPlaylist_200_response_result_inner> &result) {
    m_result = result;
    m_result_isSet = true;
}

bool MDGetRecommendedPlaylist_200_response::is_result_Set() const{
    return m_result_isSet;
}

bool MDGetRecommendedPlaylist_200_response::is_result_Valid() const{
    return m_result_isValid;
}

bool MDGetRecommendedPlaylist_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_has_taste_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_category_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_result.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetRecommendedPlaylist_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_has_taste_isValid && m_code_isValid && m_category_isValid && m_result_isValid && true;
}

} // namespace MelodixAPI
