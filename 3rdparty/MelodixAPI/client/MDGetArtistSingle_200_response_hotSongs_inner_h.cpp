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

#include "MDGetArtistSingle_200_response_hotSongs_inner_h.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetArtistSingle_200_response_hotSongs_inner_h::MDGetArtistSingle_200_response_hotSongs_inner_h(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetArtistSingle_200_response_hotSongs_inner_h::MDGetArtistSingle_200_response_hotSongs_inner_h() {
    this->initializeModel();
}

MDGetArtistSingle_200_response_hotSongs_inner_h::~MDGetArtistSingle_200_response_hotSongs_inner_h() {}

void MDGetArtistSingle_200_response_hotSongs_inner_h::initializeModel() {

    m_br_isSet = false;
    m_br_isValid = false;

    m_fid_isSet = false;
    m_fid_isValid = false;

    m_size_isSet = false;
    m_size_isValid = false;

    m_vd_isSet = false;
    m_vd_isValid = false;

    m_sr_isSet = false;
    m_sr_isValid = false;
}

void MDGetArtistSingle_200_response_hotSongs_inner_h::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetArtistSingle_200_response_hotSongs_inner_h::fromJsonObject(QJsonObject json) {

    m_br_isValid = ::MelodixAPI::fromJsonValue(m_br, json[QString("br")]);
    m_br_isSet = !json[QString("br")].isNull() && m_br_isValid;

    m_fid_isValid = ::MelodixAPI::fromJsonValue(m_fid, json[QString("fid")]);
    m_fid_isSet = !json[QString("fid")].isNull() && m_fid_isValid;

    m_size_isValid = ::MelodixAPI::fromJsonValue(m_size, json[QString("size")]);
    m_size_isSet = !json[QString("size")].isNull() && m_size_isValid;

    m_vd_isValid = ::MelodixAPI::fromJsonValue(m_vd, json[QString("vd")]);
    m_vd_isSet = !json[QString("vd")].isNull() && m_vd_isValid;

    m_sr_isValid = ::MelodixAPI::fromJsonValue(m_sr, json[QString("sr")]);
    m_sr_isSet = !json[QString("sr")].isNull() && m_sr_isValid;
}

QString MDGetArtistSingle_200_response_hotSongs_inner_h::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetArtistSingle_200_response_hotSongs_inner_h::asJsonObject() const {
    QJsonObject obj;
    if (m_br_isSet) {
        obj.insert(QString("br"), ::MelodixAPI::toJsonValue(m_br));
    }
    if (m_fid_isSet) {
        obj.insert(QString("fid"), ::MelodixAPI::toJsonValue(m_fid));
    }
    if (m_size_isSet) {
        obj.insert(QString("size"), ::MelodixAPI::toJsonValue(m_size));
    }
    if (m_vd_isSet) {
        obj.insert(QString("vd"), ::MelodixAPI::toJsonValue(m_vd));
    }
    if (m_sr_isSet) {
        obj.insert(QString("sr"), ::MelodixAPI::toJsonValue(m_sr));
    }
    return obj;
}

qint32 MDGetArtistSingle_200_response_hotSongs_inner_h::getBr() const {
    return m_br;
}
void MDGetArtistSingle_200_response_hotSongs_inner_h::setBr(const qint32 &br) {
    m_br = br;
    m_br_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_br_Set() const{
    return m_br_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_br_Valid() const{
    return m_br_isValid;
}

qint32 MDGetArtistSingle_200_response_hotSongs_inner_h::getFid() const {
    return m_fid;
}
void MDGetArtistSingle_200_response_hotSongs_inner_h::setFid(const qint32 &fid) {
    m_fid = fid;
    m_fid_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_fid_Set() const{
    return m_fid_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_fid_Valid() const{
    return m_fid_isValid;
}

qint32 MDGetArtistSingle_200_response_hotSongs_inner_h::getSize() const {
    return m_size;
}
void MDGetArtistSingle_200_response_hotSongs_inner_h::setSize(const qint32 &size) {
    m_size = size;
    m_size_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_size_Set() const{
    return m_size_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_size_Valid() const{
    return m_size_isValid;
}

qint32 MDGetArtistSingle_200_response_hotSongs_inner_h::getVd() const {
    return m_vd;
}
void MDGetArtistSingle_200_response_hotSongs_inner_h::setVd(const qint32 &vd) {
    m_vd = vd;
    m_vd_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_vd_Set() const{
    return m_vd_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_vd_Valid() const{
    return m_vd_isValid;
}

qint32 MDGetArtistSingle_200_response_hotSongs_inner_h::getSr() const {
    return m_sr;
}
void MDGetArtistSingle_200_response_hotSongs_inner_h::setSr(const qint32 &sr) {
    m_sr = sr;
    m_sr_isSet = true;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_sr_Set() const{
    return m_sr_isSet;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::is_sr_Valid() const{
    return m_sr_isValid;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_br_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vd_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sr_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetArtistSingle_200_response_hotSongs_inner_h::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_br_isValid && m_fid_isValid && m_size_isValid && m_vd_isValid && m_sr_isValid && true;
}

} // namespace MelodixAPI
