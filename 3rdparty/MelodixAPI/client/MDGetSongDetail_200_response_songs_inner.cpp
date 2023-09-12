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

#include "MDGetSongDetail_200_response_songs_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetSongDetail_200_response_songs_inner::MDGetSongDetail_200_response_songs_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetSongDetail_200_response_songs_inner::MDGetSongDetail_200_response_songs_inner() {
    this->initializeModel();
}

MDGetSongDetail_200_response_songs_inner::~MDGetSongDetail_200_response_songs_inner() {}

void MDGetSongDetail_200_response_songs_inner::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_pst_isSet = false;
    m_pst_isValid = false;

    m_t_isSet = false;
    m_t_isValid = false;

    m_ar_isSet = false;
    m_ar_isValid = false;

    m_alia_isSet = false;
    m_alia_isValid = false;

    m_pop_isSet = false;
    m_pop_isValid = false;

    m_st_isSet = false;
    m_st_isValid = false;

    m_rt_isSet = false;
    m_rt_isValid = false;

    m_fee_isSet = false;
    m_fee_isValid = false;

    m_v_isSet = false;
    m_v_isValid = false;

    m_cf_isSet = false;
    m_cf_isValid = false;

    m_al_isSet = false;
    m_al_isValid = false;

    m_dt_isSet = false;
    m_dt_isValid = false;

    m_h_isSet = false;
    m_h_isValid = false;

    m_m_isSet = false;
    m_m_isValid = false;

    m_l_isSet = false;
    m_l_isValid = false;

    m_sq_isSet = false;
    m_sq_isValid = false;

    m_cd_isSet = false;
    m_cd_isValid = false;

    m_no_isSet = false;
    m_no_isValid = false;

    m_ftype_isSet = false;
    m_ftype_isValid = false;

    m_rt_urls_isSet = false;
    m_rt_urls_isValid = false;

    m_dj_id_isSet = false;
    m_dj_id_isValid = false;

    m_copyright_isSet = false;
    m_copyright_isValid = false;

    m_s_id_isSet = false;
    m_s_id_isValid = false;

    m_mark_isSet = false;
    m_mark_isValid = false;

    m_origin_cover_type_isSet = false;
    m_origin_cover_type_isValid = false;

    m_resource_state_isSet = false;
    m_resource_state_isValid = false;

    m_version_isSet = false;
    m_version_isValid = false;

    m_single_isSet = false;
    m_single_isValid = false;

    m_mv_isSet = false;
    m_mv_isValid = false;

    m_rtype_isSet = false;
    m_rtype_isValid = false;

    m_mst_isSet = false;
    m_mst_isValid = false;

    m_cp_isSet = false;
    m_cp_isValid = false;

    m_publish_time_isSet = false;
    m_publish_time_isValid = false;
}

