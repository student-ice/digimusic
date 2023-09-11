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

#include "MDGetPlaylistDetail_200_response_playlist.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetPlaylistDetail_200_response_playlist::MDGetPlaylistDetail_200_response_playlist(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetPlaylistDetail_200_response_playlist::MDGetPlaylistDetail_200_response_playlist() {
    this->initializeModel();
}

MDGetPlaylistDetail_200_response_playlist::~MDGetPlaylistDetail_200_response_playlist() {}

void MDGetPlaylistDetail_200_response_playlist::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_cover_img_id_isSet = false;
    m_cover_img_id_isValid = false;

    m_cover_img_url_isSet = false;
    m_cover_img_url_isValid = false;

    m_cover_img_id_str_isSet = false;
    m_cover_img_id_str_isValid = false;

    m_ad_type_isSet = false;
    m_ad_type_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_create_time_isSet = false;
    m_create_time_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_op_recommend_isSet = false;
    m_op_recommend_isValid = false;

    m_high_quality_isSet = false;
    m_high_quality_isValid = false;

    m_new_imported_isSet = false;
    m_new_imported_isValid = false;

    m_update_time_isSet = false;
    m_update_time_isValid = false;

    m_track_count_isSet = false;
    m_track_count_isValid = false;

    m_special_type_isSet = false;
    m_special_type_isValid = false;

    m_privacy_isSet = false;
    m_privacy_isValid = false;

    m_track_update_time_isSet = false;
    m_track_update_time_isValid = false;

    m_comment_thread_id_isSet = false;
    m_comment_thread_id_isValid = false;

    m_play_count_isSet = false;
    m_play_count_isValid = false;

    m_track_number_update_time_isSet = false;
    m_track_number_update_time_isValid = false;

    m_subscribed_count_isSet = false;
    m_subscribed_count_isValid = false;

    m_cloud_track_count_isSet = false;
    m_cloud_track_count_isValid = false;

    m_ordered_isSet = false;
    m_ordered_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_tags_isSet = false;
    m_tags_isValid = false;

    m_background_cover_id_isSet = false;
    m_background_cover_id_isValid = false;

    m_title_image_isSet = false;
    m_title_image_isValid = false;

    m_copied_isSet = false;
    m_copied_isValid = false;

    m_subscribers_isSet = false;
    m_subscribers_isValid = false;

    m_subscribed_isSet = false;
    m_subscribed_isValid = false;

    m_creator_isSet = false;
    m_creator_isValid = false;

    m_tracks_isSet = false;
    m_tracks_isValid = false;

    m_track_ids_isSet = false;
    m_track_ids_isValid = false;

    m_share_count_isSet = false;
    m_share_count_isValid = false;

    m_comment_count_isSet = false;
    m_comment_count_isValid = false;

    m_grade_status_isSet = false;
    m_grade_status_isValid = false;
}

