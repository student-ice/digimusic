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

#include "MDGetRecommendResource_200_response_recommend_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetRecommendResource_200_response_recommend_inner::MDGetRecommendResource_200_response_recommend_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetRecommendResource_200_response_recommend_inner::MDGetRecommendResource_200_response_recommend_inner() {
    this->initializeModel();
}

MDGetRecommendResource_200_response_recommend_inner::~MDGetRecommendResource_200_response_recommend_inner() {}

void MDGetRecommendResource_200_response_recommend_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_copywriter_isSet = false;
    m_copywriter_isValid = false;

    m_pic_url_isSet = false;
    m_pic_url_isValid = false;

    m_playcount_isSet = false;
    m_playcount_isValid = false;

    m_create_time_isSet = false;
    m_create_time_isValid = false;

    m_creator_isSet = false;
    m_creator_isValid = false;

    m_track_count_isSet = false;
    m_track_count_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_alg_isSet = false;
    m_alg_isValid = false;
}

void MDGetRecommendResource_200_response_recommend_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetRecommendResource_200_response_recommend_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_type_isValid = ::MelodixAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_name_isValid = ::MelodixAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_copywriter_isValid = ::MelodixAPI::fromJsonValue(m_copywriter, json[QString("copywriter")]);
    m_copywriter_isSet = !json[QString("copywriter")].isNull() && m_copywriter_isValid;

    m_pic_url_isValid = ::MelodixAPI::fromJsonValue(m_pic_url, json[QString("picUrl")]);
    m_pic_url_isSet = !json[QString("picUrl")].isNull() && m_pic_url_isValid;

    m_playcount_isValid = ::MelodixAPI::fromJsonValue(m_playcount, json[QString("playcount")]);
    m_playcount_isSet = !json[QString("playcount")].isNull() && m_playcount_isValid;

    m_create_time_isValid = ::MelodixAPI::fromJsonValue(m_create_time, json[QString("createTime")]);
    m_create_time_isSet = !json[QString("createTime")].isNull() && m_create_time_isValid;

    m_creator_isValid = ::MelodixAPI::fromJsonValue(m_creator, json[QString("creator")]);
    m_creator_isSet = !json[QString("creator")].isNull() && m_creator_isValid;

    m_track_count_isValid = ::MelodixAPI::fromJsonValue(m_track_count, json[QString("trackCount")]);
    m_track_count_isSet = !json[QString("trackCount")].isNull() && m_track_count_isValid;

    m_user_id_isValid = ::MelodixAPI::fromJsonValue(m_user_id, json[QString("userId")]);
    m_user_id_isSet = !json[QString("userId")].isNull() && m_user_id_isValid;

    m_alg_isValid = ::MelodixAPI::fromJsonValue(m_alg, json[QString("alg")]);
    m_alg_isSet = !json[QString("alg")].isNull() && m_alg_isValid;
}

QString MDGetRecommendResource_200_response_recommend_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetRecommendResource_200_response_recommend_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::MelodixAPI::toJsonValue(m_type));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::MelodixAPI::toJsonValue(m_name));
    }
    if (m_copywriter_isSet) {
        obj.insert(QString("copywriter"), ::MelodixAPI::toJsonValue(m_copywriter));
    }
    if (m_pic_url_isSet) {
        obj.insert(QString("picUrl"), ::MelodixAPI::toJsonValue(m_pic_url));
    }
    if (m_playcount_isSet) {
        obj.insert(QString("playcount"), ::MelodixAPI::toJsonValue(m_playcount));
    }
    if (m_create_time_isSet) {
        obj.insert(QString("createTime"), ::MelodixAPI::toJsonValue(m_create_time));
    }
    if (m_creator.isSet()) {
        obj.insert(QString("creator"), ::MelodixAPI::toJsonValue(m_creator));
    }
    if (m_track_count_isSet) {
        obj.insert(QString("trackCount"), ::MelodixAPI::toJsonValue(m_track_count));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("userId"), ::MelodixAPI::toJsonValue(m_user_id));
    }
    if (m_alg_isSet) {
        obj.insert(QString("alg"), ::MelodixAPI::toJsonValue(m_alg));
    }
    return obj;
}