void MDGetSongDetail_200_response_songs_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetSongDetail_200_response_songs_inner::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::MelodixAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_pst_isValid = ::MelodixAPI::fromJsonValue(m_pst, json[QString("pst")]);
    m_pst_isSet = !json[QString("pst")].isNull() && m_pst_isValid;

    m_t_isValid = ::MelodixAPI::fromJsonValue(m_t, json[QString("t")]);
    m_t_isSet = !json[QString("t")].isNull() && m_t_isValid;

    m_ar_isValid = ::MelodixAPI::fromJsonValue(m_ar, json[QString("ar")]);
    m_ar_isSet = !json[QString("ar")].isNull() && m_ar_isValid;

    m_alia_isValid = ::MelodixAPI::fromJsonValue(m_alia, json[QString("alia")]);
    m_alia_isSet = !json[QString("alia")].isNull() && m_alia_isValid;

    m_pop_isValid = ::MelodixAPI::fromJsonValue(m_pop, json[QString("pop")]);
    m_pop_isSet = !json[QString("pop")].isNull() && m_pop_isValid;

    m_st_isValid = ::MelodixAPI::fromJsonValue(m_st, json[QString("st")]);
    m_st_isSet = !json[QString("st")].isNull() && m_st_isValid;

    m_rt_isValid = ::MelodixAPI::fromJsonValue(m_rt, json[QString("rt")]);
    m_rt_isSet = !json[QString("rt")].isNull() && m_rt_isValid;

    m_fee_isValid = ::MelodixAPI::fromJsonValue(m_fee, json[QString("fee")]);
    m_fee_isSet = !json[QString("fee")].isNull() && m_fee_isValid;

    m_v_isValid = ::MelodixAPI::fromJsonValue(m_v, json[QString("v")]);
    m_v_isSet = !json[QString("v")].isNull() && m_v_isValid;

    m_cf_isValid = ::MelodixAPI::fromJsonValue(m_cf, json[QString("cf")]);
    m_cf_isSet = !json[QString("cf")].isNull() && m_cf_isValid;

    m_al_isValid = ::MelodixAPI::fromJsonValue(m_al, json[QString("al")]);
    m_al_isSet = !json[QString("al")].isNull() && m_al_isValid;

    m_dt_isValid = ::MelodixAPI::fromJsonValue(m_dt, json[QString("dt")]);
    m_dt_isSet = !json[QString("dt")].isNull() && m_dt_isValid;

    m_h_isValid = ::MelodixAPI::fromJsonValue(m_h, json[QString("h")]);
    m_h_isSet = !json[QString("h")].isNull() && m_h_isValid;

    m_m_isValid = ::MelodixAPI::fromJsonValue(m_m, json[QString("m")]);
    m_m_isSet = !json[QString("m")].isNull() && m_m_isValid;

    m_l_isValid = ::MelodixAPI::fromJsonValue(m_l, json[QString("l")]);
    m_l_isSet = !json[QString("l")].isNull() && m_l_isValid;

    m_sq_isValid = ::MelodixAPI::fromJsonValue(m_sq, json[QString("sq")]);
    m_sq_isSet = !json[QString("sq")].isNull() && m_sq_isValid;

    m_cd_isValid = ::MelodixAPI::fromJsonValue(m_cd, json[QString("cd")]);
    m_cd_isSet = !json[QString("cd")].isNull() && m_cd_isValid;

    m_no_isValid = ::MelodixAPI::fromJsonValue(m_no, json[QString("no")]);
    m_no_isSet = !json[QString("no")].isNull() && m_no_isValid;

    m_ftype_isValid = ::MelodixAPI::fromJsonValue(m_ftype, json[QString("ftype")]);
    m_ftype_isSet = !json[QString("ftype")].isNull() && m_ftype_isValid;

    m_rt_urls_isValid = ::MelodixAPI::fromJsonValue(m_rt_urls, json[QString("rtUrls")]);
    m_rt_urls_isSet = !json[QString("rtUrls")].isNull() && m_rt_urls_isValid;

    m_dj_id_isValid = ::MelodixAPI::fromJsonValue(m_dj_id, json[QString("djId")]);
    m_dj_id_isSet = !json[QString("djId")].isNull() && m_dj_id_isValid;

    m_copyright_isValid = ::MelodixAPI::fromJsonValue(m_copyright, json[QString("copyright")]);
    m_copyright_isSet = !json[QString("copyright")].isNull() && m_copyright_isValid;

    m_s_id_isValid = ::MelodixAPI::fromJsonValue(m_s_id, json[QString("s_id")]);
    m_s_id_isSet = !json[QString("s_id")].isNull() && m_s_id_isValid;

    m_mark_isValid = ::MelodixAPI::fromJsonValue(m_mark, json[QString("mark")]);
    m_mark_isSet = !json[QString("mark")].isNull() && m_mark_isValid;

    m_origin_cover_type_isValid = ::MelodixAPI::fromJsonValue(m_origin_cover_type, json[QString("originCoverType")]);
    m_origin_cover_type_isSet = !json[QString("originCoverType")].isNull() && m_origin_cover_type_isValid;

    m_resource_state_isValid = ::MelodixAPI::fromJsonValue(m_resource_state, json[QString("resourceState")]);
    m_resource_state_isSet = !json[QString("resourceState")].isNull() && m_resource_state_isValid;

    m_version_isValid = ::MelodixAPI::fromJsonValue(m_version, json[QString("version")]);
    m_version_isSet = !json[QString("version")].isNull() && m_version_isValid;

    m_single_isValid = ::MelodixAPI::fromJsonValue(m_single, json[QString("single")]);
    m_single_isSet = !json[QString("single")].isNull() && m_single_isValid;

    m_mv_isValid = ::MelodixAPI::fromJsonValue(m_mv, json[QString("mv")]);
    m_mv_isSet = !json[QString("mv")].isNull() && m_mv_isValid;

    m_rtype_isValid = ::MelodixAPI::fromJsonValue(m_rtype, json[QString("rtype")]);
    m_rtype_isSet = !json[QString("rtype")].isNull() && m_rtype_isValid;

    m_mst_isValid = ::MelodixAPI::fromJsonValue(m_mst, json[QString("mst")]);
    m_mst_isSet = !json[QString("mst")].isNull() && m_mst_isValid;

    m_cp_isValid = ::MelodixAPI::fromJsonValue(m_cp, json[QString("cp")]);
    m_cp_isSet = !json[QString("cp")].isNull() && m_cp_isValid;

    m_publish_time_isValid = ::MelodixAPI::fromJsonValue(m_publish_time, json[QString("publishTime")]);
    m_publish_time_isSet = !json[QString("publishTime")].isNull() && m_publish_time_isValid;
}