void MDGetPlaylistDetail_200_response_playlist::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetPlaylistDetail_200_response_playlist::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::MelodixAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_cover_img_id_isValid = ::MelodixAPI::fromJsonValue(m_cover_img_id, json[QString("coverImgId")]);
    m_cover_img_id_isSet = !json[QString("coverImgId")].isNull() && m_cover_img_id_isValid;

    m_cover_img_url_isValid = ::MelodixAPI::fromJsonValue(m_cover_img_url, json[QString("coverImgUrl")]);
    m_cover_img_url_isSet = !json[QString("coverImgUrl")].isNull() && m_cover_img_url_isValid;

    m_cover_img_id_str_isValid = ::MelodixAPI::fromJsonValue(m_cover_img_id_str, json[QString("coverImgId_str")]);
    m_cover_img_id_str_isSet = !json[QString("coverImgId_str")].isNull() && m_cover_img_id_str_isValid;

    m_ad_type_isValid = ::MelodixAPI::fromJsonValue(m_ad_type, json[QString("adType")]);
    m_ad_type_isSet = !json[QString("adType")].isNull() && m_ad_type_isValid;

    m_user_id_isValid = ::MelodixAPI::fromJsonValue(m_user_id, json[QString("userId")]);
    m_user_id_isSet = !json[QString("userId")].isNull() && m_user_id_isValid;

    m_create_time_isValid = ::MelodixAPI::fromJsonValue(m_create_time, json[QString("createTime")]);
    m_create_time_isSet = !json[QString("createTime")].isNull() && m_create_time_isValid;

    m_status_isValid = ::MelodixAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_op_recommend_isValid = ::MelodixAPI::fromJsonValue(m_op_recommend, json[QString("opRecommend")]);
    m_op_recommend_isSet = !json[QString("opRecommend")].isNull() && m_op_recommend_isValid;

    m_high_quality_isValid = ::MelodixAPI::fromJsonValue(m_high_quality, json[QString("highQuality")]);
    m_high_quality_isSet = !json[QString("highQuality")].isNull() && m_high_quality_isValid;

    m_new_imported_isValid = ::MelodixAPI::fromJsonValue(m_new_imported, json[QString("newImported")]);
    m_new_imported_isSet = !json[QString("newImported")].isNull() && m_new_imported_isValid;

    m_update_time_isValid = ::MelodixAPI::fromJsonValue(m_update_time, json[QString("updateTime")]);
    m_update_time_isSet = !json[QString("updateTime")].isNull() && m_update_time_isValid;

    m_track_count_isValid = ::MelodixAPI::fromJsonValue(m_track_count, json[QString("trackCount")]);
    m_track_count_isSet = !json[QString("trackCount")].isNull() && m_track_count_isValid;

    m_special_type_isValid = ::MelodixAPI::fromJsonValue(m_special_type, json[QString("specialType")]);
    m_special_type_isSet = !json[QString("specialType")].isNull() && m_special_type_isValid;

    m_privacy_isValid = ::MelodixAPI::fromJsonValue(m_privacy, json[QString("privacy")]);
    m_privacy_isSet = !json[QString("privacy")].isNull() && m_privacy_isValid;

    m_track_update_time_isValid = ::MelodixAPI::fromJsonValue(m_track_update_time, json[QString("trackUpdateTime")]);
    m_track_update_time_isSet = !json[QString("trackUpdateTime")].isNull() && m_track_update_time_isValid;

    m_comment_thread_id_isValid = ::MelodixAPI::fromJsonValue(m_comment_thread_id, json[QString("commentThreadId")]);
    m_comment_thread_id_isSet = !json[QString("commentThreadId")].isNull() && m_comment_thread_id_isValid;

    m_play_count_isValid = ::MelodixAPI::fromJsonValue(m_play_count, json[QString("playCount")]);
    m_play_count_isSet = !json[QString("playCount")].isNull() && m_play_count_isValid;

    m_track_number_update_time_isValid = ::MelodixAPI::fromJsonValue(m_track_number_update_time, json[QString("trackNumberUpdateTime")]);
    m_track_number_update_time_isSet = !json[QString("trackNumberUpdateTime")].isNull() && m_track_number_update_time_isValid;

    m_subscribed_count_isValid = ::MelodixAPI::fromJsonValue(m_subscribed_count, json[QString("subscribedCount")]);
    m_subscribed_count_isSet = !json[QString("subscribedCount")].isNull() && m_subscribed_count_isValid;

    m_cloud_track_count_isValid = ::MelodixAPI::fromJsonValue(m_cloud_track_count, json[QString("cloudTrackCount")]);
    m_cloud_track_count_isSet = !json[QString("cloudTrackCount")].isNull() && m_cloud_track_count_isValid;

    m_ordered_isValid = ::MelodixAPI::fromJsonValue(m_ordered, json[QString("ordered")]);
    m_ordered_isSet = !json[QString("ordered")].isNull() && m_ordered_isValid;

    m_description_isValid = ::MelodixAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_tags_isValid = ::MelodixAPI::fromJsonValue(m_tags, json[QString("tags")]);
    m_tags_isSet = !json[QString("tags")].isNull() && m_tags_isValid;

    m_background_cover_id_isValid = ::MelodixAPI::fromJsonValue(m_background_cover_id, json[QString("backgroundCoverId")]);
    m_background_cover_id_isSet = !json[QString("backgroundCoverId")].isNull() && m_background_cover_id_isValid;

    m_title_image_isValid = ::MelodixAPI::fromJsonValue(m_title_image, json[QString("titleImage")]);
    m_title_image_isSet = !json[QString("titleImage")].isNull() && m_title_image_isValid;

    m_copied_isValid = ::MelodixAPI::fromJsonValue(m_copied, json[QString("copied")]);
    m_copied_isSet = !json[QString("copied")].isNull() && m_copied_isValid;

    m_subscribers_isValid = ::MelodixAPI::fromJsonValue(m_subscribers, json[QString("subscribers")]);
    m_subscribers_isSet = !json[QString("subscribers")].isNull() && m_subscribers_isValid;

    m_subscribed_isValid = ::MelodixAPI::fromJsonValue(m_subscribed, json[QString("subscribed")]);
    m_subscribed_isSet = !json[QString("subscribed")].isNull() && m_subscribed_isValid;

    m_creator_isValid = ::MelodixAPI::fromJsonValue(m_creator, json[QString("creator")]);
    m_creator_isSet = !json[QString("creator")].isNull() && m_creator_isValid;

    m_tracks_isValid = ::MelodixAPI::fromJsonValue(m_tracks, json[QString("tracks")]);
    m_tracks_isSet = !json[QString("tracks")].isNull() && m_tracks_isValid;

    m_track_ids_isValid = ::MelodixAPI::fromJsonValue(m_track_ids, json[QString("trackIds")]);
    m_track_ids_isSet = !json[QString("trackIds")].isNull() && m_track_ids_isValid;

    m_share_count_isValid = ::MelodixAPI::fromJsonValue(m_share_count, json[QString("shareCount")]);
    m_share_count_isSet = !json[QString("shareCount")].isNull() && m_share_count_isValid;

    m_comment_count_isValid = ::MelodixAPI::fromJsonValue(m_comment_count, json[QString("commentCount")]);
    m_comment_count_isSet = !json[QString("commentCount")].isNull() && m_comment_count_isValid;

    m_grade_status_isValid = ::MelodixAPI::fromJsonValue(m_grade_status, json[QString("gradeStatus")]);
    m_grade_status_isSet = !json[QString("gradeStatus")].isNull() && m_grade_status_isValid;
}