double MDGetRecommendResource_200_response_recommend_inner::getId() const {
    return m_id;
}
void MDGetRecommendResource_200_response_recommend_inner::setId(const double &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_id_Valid() const{
    return m_id_isValid;
}

qint32 MDGetRecommendResource_200_response_recommend_inner::getType() const {
    return m_type;
}
void MDGetRecommendResource_200_response_recommend_inner::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_type_Set() const{
    return m_type_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_type_Valid() const{
    return m_type_isValid;
}

QString MDGetRecommendResource_200_response_recommend_inner::getName() const {
    return m_name;
}
void MDGetRecommendResource_200_response_recommend_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_name_Set() const{
    return m_name_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_name_Valid() const{
    return m_name_isValid;
}

QString MDGetRecommendResource_200_response_recommend_inner::getCopywriter() const {
    return m_copywriter;
}
void MDGetRecommendResource_200_response_recommend_inner::setCopywriter(const QString &copywriter) {
    m_copywriter = copywriter;
    m_copywriter_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_copywriter_Set() const{
    return m_copywriter_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_copywriter_Valid() const{
    return m_copywriter_isValid;
}

QString MDGetRecommendResource_200_response_recommend_inner::getPicUrl() const {
    return m_pic_url;
}
void MDGetRecommendResource_200_response_recommend_inner::setPicUrl(const QString &pic_url) {
    m_pic_url = pic_url;
    m_pic_url_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_pic_url_Set() const{
    return m_pic_url_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_pic_url_Valid() const{
    return m_pic_url_isValid;
}

qint32 MDGetRecommendResource_200_response_recommend_inner::getPlaycount() const {
    return m_playcount;
}
void MDGetRecommendResource_200_response_recommend_inner::setPlaycount(const qint32 &playcount) {
    m_playcount = playcount;
    m_playcount_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_playcount_Set() const{
    return m_playcount_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_playcount_Valid() const{
    return m_playcount_isValid;
}

qint32 MDGetRecommendResource_200_response_recommend_inner::getCreateTime() const {
    return m_create_time;
}
void MDGetRecommendResource_200_response_recommend_inner::setCreateTime(const qint32 &create_time) {
    m_create_time = create_time;
    m_create_time_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_create_time_Set() const{
    return m_create_time_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_create_time_Valid() const{
    return m_create_time_isValid;
}

MDGetRecommendResource_200_response_recommend_inner_creator MDGetRecommendResource_200_response_recommend_inner::getCreator() const {
    return m_creator;
}
void MDGetRecommendResource_200_response_recommend_inner::setCreator(const MDGetRecommendResource_200_response_recommend_inner_creator &creator) {
    m_creator = creator;
    m_creator_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_creator_Set() const{
    return m_creator_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_creator_Valid() const{
    return m_creator_isValid;
}

qint32 MDGetRecommendResource_200_response_recommend_inner::getTrackCount() const {
    return m_track_count;
}
void MDGetRecommendResource_200_response_recommend_inner::setTrackCount(const qint32 &track_count) {
    m_track_count = track_count;
    m_track_count_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_track_count_Set() const{
    return m_track_count_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_track_count_Valid() const{
    return m_track_count_isValid;
}

qint32 MDGetRecommendResource_200_response_recommend_inner::getUserId() const {
    return m_user_id;
}
void MDGetRecommendResource_200_response_recommend_inner::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString MDGetRecommendResource_200_response_recommend_inner::getAlg() const {
    return m_alg;
}
void MDGetRecommendResource_200_response_recommend_inner::setAlg(const QString &alg) {
    m_alg = alg;
    m_alg_isSet = true;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_alg_Set() const{
    return m_alg_isSet;
}

bool MDGetRecommendResource_200_response_recommend_inner::is_alg_Valid() const{
    return m_alg_isValid;
}

bool MDGetRecommendResource_200_response_recommend_inner::isSet() const {
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

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_copywriter_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pic_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_playcount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_create_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creator.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_track_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_alg_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetRecommendResource_200_response_recommend_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_type_isValid && m_name_isValid && m_copywriter_isValid && m_pic_url_isValid && m_playcount_isValid && m_create_time_isValid && m_creator_isValid && m_track_count_isValid && m_user_id_isValid && m_alg_isValid && true;
}

} // namespace MelodixAPI