QString MDGetSongDetail_200_response_songs_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetSongDetail_200_response_songs_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::MelodixAPI::toJsonValue(m_name));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_pst_isSet) {
        obj.insert(QString("pst"), ::MelodixAPI::toJsonValue(m_pst));
    }
    if (m_t_isSet) {
        obj.insert(QString("t"), ::MelodixAPI::toJsonValue(m_t));
    }
    if (m_ar.size() > 0) {
        obj.insert(QString("ar"), ::MelodixAPI::toJsonValue(m_ar));
    }
    if (m_alia.size() > 0) {
        obj.insert(QString("alia"), ::MelodixAPI::toJsonValue(m_alia));
    }
    if (m_pop_isSet) {
        obj.insert(QString("pop"), ::MelodixAPI::toJsonValue(m_pop));
    }
    if (m_st_isSet) {
        obj.insert(QString("st"), ::MelodixAPI::toJsonValue(m_st));
    }
    if (m_rt_isSet) {
        obj.insert(QString("rt"), ::MelodixAPI::toJsonValue(m_rt));
    }
    if (m_fee_isSet) {
        obj.insert(QString("fee"), ::MelodixAPI::toJsonValue(m_fee));
    }
    if (m_v_isSet) {
        obj.insert(QString("v"), ::MelodixAPI::toJsonValue(m_v));
    }
    if (m_cf_isSet) {
        obj.insert(QString("cf"), ::MelodixAPI::toJsonValue(m_cf));
    }
    if (m_al.isSet()) {
        obj.insert(QString("al"), ::MelodixAPI::toJsonValue(m_al));
    }
    if (m_dt_isSet) {
        obj.insert(QString("dt"), ::MelodixAPI::toJsonValue(m_dt));
    }
    if (m_h.isSet()) {
        obj.insert(QString("h"), ::MelodixAPI::toJsonValue(m_h));
    }
    if (m_m.isSet()) {
        obj.insert(QString("m"), ::MelodixAPI::toJsonValue(m_m));
    }
    if (m_l.isSet()) {
        obj.insert(QString("l"), ::MelodixAPI::toJsonValue(m_l));
    }
    if (m_sq.isSet()) {
        obj.insert(QString("sq"), ::MelodixAPI::toJsonValue(m_sq));
    }
    if (m_cd_isSet) {
        obj.insert(QString("cd"), ::MelodixAPI::toJsonValue(m_cd));
    }
    if (m_no_isSet) {
        obj.insert(QString("no"), ::MelodixAPI::toJsonValue(m_no));
    }
    if (m_ftype_isSet) {
        obj.insert(QString("ftype"), ::MelodixAPI::toJsonValue(m_ftype));
    }
    if (m_rt_urls.size() > 0) {
        obj.insert(QString("rtUrls"), ::MelodixAPI::toJsonValue(m_rt_urls));
    }
    if (m_dj_id_isSet) {
        obj.insert(QString("djId"), ::MelodixAPI::toJsonValue(m_dj_id));
    }
    if (m_copyright_isSet) {
        obj.insert(QString("copyright"), ::MelodixAPI::toJsonValue(m_copyright));
    }
    if (m_s_id_isSet) {
        obj.insert(QString("s_id"), ::MelodixAPI::toJsonValue(m_s_id));
    }
    if (m_mark_isSet) {
        obj.insert(QString("mark"), ::MelodixAPI::toJsonValue(m_mark));
    }
    if (m_origin_cover_type_isSet) {
        obj.insert(QString("originCoverType"), ::MelodixAPI::toJsonValue(m_origin_cover_type));
    }
    if (m_resource_state_isSet) {
        obj.insert(QString("resourceState"), ::MelodixAPI::toJsonValue(m_resource_state));
    }
    if (m_version_isSet) {
        obj.insert(QString("version"), ::MelodixAPI::toJsonValue(m_version));
    }
    if (m_single_isSet) {
        obj.insert(QString("single"), ::MelodixAPI::toJsonValue(m_single));
    }
    if (m_mv_isSet) {
        obj.insert(QString("mv"), ::MelodixAPI::toJsonValue(m_mv));
    }
    if (m_rtype_isSet) {
        obj.insert(QString("rtype"), ::MelodixAPI::toJsonValue(m_rtype));
    }
    if (m_mst_isSet) {
        obj.insert(QString("mst"), ::MelodixAPI::toJsonValue(m_mst));
    }
    if (m_cp_isSet) {
        obj.insert(QString("cp"), ::MelodixAPI::toJsonValue(m_cp));
    }
    if (m_publish_time_isSet) {
        obj.insert(QString("publishTime"), ::MelodixAPI::toJsonValue(m_publish_time));
    }
    return obj;
}