QString MDGetPlaylistDetail_200_response_playlist::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetPlaylistDetail_200_response_playlist::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::MelodixAPI::toJsonValue(m_name));
    }
    if (m_cover_img_id_isSet) {
        obj.insert(QString("coverImgId"), ::MelodixAPI::toJsonValue(m_cover_img_id));
    }
    if (m_cover_img_url_isSet) {
        obj.insert(QString("coverImgUrl"), ::MelodixAPI::toJsonValue(m_cover_img_url));
    }
    if (m_cover_img_id_str_isSet) {
        obj.insert(QString("coverImgId_str"), ::MelodixAPI::toJsonValue(m_cover_img_id_str));
    }
    if (m_ad_type_isSet) {
        obj.insert(QString("adType"), ::MelodixAPI::toJsonValue(m_ad_type));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("userId"), ::MelodixAPI::toJsonValue(m_user_id));
    }
    if (m_create_time_isSet) {
        obj.insert(QString("createTime"), ::MelodixAPI::toJsonValue(m_create_time));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::MelodixAPI::toJsonValue(m_status));
    }
    if (m_op_recommend_isSet) {
        obj.insert(QString("opRecommend"), ::MelodixAPI::toJsonValue(m_op_recommend));
    }
    if (m_high_quality_isSet) {
        obj.insert(QString("highQuality"), ::MelodixAPI::toJsonValue(m_high_quality));
    }
    if (m_new_imported_isSet) {
        obj.insert(QString("newImported"), ::MelodixAPI::toJsonValue(m_new_imported));
    }
    if (m_update_time_isSet) {
        obj.insert(QString("updateTime"), ::MelodixAPI::toJsonValue(m_update_time));
    }
    if (m_track_count_isSet) {
        obj.insert(QString("trackCount"), ::MelodixAPI::toJsonValue(m_track_count));
    }
    if (m_special_type_isSet) {
        obj.insert(QString("specialType"), ::MelodixAPI::toJsonValue(m_special_type));
    }
    if (m_privacy_isSet) {
        obj.insert(QString("privacy"), ::MelodixAPI::toJsonValue(m_privacy));
    }
    if (m_track_update_time_isSet) {
        obj.insert(QString("trackUpdateTime"), ::MelodixAPI::toJsonValue(m_track_update_time));
    }
    if (m_comment_thread_id_isSet) {
        obj.insert(QString("commentThreadId"), ::MelodixAPI::toJsonValue(m_comment_thread_id));
    }
    if (m_play_count_isSet) {
        obj.insert(QString("playCount"), ::MelodixAPI::toJsonValue(m_play_count));
    }
    if (m_track_number_update_time_isSet) {
        obj.insert(QString("trackNumberUpdateTime"), ::MelodixAPI::toJsonValue(m_track_number_update_time));
    }
    if (m_subscribed_count_isSet) {
        obj.insert(QString("subscribedCount"), ::MelodixAPI::toJsonValue(m_subscribed_count));
    }
    if (m_cloud_track_count_isSet) {
        obj.insert(QString("cloudTrackCount"), ::MelodixAPI::toJsonValue(m_cloud_track_count));
    }
    if (m_ordered_isSet) {
        obj.insert(QString("ordered"), ::MelodixAPI::toJsonValue(m_ordered));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::MelodixAPI::toJsonValue(m_description));
    }
    if (m_tags.size() > 0) {
        obj.insert(QString("tags"), ::MelodixAPI::toJsonValue(m_tags));
    }
    if (m_background_cover_id_isSet) {
        obj.insert(QString("backgroundCoverId"), ::MelodixAPI::toJsonValue(m_background_cover_id));
    }
    if (m_title_image_isSet) {
        obj.insert(QString("titleImage"), ::MelodixAPI::toJsonValue(m_title_image));
    }
    if (m_copied_isSet) {
        obj.insert(QString("copied"), ::MelodixAPI::toJsonValue(m_copied));
    }
    if (m_subscribers.size() > 0) {
        obj.insert(QString("subscribers"), ::MelodixAPI::toJsonValue(m_subscribers));
    }
    if (m_subscribed_isSet) {
        obj.insert(QString("subscribed"), ::MelodixAPI::toJsonValue(m_subscribed));
    }
    if (m_creator.isSet()) {
        obj.insert(QString("creator"), ::MelodixAPI::toJsonValue(m_creator));
    }
    if (m_tracks.size() > 0) {
        obj.insert(QString("tracks"), ::MelodixAPI::toJsonValue(m_tracks));
    }
    if (m_track_ids.size() > 0) {
        obj.insert(QString("trackIds"), ::MelodixAPI::toJsonValue(m_track_ids));
    }
    if (m_share_count_isSet) {
        obj.insert(QString("shareCount"), ::MelodixAPI::toJsonValue(m_share_count));
    }
    if (m_comment_count_isSet) {
        obj.insert(QString("commentCount"), ::MelodixAPI::toJsonValue(m_comment_count));
    }
    if (m_grade_status_isSet) {
        obj.insert(QString("gradeStatus"), ::MelodixAPI::toJsonValue(m_grade_status));
    }
    return obj;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getId() const {
    return m_id;
}
void MDGetPlaylistDetail_200_response_playlist::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_id_Valid() const{
    return m_id_isValid;
}

