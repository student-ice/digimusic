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

#include "MDGetPlaylistDetail_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetPlaylistDetail_200_response::MDGetPlaylistDetail_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetPlaylistDetail_200_response::MDGetPlaylistDetail_200_response() {
    this->initializeModel();
}

MDGetPlaylistDetail_200_response::~MDGetPlaylistDetail_200_response() {}

void MDGetPlaylistDetail_200_response::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_playlist_isSet = false;
    m_playlist_isValid = false;

    m_privileges_isSet = false;
    m_privileges_isValid = false;

    m_from_user_count_isSet = false;
    m_from_user_count_isValid = false;

    m_trial_mode_isSet = false;
    m_trial_mode_isValid = false;
}

void MDGetPlaylistDetail_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetPlaylistDetail_200_response::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::MelodixAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_playlist_isValid = ::MelodixAPI::fromJsonValue(m_playlist, json[QString("playlist")]);
    m_playlist_isSet = !json[QString("playlist")].isNull() && m_playlist_isValid;

    m_privileges_isValid = ::MelodixAPI::fromJsonValue(m_privileges, json[QString("privileges")]);
    m_privileges_isSet = !json[QString("privileges")].isNull() && m_privileges_isValid;

    m_from_user_count_isValid = ::MelodixAPI::fromJsonValue(m_from_user_count, json[QString("fromUserCount")]);
    m_from_user_count_isSet = !json[QString("fromUserCount")].isNull() && m_from_user_count_isValid;

    m_trial_mode_isValid = ::MelodixAPI::fromJsonValue(m_trial_mode, json[QString("trialMode")]);
    m_trial_mode_isSet = !json[QString("trialMode")].isNull() && m_trial_mode_isValid;
}

QString MDGetPlaylistDetail_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetPlaylistDetail_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::MelodixAPI::toJsonValue(m_code));
    }
    if (m_playlist.isSet()) {
        obj.insert(QString("playlist"), ::MelodixAPI::toJsonValue(m_playlist));
    }
    if (m_privileges.size() > 0) {
        obj.insert(QString("privileges"), ::MelodixAPI::toJsonValue(m_privileges));
    }
    if (m_from_user_count_isSet) {
        obj.insert(QString("fromUserCount"), ::MelodixAPI::toJsonValue(m_from_user_count));
    }
    if (m_trial_mode_isSet) {
        obj.insert(QString("trialMode"), ::MelodixAPI::toJsonValue(m_trial_mode));
    }
    return obj;
}

qint32 MDGetPlaylistDetail_200_response::getCode() const {
    return m_code;
}
void MDGetPlaylistDetail_200_response::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool MDGetPlaylistDetail_200_response::is_code_Set() const{
    return m_code_isSet;
}

bool MDGetPlaylistDetail_200_response::is_code_Valid() const{
    return m_code_isValid;
}

MDGetPlaylistDetail_200_response_playlist MDGetPlaylistDetail_200_response::getPlaylist() const {
    return m_playlist;
}
void MDGetPlaylistDetail_200_response::setPlaylist(const MDGetPlaylistDetail_200_response_playlist &playlist) {
    m_playlist = playlist;
    m_playlist_isSet = true;
}

bool MDGetPlaylistDetail_200_response::is_playlist_Set() const{
    return m_playlist_isSet;
}

bool MDGetPlaylistDetail_200_response::is_playlist_Valid() const{
    return m_playlist_isValid;
}

QList<MDGetPlaylistDetail_200_response_privileges_inner> MDGetPlaylistDetail_200_response::getPrivileges() const {
    return m_privileges;
}
void MDGetPlaylistDetail_200_response::setPrivileges(const QList<MDGetPlaylistDetail_200_response_privileges_inner> &privileges) {
    m_privileges = privileges;
    m_privileges_isSet = true;
}

bool MDGetPlaylistDetail_200_response::is_privileges_Set() const{
    return m_privileges_isSet;
}

bool MDGetPlaylistDetail_200_response::is_privileges_Valid() const{
    return m_privileges_isValid;
}

qint32 MDGetPlaylistDetail_200_response::getFromUserCount() const {
    return m_from_user_count;
}
void MDGetPlaylistDetail_200_response::setFromUserCount(const qint32 &from_user_count) {
    m_from_user_count = from_user_count;
    m_from_user_count_isSet = true;
}

bool MDGetPlaylistDetail_200_response::is_from_user_count_Set() const{
    return m_from_user_count_isSet;
}

bool MDGetPlaylistDetail_200_response::is_from_user_count_Valid() const{
    return m_from_user_count_isValid;
}

qint32 MDGetPlaylistDetail_200_response::getTrialMode() const {
    return m_trial_mode;
}
void MDGetPlaylistDetail_200_response::setTrialMode(const qint32 &trial_mode) {
    m_trial_mode = trial_mode;
    m_trial_mode_isSet = true;
}

bool MDGetPlaylistDetail_200_response::is_trial_mode_Set() const{
    return m_trial_mode_isSet;
}

bool MDGetPlaylistDetail_200_response::is_trial_mode_Valid() const{
    return m_trial_mode_isValid;
}

bool MDGetPlaylistDetail_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_playlist.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_privileges.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_from_user_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_trial_mode_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetPlaylistDetail_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_playlist_isValid && m_privileges_isValid && m_from_user_count_isValid && m_trial_mode_isValid && true;
}

} // namespace MelodixAPI