QString MDGetSongDetail_200_response_songs_inner::getName() const {
    return m_name;
}
void MDGetSongDetail_200_response_songs_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_name_Set() const{
    return m_name_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_name_Valid() const{
    return m_name_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getId() const {
    return m_id;
}
void MDGetSongDetail_200_response_songs_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_id_Valid() const{
    return m_id_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getPst() const {
    return m_pst;
}
void MDGetSongDetail_200_response_songs_inner::setPst(const qint32 &pst) {
    m_pst = pst;
    m_pst_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_pst_Set() const{
    return m_pst_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_pst_Valid() const{
    return m_pst_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getT() const {
    return m_t;
}
void MDGetSongDetail_200_response_songs_inner::setT(const qint32 &t) {
    m_t = t;
    m_t_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_t_Set() const{
    return m_t_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_t_Valid() const{
    return m_t_isValid;
}

QList<MDGetSongDetail_200_response_songs_inner_ar_inner> MDGetSongDetail_200_response_songs_inner::getAr() const {
    return m_ar;
}
void MDGetSongDetail_200_response_songs_inner::setAr(const QList<MDGetSongDetail_200_response_songs_inner_ar_inner> &ar) {
    m_ar = ar;
    m_ar_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_ar_Set() const{
    return m_ar_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_ar_Valid() const{
    return m_ar_isValid;
}

QList<QString> MDGetSongDetail_200_response_songs_inner::getAlia() const {
    return m_alia;
}
void MDGetSongDetail_200_response_songs_inner::setAlia(const QList<QString> &alia) {
    m_alia = alia;
    m_alia_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_alia_Set() const{
    return m_alia_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_alia_Valid() const{
    return m_alia_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getPop() const {
    return m_pop;
}
void MDGetSongDetail_200_response_songs_inner::setPop(const qint32 &pop) {
    m_pop = pop;
    m_pop_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_pop_Set() const{
    return m_pop_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_pop_Valid() const{
    return m_pop_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getSt() const {
    return m_st;
}
void MDGetSongDetail_200_response_songs_inner::setSt(const qint32 &st) {
    m_st = st;
    m_st_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_st_Set() const{
    return m_st_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_st_Valid() const{
    return m_st_isValid;
}

QString MDGetSongDetail_200_response_songs_inner::getRt() const {
    return m_rt;
}
void MDGetSongDetail_200_response_songs_inner::setRt(const QString &rt) {
    m_rt = rt;
    m_rt_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_rt_Set() const{
    return m_rt_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_rt_Valid() const{
    return m_rt_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getFee() const {
    return m_fee;
}
void MDGetSongDetail_200_response_songs_inner::setFee(const qint32 &fee) {
    m_fee = fee;
    m_fee_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_fee_Set() const{
    return m_fee_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_fee_Valid() const{
    return m_fee_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getV() const {
    return m_v;
}
void MDGetSongDetail_200_response_songs_inner::setV(const qint32 &v) {
    m_v = v;
    m_v_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_v_Set() const{
    return m_v_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_v_Valid() const{
    return m_v_isValid;
}

QString MDGetSongDetail_200_response_songs_inner::getCf() const {
    return m_cf;
}
void MDGetSongDetail_200_response_songs_inner::setCf(const QString &cf) {
    m_cf = cf;
    m_cf_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_cf_Set() const{
    return m_cf_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_cf_Valid() const{
    return m_cf_isValid;
}

MDGetPlaylistDetail_200_response_playlist_tracks_inner_al MDGetSongDetail_200_response_songs_inner::getAl() const {
    return m_al;
}
void MDGetSongDetail_200_response_songs_inner::setAl(const MDGetPlaylistDetail_200_response_playlist_tracks_inner_al &al) {
    m_al = al;
    m_al_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_al_Set() const{
    return m_al_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_al_Valid() const{
    return m_al_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getDt() const {
    return m_dt;
}
void MDGetSongDetail_200_response_songs_inner::setDt(const qint32 &dt) {
    m_dt = dt;
    m_dt_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_dt_Set() const{
    return m_dt_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_dt_Valid() const{
    return m_dt_isValid;
}

MDGetArtistSingle_200_response_hotSongs_inner_h MDGetSongDetail_200_response_songs_inner::getH() const {
    return m_h;
}
void MDGetSongDetail_200_response_songs_inner::setH(const MDGetArtistSingle_200_response_hotSongs_inner_h &h) {
    m_h = h;
    m_h_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_h_Set() const{
    return m_h_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_h_Valid() const{
    return m_h_isValid;
}

MDGetArtistSingle_200_response_hotSongs_inner_h MDGetSongDetail_200_response_songs_inner::getM() const {
    return m_m;
}
void MDGetSongDetail_200_response_songs_inner::setM(const MDGetArtistSingle_200_response_hotSongs_inner_h &m) {
    m_m = m;
    m_m_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_m_Set() const{
    return m_m_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_m_Valid() const{
    return m_m_isValid;
}

MDGetArtistSingle_200_response_hotSongs_inner_h MDGetSongDetail_200_response_songs_inner::getL() const {
    return m_l;
}
void MDGetSongDetail_200_response_songs_inner::setL(const MDGetArtistSingle_200_response_hotSongs_inner_h &l) {
    m_l = l;
    m_l_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_l_Set() const{
    return m_l_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_l_Valid() const{
    return m_l_isValid;
}

MDGetArtistSingle_200_response_hotSongs_inner_h MDGetSongDetail_200_response_songs_inner::getSq() const {
    return m_sq;
}
void MDGetSongDetail_200_response_songs_inner::setSq(const MDGetArtistSingle_200_response_hotSongs_inner_h &sq) {
    m_sq = sq;
    m_sq_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_sq_Set() const{
    return m_sq_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_sq_Valid() const{
    return m_sq_isValid;
}

QString MDGetSongDetail_200_response_songs_inner::getCd() const {
    return m_cd;
}
void MDGetSongDetail_200_response_songs_inner::setCd(const QString &cd) {
    m_cd = cd;
    m_cd_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_cd_Set() const{
    return m_cd_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_cd_Valid() const{
    return m_cd_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getNo() const {
    return m_no;
}
void MDGetSongDetail_200_response_songs_inner::setNo(const qint32 &no) {
    m_no = no;
    m_no_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_no_Set() const{
    return m_no_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_no_Valid() const{
    return m_no_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getFtype() const {
    return m_ftype;
}
void MDGetSongDetail_200_response_songs_inner::setFtype(const qint32 &ftype) {
    m_ftype = ftype;
    m_ftype_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_ftype_Set() const{
    return m_ftype_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_ftype_Valid() const{
    return m_ftype_isValid;
}

QList<QString> MDGetSongDetail_200_response_songs_inner::getRtUrls() const {
    return m_rt_urls;
}
void MDGetSongDetail_200_response_songs_inner::setRtUrls(const QList<QString> &rt_urls) {
    m_rt_urls = rt_urls;
    m_rt_urls_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_rt_urls_Set() const{
    return m_rt_urls_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_rt_urls_Valid() const{
    return m_rt_urls_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getDjId() const {
    return m_dj_id;
}
void MDGetSongDetail_200_response_songs_inner::setDjId(const qint32 &dj_id) {
    m_dj_id = dj_id;
    m_dj_id_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_dj_id_Set() const{
    return m_dj_id_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_dj_id_Valid() const{
    return m_dj_id_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getCopyright() const {
    return m_copyright;
}
void MDGetSongDetail_200_response_songs_inner::setCopyright(const qint32 &copyright) {
    m_copyright = copyright;
    m_copyright_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_copyright_Set() const{
    return m_copyright_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_copyright_Valid() const{
    return m_copyright_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getSId() const {
    return m_s_id;
}
void MDGetSongDetail_200_response_songs_inner::setSId(const qint32 &s_id) {
    m_s_id = s_id;
    m_s_id_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_s_id_Set() const{
    return m_s_id_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_s_id_Valid() const{
    return m_s_id_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getMark() const {
    return m_mark;
}
void MDGetSongDetail_200_response_songs_inner::setMark(const qint32 &mark) {
    m_mark = mark;
    m_mark_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_mark_Set() const{
    return m_mark_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_mark_Valid() const{
    return m_mark_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getOriginCoverType() const {
    return m_origin_cover_type;
}
void MDGetSongDetail_200_response_songs_inner::setOriginCoverType(const qint32 &origin_cover_type) {
    m_origin_cover_type = origin_cover_type;
    m_origin_cover_type_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_origin_cover_type_Set() const{
    return m_origin_cover_type_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_origin_cover_type_Valid() const{
    return m_origin_cover_type_isValid;
}

bool MDGetSongDetail_200_response_songs_inner::isResourceState() const {
    return m_resource_state;
}
void MDGetSongDetail_200_response_songs_inner::setResourceState(const bool &resource_state) {
    m_resource_state = resource_state;
    m_resource_state_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_resource_state_Set() const{
    return m_resource_state_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_resource_state_Valid() const{
    return m_resource_state_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getVersion() const {
    return m_version;
}
void MDGetSongDetail_200_response_songs_inner::setVersion(const qint32 &version) {
    m_version = version;
    m_version_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_version_Set() const{
    return m_version_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_version_Valid() const{
    return m_version_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getSingle() const {
    return m_single;
}
void MDGetSongDetail_200_response_songs_inner::setSingle(const qint32 &single) {
    m_single = single;
    m_single_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_single_Set() const{
    return m_single_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_single_Valid() const{
    return m_single_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getMv() const {
    return m_mv;
}
void MDGetSongDetail_200_response_songs_inner::setMv(const qint32 &mv) {
    m_mv = mv;
    m_mv_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_mv_Set() const{
    return m_mv_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_mv_Valid() const{
    return m_mv_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getRtype() const {
    return m_rtype;
}
void MDGetSongDetail_200_response_songs_inner::setRtype(const qint32 &rtype) {
    m_rtype = rtype;
    m_rtype_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_rtype_Set() const{
    return m_rtype_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_rtype_Valid() const{
    return m_rtype_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getMst() const {
    return m_mst;
}
void MDGetSongDetail_200_response_songs_inner::setMst(const qint32 &mst) {
    m_mst = mst;
    m_mst_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_mst_Set() const{
    return m_mst_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_mst_Valid() const{
    return m_mst_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getCp() const {
    return m_cp;
}
void MDGetSongDetail_200_response_songs_inner::setCp(const qint32 &cp) {
    m_cp = cp;
    m_cp_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_cp_Set() const{
    return m_cp_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_cp_Valid() const{
    return m_cp_isValid;
}

qint32 MDGetSongDetail_200_response_songs_inner::getPublishTime() const {
    return m_publish_time;
}
void MDGetSongDetail_200_response_songs_inner::setPublishTime(const qint32 &publish_time) {
    m_publish_time = publish_time;
    m_publish_time_isSet = true;
}

bool MDGetSongDetail_200_response_songs_inner::is_publish_time_Set() const{
    return m_publish_time_isSet;
}

bool MDGetSongDetail_200_response_songs_inner::is_publish_time_Valid() const{
    return m_publish_time_isValid;
}

bool MDGetSongDetail_200_response_songs_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pst_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ar.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_alia.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_pop_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_st_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rt_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fee_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_v_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_al.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_h.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_m.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_l.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_sq.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_cd_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_no_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ftype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rt_urls.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_dj_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_copyright_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mark_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_origin_cover_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_resource_state_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_single_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mv_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rtype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mst_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_publish_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetSongDetail_200_response_songs_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace MelodixAPI