QString MDGetPlaylistDetail_200_response_playlist::getName() const {
    return m_name;
}
void MDGetPlaylistDetail_200_response_playlist::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_name_Set() const{
    return m_name_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_name_Valid() const{
    return m_name_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getCoverImgId() const {
    return m_cover_img_id;
}
void MDGetPlaylistDetail_200_response_playlist::setCoverImgId(const qint32 &cover_img_id) {
    m_cover_img_id = cover_img_id;
    m_cover_img_id_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_cover_img_id_Set() const{
    return m_cover_img_id_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_cover_img_id_Valid() const{
    return m_cover_img_id_isValid;
}

QString MDGetPlaylistDetail_200_response_playlist::getCoverImgUrl() const {
    return m_cover_img_url;
}
void MDGetPlaylistDetail_200_response_playlist::setCoverImgUrl(const QString &cover_img_url) {
    m_cover_img_url = cover_img_url;
    m_cover_img_url_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_cover_img_url_Set() const{
    return m_cover_img_url_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_cover_img_url_Valid() const{
    return m_cover_img_url_isValid;
}

QString MDGetPlaylistDetail_200_response_playlist::getCoverImgIdStr() const {
    return m_cover_img_id_str;
}
void MDGetPlaylistDetail_200_response_playlist::setCoverImgIdStr(const QString &cover_img_id_str) {
    m_cover_img_id_str = cover_img_id_str;
    m_cover_img_id_str_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_cover_img_id_str_Set() const{
    return m_cover_img_id_str_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_cover_img_id_str_Valid() const{
    return m_cover_img_id_str_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getAdType() const {
    return m_ad_type;
}
void MDGetPlaylistDetail_200_response_playlist::setAdType(const qint32 &ad_type) {
    m_ad_type = ad_type;
    m_ad_type_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_ad_type_Set() const{
    return m_ad_type_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_ad_type_Valid() const{
    return m_ad_type_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getUserId() const {
    return m_user_id;
}
void MDGetPlaylistDetail_200_response_playlist::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_user_id_Valid() const{
    return m_user_id_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getCreateTime() const {
    return m_create_time;
}
void MDGetPlaylistDetail_200_response_playlist::setCreateTime(const qint32 &create_time) {
    m_create_time = create_time;
    m_create_time_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_create_time_Set() const{
    return m_create_time_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_create_time_Valid() const{
    return m_create_time_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getStatus() const {
    return m_status;
}
void MDGetPlaylistDetail_200_response_playlist::setStatus(const qint32 &status) {
    m_status = status;
    m_status_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_status_Set() const{
    return m_status_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_status_Valid() const{
    return m_status_isValid;
}

bool MDGetPlaylistDetail_200_response_playlist::isOpRecommend() const {
    return m_op_recommend;
}
void MDGetPlaylistDetail_200_response_playlist::setOpRecommend(const bool &op_recommend) {
    m_op_recommend = op_recommend;
    m_op_recommend_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_op_recommend_Set() const{
    return m_op_recommend_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_op_recommend_Valid() const{
    return m_op_recommend_isValid;
}

bool MDGetPlaylistDetail_200_response_playlist::isHighQuality() const {
    return m_high_quality;
}
void MDGetPlaylistDetail_200_response_playlist::setHighQuality(const bool &high_quality) {
    m_high_quality = high_quality;
    m_high_quality_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_high_quality_Set() const{
    return m_high_quality_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_high_quality_Valid() const{
    return m_high_quality_isValid;
}

bool MDGetPlaylistDetail_200_response_playlist::isNewImported() const {
    return m_new_imported;
}
void MDGetPlaylistDetail_200_response_playlist::setNewImported(const bool &new_imported) {
    m_new_imported = new_imported;
    m_new_imported_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_new_imported_Set() const{
    return m_new_imported_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_new_imported_Valid() const{
    return m_new_imported_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getUpdateTime() const {
    return m_update_time;
}
void MDGetPlaylistDetail_200_response_playlist::setUpdateTime(const qint32 &update_time) {
    m_update_time = update_time;
    m_update_time_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_update_time_Set() const{
    return m_update_time_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_update_time_Valid() const{
    return m_update_time_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getTrackCount() const {
    return m_track_count;
}
void MDGetPlaylistDetail_200_response_playlist::setTrackCount(const qint32 &track_count) {
    m_track_count = track_count;
    m_track_count_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_track_count_Set() const{
    return m_track_count_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_track_count_Valid() const{
    return m_track_count_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getSpecialType() const {
    return m_special_type;
}
void MDGetPlaylistDetail_200_response_playlist::setSpecialType(const qint32 &special_type) {
    m_special_type = special_type;
    m_special_type_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_special_type_Set() const{
    return m_special_type_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_special_type_Valid() const{
    return m_special_type_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getPrivacy() const {
    return m_privacy;
}
void MDGetPlaylistDetail_200_response_playlist::setPrivacy(const qint32 &privacy) {
    m_privacy = privacy;
    m_privacy_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_privacy_Set() const{
    return m_privacy_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_privacy_Valid() const{
    return m_privacy_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getTrackUpdateTime() const {
    return m_track_update_time;
}
void MDGetPlaylistDetail_200_response_playlist::setTrackUpdateTime(const qint32 &track_update_time) {
    m_track_update_time = track_update_time;
    m_track_update_time_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_track_update_time_Set() const{
    return m_track_update_time_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_track_update_time_Valid() const{
    return m_track_update_time_isValid;
}

QString MDGetPlaylistDetail_200_response_playlist::getCommentThreadId() const {
    return m_comment_thread_id;
}
void MDGetPlaylistDetail_200_response_playlist::setCommentThreadId(const QString &comment_thread_id) {
    m_comment_thread_id = comment_thread_id;
    m_comment_thread_id_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_comment_thread_id_Set() const{
    return m_comment_thread_id_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_comment_thread_id_Valid() const{
    return m_comment_thread_id_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getPlayCount() const {
    return m_play_count;
}
void MDGetPlaylistDetail_200_response_playlist::setPlayCount(const qint32 &play_count) {
    m_play_count = play_count;
    m_play_count_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_play_count_Set() const{
    return m_play_count_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_play_count_Valid() const{
    return m_play_count_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getTrackNumberUpdateTime() const {
    return m_track_number_update_time;
}
void MDGetPlaylistDetail_200_response_playlist::setTrackNumberUpdateTime(const qint32 &track_number_update_time) {
    m_track_number_update_time = track_number_update_time;
    m_track_number_update_time_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_track_number_update_time_Set() const{
    return m_track_number_update_time_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_track_number_update_time_Valid() const{
    return m_track_number_update_time_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getSubscribedCount() const {
    return m_subscribed_count;
}
void MDGetPlaylistDetail_200_response_playlist::setSubscribedCount(const qint32 &subscribed_count) {
    m_subscribed_count = subscribed_count;
    m_subscribed_count_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_subscribed_count_Set() const{
    return m_subscribed_count_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_subscribed_count_Valid() const{
    return m_subscribed_count_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getCloudTrackCount() const {
    return m_cloud_track_count;
}
void MDGetPlaylistDetail_200_response_playlist::setCloudTrackCount(const qint32 &cloud_track_count) {
    m_cloud_track_count = cloud_track_count;
    m_cloud_track_count_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_cloud_track_count_Set() const{
    return m_cloud_track_count_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_cloud_track_count_Valid() const{
    return m_cloud_track_count_isValid;
}

bool MDGetPlaylistDetail_200_response_playlist::isOrdered() const {
    return m_ordered;
}
void MDGetPlaylistDetail_200_response_playlist::setOrdered(const bool &ordered) {
    m_ordered = ordered;
    m_ordered_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_ordered_Set() const{
    return m_ordered_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_ordered_Valid() const{
    return m_ordered_isValid;
}

QString MDGetPlaylistDetail_200_response_playlist::getDescription() const {
    return m_description;
}
void MDGetPlaylistDetail_200_response_playlist::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_description_Set() const{
    return m_description_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_description_Valid() const{
    return m_description_isValid;
}

QList<QString> MDGetPlaylistDetail_200_response_playlist::getTags() const {
    return m_tags;
}
void MDGetPlaylistDetail_200_response_playlist::setTags(const QList<QString> &tags) {
    m_tags = tags;
    m_tags_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_tags_Set() const{
    return m_tags_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_tags_Valid() const{
    return m_tags_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getBackgroundCoverId() const {
    return m_background_cover_id;
}
void MDGetPlaylistDetail_200_response_playlist::setBackgroundCoverId(const qint32 &background_cover_id) {
    m_background_cover_id = background_cover_id;
    m_background_cover_id_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_background_cover_id_Set() const{
    return m_background_cover_id_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_background_cover_id_Valid() const{
    return m_background_cover_id_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getTitleImage() const {
    return m_title_image;
}
void MDGetPlaylistDetail_200_response_playlist::setTitleImage(const qint32 &title_image) {
    m_title_image = title_image;
    m_title_image_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_title_image_Set() const{
    return m_title_image_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_title_image_Valid() const{
    return m_title_image_isValid;
}

bool MDGetPlaylistDetail_200_response_playlist::isCopied() const {
    return m_copied;
}
void MDGetPlaylistDetail_200_response_playlist::setCopied(const bool &copied) {
    m_copied = copied;
    m_copied_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_copied_Set() const{
    return m_copied_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_copied_Valid() const{
    return m_copied_isValid;
}

QList<MDGetTopPlaylist_200_response_playlists_inner_subscribers_inner> MDGetPlaylistDetail_200_response_playlist::getSubscribers() const {
    return m_subscribers;
}
void MDGetPlaylistDetail_200_response_playlist::setSubscribers(const QList<MDGetTopPlaylist_200_response_playlists_inner_subscribers_inner> &subscribers) {
    m_subscribers = subscribers;
    m_subscribers_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_subscribers_Set() const{
    return m_subscribers_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_subscribers_Valid() const{
    return m_subscribers_isValid;
}

bool MDGetPlaylistDetail_200_response_playlist::isSubscribed() const {
    return m_subscribed;
}
void MDGetPlaylistDetail_200_response_playlist::setSubscribed(const bool &subscribed) {
    m_subscribed = subscribed;
    m_subscribed_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_subscribed_Set() const{
    return m_subscribed_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_subscribed_Valid() const{
    return m_subscribed_isValid;
}

MDGetPlaylistDetail_200_response_playlist_creator MDGetPlaylistDetail_200_response_playlist::getCreator() const {
    return m_creator;
}
void MDGetPlaylistDetail_200_response_playlist::setCreator(const MDGetPlaylistDetail_200_response_playlist_creator &creator) {
    m_creator = creator;
    m_creator_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_creator_Set() const{
    return m_creator_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_creator_Valid() const{
    return m_creator_isValid;
}

QList<MDGetPlaylistDetail_200_response_playlist_tracks_inner> MDGetPlaylistDetail_200_response_playlist::getTracks() const {
    return m_tracks;
}
void MDGetPlaylistDetail_200_response_playlist::setTracks(const QList<MDGetPlaylistDetail_200_response_playlist_tracks_inner> &tracks) {
    m_tracks = tracks;
    m_tracks_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_tracks_Set() const{
    return m_tracks_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_tracks_Valid() const{
    return m_tracks_isValid;
}

QList<MDGetPlaylistDetail_200_response_playlist_trackIds_inner> MDGetPlaylistDetail_200_response_playlist::getTrackIds() const {
    return m_track_ids;
}
void MDGetPlaylistDetail_200_response_playlist::setTrackIds(const QList<MDGetPlaylistDetail_200_response_playlist_trackIds_inner> &track_ids) {
    m_track_ids = track_ids;
    m_track_ids_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_track_ids_Set() const{
    return m_track_ids_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_track_ids_Valid() const{
    return m_track_ids_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getShareCount() const {
    return m_share_count;
}
void MDGetPlaylistDetail_200_response_playlist::setShareCount(const qint32 &share_count) {
    m_share_count = share_count;
    m_share_count_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_share_count_Set() const{
    return m_share_count_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_share_count_Valid() const{
    return m_share_count_isValid;
}

qint32 MDGetPlaylistDetail_200_response_playlist::getCommentCount() const {
    return m_comment_count;
}
void MDGetPlaylistDetail_200_response_playlist::setCommentCount(const qint32 &comment_count) {
    m_comment_count = comment_count;
    m_comment_count_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_comment_count_Set() const{
    return m_comment_count_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_comment_count_Valid() const{
    return m_comment_count_isValid;
}

QString MDGetPlaylistDetail_200_response_playlist::getGradeStatus() const {
    return m_grade_status;
}
void MDGetPlaylistDetail_200_response_playlist::setGradeStatus(const QString &grade_status) {
    m_grade_status = grade_status;
    m_grade_status_isSet = true;
}

bool MDGetPlaylistDetail_200_response_playlist::is_grade_status_Set() const{
    return m_grade_status_isSet;
}

bool MDGetPlaylistDetail_200_response_playlist::is_grade_status_Valid() const{
    return m_grade_status_isValid;
}

bool MDGetPlaylistDetail_200_response_playlist::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_img_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_img_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_img_id_str_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ad_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_create_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_op_recommend_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_high_quality_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_new_imported_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_update_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_track_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_special_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_privacy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_track_update_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_comment_thread_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_play_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_track_number_update_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscribed_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cloud_track_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ordered_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_background_cover_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_copied_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscribers.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscribed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creator.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_tracks.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_track_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_share_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_comment_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_grade_status_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetPlaylistDetail_200_response_playlist::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_cover_img_id_isValid && m_cover_img_url_isValid && m_cover_img_id_str_isValid && m_ad_type_isValid && m_user_id_isValid && m_create_time_isValid && m_status_isValid && m_op_recommend_isValid && m_high_quality_isValid && m_new_imported_isValid && m_update_time_isValid && m_track_count_isValid && m_special_type_isValid && m_privacy_isValid && m_track_update_time_isValid && m_comment_thread_id_isValid && m_play_count_isValid && m_track_number_update_time_isValid && m_subscribed_count_isValid && m_cloud_track_count_isValid && m_ordered_isValid && m_description_isValid && m_tags_isValid && m_background_cover_id_isValid && m_title_image_isValid && m_copied_isValid && m_subscribers_isValid && m_subscribed_isValid && m_creator_isValid && m_tracks_isValid && m_track_ids_isValid && m_share_count_isValid && m_comment_count_isValid && m_grade_status_isValid && true;
}

} // namespace MelodixAPI
