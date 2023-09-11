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

#include "MDGetSongDetail_200_response_privileges_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "MDHelpers.h"

namespace MelodixAPI {

MDGetSongDetail_200_response_privileges_inner::MDGetSongDetail_200_response_privileges_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

MDGetSongDetail_200_response_privileges_inner::MDGetSongDetail_200_response_privileges_inner() {
    this->initializeModel();
}

MDGetSongDetail_200_response_privileges_inner::~MDGetSongDetail_200_response_privileges_inner() {}

void MDGetSongDetail_200_response_privileges_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_fee_isSet = false;
    m_fee_isValid = false;

    m_payed_isSet = false;
    m_payed_isValid = false;

    m_st_isSet = false;
    m_st_isValid = false;

    m_pl_isSet = false;
    m_pl_isValid = false;

    m_dl_isSet = false;
    m_dl_isValid = false;

    m_sp_isSet = false;
    m_sp_isValid = false;

    m_cp_isSet = false;
    m_cp_isValid = false;

    m_subp_isSet = false;
    m_subp_isValid = false;

    m_cs_isSet = false;
    m_cs_isValid = false;

    m_maxbr_isSet = false;
    m_maxbr_isValid = false;

    m_fl_isSet = false;
    m_fl_isValid = false;

    m_toast_isSet = false;
    m_toast_isValid = false;

    m_flag_isSet = false;
    m_flag_isValid = false;

    m_pre_sell_isSet = false;
    m_pre_sell_isValid = false;

    m_play_maxbr_isSet = false;
    m_play_maxbr_isValid = false;

    m_download_maxbr_isSet = false;
    m_download_maxbr_isValid = false;

    m_max_br_level_isSet = false;
    m_max_br_level_isValid = false;

    m_play_max_br_level_isSet = false;
    m_play_max_br_level_isValid = false;

    m_download_max_br_level_isSet = false;
    m_download_max_br_level_isValid = false;

    m_pl_level_isSet = false;
    m_pl_level_isValid = false;

    m_dl_level_isSet = false;
    m_dl_level_isValid = false;

    m_fl_level_isSet = false;
    m_fl_level_isValid = false;

    m_free_trial_privilege_isSet = false;
    m_free_trial_privilege_isValid = false;

    m_charge_info_list_isSet = false;
    m_charge_info_list_isValid = false;
}

void MDGetSongDetail_200_response_privileges_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void MDGetSongDetail_200_response_privileges_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::MelodixAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_fee_isValid = ::MelodixAPI::fromJsonValue(m_fee, json[QString("fee")]);
    m_fee_isSet = !json[QString("fee")].isNull() && m_fee_isValid;

    m_payed_isValid = ::MelodixAPI::fromJsonValue(m_payed, json[QString("payed")]);
    m_payed_isSet = !json[QString("payed")].isNull() && m_payed_isValid;

    m_st_isValid = ::MelodixAPI::fromJsonValue(m_st, json[QString("st")]);
    m_st_isSet = !json[QString("st")].isNull() && m_st_isValid;

    m_pl_isValid = ::MelodixAPI::fromJsonValue(m_pl, json[QString("pl")]);
    m_pl_isSet = !json[QString("pl")].isNull() && m_pl_isValid;

    m_dl_isValid = ::MelodixAPI::fromJsonValue(m_dl, json[QString("dl")]);
    m_dl_isSet = !json[QString("dl")].isNull() && m_dl_isValid;

    m_sp_isValid = ::MelodixAPI::fromJsonValue(m_sp, json[QString("sp")]);
    m_sp_isSet = !json[QString("sp")].isNull() && m_sp_isValid;

    m_cp_isValid = ::MelodixAPI::fromJsonValue(m_cp, json[QString("cp")]);
    m_cp_isSet = !json[QString("cp")].isNull() && m_cp_isValid;

    m_subp_isValid = ::MelodixAPI::fromJsonValue(m_subp, json[QString("subp")]);
    m_subp_isSet = !json[QString("subp")].isNull() && m_subp_isValid;

    m_cs_isValid = ::MelodixAPI::fromJsonValue(m_cs, json[QString("cs")]);
    m_cs_isSet = !json[QString("cs")].isNull() && m_cs_isValid;

    m_maxbr_isValid = ::MelodixAPI::fromJsonValue(m_maxbr, json[QString("maxbr")]);
    m_maxbr_isSet = !json[QString("maxbr")].isNull() && m_maxbr_isValid;

    m_fl_isValid = ::MelodixAPI::fromJsonValue(m_fl, json[QString("fl")]);
    m_fl_isSet = !json[QString("fl")].isNull() && m_fl_isValid;

    m_toast_isValid = ::MelodixAPI::fromJsonValue(m_toast, json[QString("toast")]);
    m_toast_isSet = !json[QString("toast")].isNull() && m_toast_isValid;

    m_flag_isValid = ::MelodixAPI::fromJsonValue(m_flag, json[QString("flag")]);
    m_flag_isSet = !json[QString("flag")].isNull() && m_flag_isValid;

    m_pre_sell_isValid = ::MelodixAPI::fromJsonValue(m_pre_sell, json[QString("preSell")]);
    m_pre_sell_isSet = !json[QString("preSell")].isNull() && m_pre_sell_isValid;

    m_play_maxbr_isValid = ::MelodixAPI::fromJsonValue(m_play_maxbr, json[QString("playMaxbr")]);
    m_play_maxbr_isSet = !json[QString("playMaxbr")].isNull() && m_play_maxbr_isValid;

    m_download_maxbr_isValid = ::MelodixAPI::fromJsonValue(m_download_maxbr, json[QString("downloadMaxbr")]);
    m_download_maxbr_isSet = !json[QString("downloadMaxbr")].isNull() && m_download_maxbr_isValid;

    m_max_br_level_isValid = ::MelodixAPI::fromJsonValue(m_max_br_level, json[QString("maxBrLevel")]);
    m_max_br_level_isSet = !json[QString("maxBrLevel")].isNull() && m_max_br_level_isValid;

    m_play_max_br_level_isValid = ::MelodixAPI::fromJsonValue(m_play_max_br_level, json[QString("playMaxBrLevel")]);
    m_play_max_br_level_isSet = !json[QString("playMaxBrLevel")].isNull() && m_play_max_br_level_isValid;

    m_download_max_br_level_isValid = ::MelodixAPI::fromJsonValue(m_download_max_br_level, json[QString("downloadMaxBrLevel")]);
    m_download_max_br_level_isSet = !json[QString("downloadMaxBrLevel")].isNull() && m_download_max_br_level_isValid;

    m_pl_level_isValid = ::MelodixAPI::fromJsonValue(m_pl_level, json[QString("plLevel")]);
    m_pl_level_isSet = !json[QString("plLevel")].isNull() && m_pl_level_isValid;

    m_dl_level_isValid = ::MelodixAPI::fromJsonValue(m_dl_level, json[QString("dlLevel")]);
    m_dl_level_isSet = !json[QString("dlLevel")].isNull() && m_dl_level_isValid;

    m_fl_level_isValid = ::MelodixAPI::fromJsonValue(m_fl_level, json[QString("flLevel")]);
    m_fl_level_isSet = !json[QString("flLevel")].isNull() && m_fl_level_isValid;

    m_free_trial_privilege_isValid = ::MelodixAPI::fromJsonValue(m_free_trial_privilege, json[QString("freeTrialPrivilege")]);
    m_free_trial_privilege_isSet = !json[QString("freeTrialPrivilege")].isNull() && m_free_trial_privilege_isValid;

    m_charge_info_list_isValid = ::MelodixAPI::fromJsonValue(m_charge_info_list, json[QString("chargeInfoList")]);
    m_charge_info_list_isSet = !json[QString("chargeInfoList")].isNull() && m_charge_info_list_isValid;
}

QString MDGetSongDetail_200_response_privileges_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject MDGetSongDetail_200_response_privileges_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::MelodixAPI::toJsonValue(m_id));
    }
    if (m_fee_isSet) {
        obj.insert(QString("fee"), ::MelodixAPI::toJsonValue(m_fee));
    }
    if (m_payed_isSet) {
        obj.insert(QString("payed"), ::MelodixAPI::toJsonValue(m_payed));
    }
    if (m_st_isSet) {
        obj.insert(QString("st"), ::MelodixAPI::toJsonValue(m_st));
    }
    if (m_pl_isSet) {
        obj.insert(QString("pl"), ::MelodixAPI::toJsonValue(m_pl));
    }
    if (m_dl_isSet) {
        obj.insert(QString("dl"), ::MelodixAPI::toJsonValue(m_dl));
    }
    if (m_sp_isSet) {
        obj.insert(QString("sp"), ::MelodixAPI::toJsonValue(m_sp));
    }
    if (m_cp_isSet) {
        obj.insert(QString("cp"), ::MelodixAPI::toJsonValue(m_cp));
    }
    if (m_subp_isSet) {
        obj.insert(QString("subp"), ::MelodixAPI::toJsonValue(m_subp));
    }
    if (m_cs_isSet) {
        obj.insert(QString("cs"), ::MelodixAPI::toJsonValue(m_cs));
    }
    if (m_maxbr_isSet) {
        obj.insert(QString("maxbr"), ::MelodixAPI::toJsonValue(m_maxbr));
    }
    if (m_fl_isSet) {
        obj.insert(QString("fl"), ::MelodixAPI::toJsonValue(m_fl));
    }
    if (m_toast_isSet) {
        obj.insert(QString("toast"), ::MelodixAPI::toJsonValue(m_toast));
    }
    if (m_flag_isSet) {
        obj.insert(QString("flag"), ::MelodixAPI::toJsonValue(m_flag));
    }
    if (m_pre_sell_isSet) {
        obj.insert(QString("preSell"), ::MelodixAPI::toJsonValue(m_pre_sell));
    }
    if (m_play_maxbr_isSet) {
        obj.insert(QString("playMaxbr"), ::MelodixAPI::toJsonValue(m_play_maxbr));
    }
    if (m_download_maxbr_isSet) {
        obj.insert(QString("downloadMaxbr"), ::MelodixAPI::toJsonValue(m_download_maxbr));
    }
    if (m_max_br_level_isSet) {
        obj.insert(QString("maxBrLevel"), ::MelodixAPI::toJsonValue(m_max_br_level));
    }
    if (m_play_max_br_level_isSet) {
        obj.insert(QString("playMaxBrLevel"), ::MelodixAPI::toJsonValue(m_play_max_br_level));
    }
    if (m_download_max_br_level_isSet) {
        obj.insert(QString("downloadMaxBrLevel"), ::MelodixAPI::toJsonValue(m_download_max_br_level));
    }
    if (m_pl_level_isSet) {
        obj.insert(QString("plLevel"), ::MelodixAPI::toJsonValue(m_pl_level));
    }
    if (m_dl_level_isSet) {
        obj.insert(QString("dlLevel"), ::MelodixAPI::toJsonValue(m_dl_level));
    }
    if (m_fl_level_isSet) {
        obj.insert(QString("flLevel"), ::MelodixAPI::toJsonValue(m_fl_level));
    }
    if (m_free_trial_privilege.isSet()) {
        obj.insert(QString("freeTrialPrivilege"), ::MelodixAPI::toJsonValue(m_free_trial_privilege));
    }
    if (m_charge_info_list.size() > 0) {
        obj.insert(QString("chargeInfoList"), ::MelodixAPI::toJsonValue(m_charge_info_list));
    }
    return obj;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getId() const {
    return m_id;
}
void MDGetSongDetail_200_response_privileges_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_id_Set() const{
    return m_id_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_id_Valid() const{
    return m_id_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getFee() const {
    return m_fee;
}
void MDGetSongDetail_200_response_privileges_inner::setFee(const qint32 &fee) {
    m_fee = fee;
    m_fee_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_fee_Set() const{
    return m_fee_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_fee_Valid() const{
    return m_fee_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getPayed() const {
    return m_payed;
}
void MDGetSongDetail_200_response_privileges_inner::setPayed(const qint32 &payed) {
    m_payed = payed;
    m_payed_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_payed_Set() const{
    return m_payed_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_payed_Valid() const{
    return m_payed_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getSt() const {
    return m_st;
}
void MDGetSongDetail_200_response_privileges_inner::setSt(const qint32 &st) {
    m_st = st;
    m_st_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_st_Set() const{
    return m_st_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_st_Valid() const{
    return m_st_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getPl() const {
    return m_pl;
}
void MDGetSongDetail_200_response_privileges_inner::setPl(const qint32 &pl) {
    m_pl = pl;
    m_pl_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_pl_Set() const{
    return m_pl_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_pl_Valid() const{
    return m_pl_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getDl() const {
    return m_dl;
}
void MDGetSongDetail_200_response_privileges_inner::setDl(const qint32 &dl) {
    m_dl = dl;
    m_dl_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_dl_Set() const{
    return m_dl_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_dl_Valid() const{
    return m_dl_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getSp() const {
    return m_sp;
}
void MDGetSongDetail_200_response_privileges_inner::setSp(const qint32 &sp) {
    m_sp = sp;
    m_sp_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_sp_Set() const{
    return m_sp_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_sp_Valid() const{
    return m_sp_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getCp() const {
    return m_cp;
}
void MDGetSongDetail_200_response_privileges_inner::setCp(const qint32 &cp) {
    m_cp = cp;
    m_cp_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_cp_Set() const{
    return m_cp_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_cp_Valid() const{
    return m_cp_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getSubp() const {
    return m_subp;
}
void MDGetSongDetail_200_response_privileges_inner::setSubp(const qint32 &subp) {
    m_subp = subp;
    m_subp_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_subp_Set() const{
    return m_subp_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_subp_Valid() const{
    return m_subp_isValid;
}

bool MDGetSongDetail_200_response_privileges_inner::isCs() const {
    return m_cs;
}
void MDGetSongDetail_200_response_privileges_inner::setCs(const bool &cs) {
    m_cs = cs;
    m_cs_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_cs_Set() const{
    return m_cs_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_cs_Valid() const{
    return m_cs_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getMaxbr() const {
    return m_maxbr;
}
void MDGetSongDetail_200_response_privileges_inner::setMaxbr(const qint32 &maxbr) {
    m_maxbr = maxbr;
    m_maxbr_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_maxbr_Set() const{
    return m_maxbr_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_maxbr_Valid() const{
    return m_maxbr_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getFl() const {
    return m_fl;
}
void MDGetSongDetail_200_response_privileges_inner::setFl(const qint32 &fl) {
    m_fl = fl;
    m_fl_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_fl_Set() const{
    return m_fl_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_fl_Valid() const{
    return m_fl_isValid;
}

bool MDGetSongDetail_200_response_privileges_inner::isToast() const {
    return m_toast;
}
void MDGetSongDetail_200_response_privileges_inner::setToast(const bool &toast) {
    m_toast = toast;
    m_toast_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_toast_Set() const{
    return m_toast_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_toast_Valid() const{
    return m_toast_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getFlag() const {
    return m_flag;
}
void MDGetSongDetail_200_response_privileges_inner::setFlag(const qint32 &flag) {
    m_flag = flag;
    m_flag_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_flag_Set() const{
    return m_flag_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_flag_Valid() const{
    return m_flag_isValid;
}

bool MDGetSongDetail_200_response_privileges_inner::isPreSell() const {
    return m_pre_sell;
}
void MDGetSongDetail_200_response_privileges_inner::setPreSell(const bool &pre_sell) {
    m_pre_sell = pre_sell;
    m_pre_sell_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_pre_sell_Set() const{
    return m_pre_sell_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_pre_sell_Valid() const{
    return m_pre_sell_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getPlayMaxbr() const {
    return m_play_maxbr;
}
void MDGetSongDetail_200_response_privileges_inner::setPlayMaxbr(const qint32 &play_maxbr) {
    m_play_maxbr = play_maxbr;
    m_play_maxbr_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_play_maxbr_Set() const{
    return m_play_maxbr_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_play_maxbr_Valid() const{
    return m_play_maxbr_isValid;
}

qint32 MDGetSongDetail_200_response_privileges_inner::getDownloadMaxbr() const {
    return m_download_maxbr;
}
void MDGetSongDetail_200_response_privileges_inner::setDownloadMaxbr(const qint32 &download_maxbr) {
    m_download_maxbr = download_maxbr;
    m_download_maxbr_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_download_maxbr_Set() const{
    return m_download_maxbr_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_download_maxbr_Valid() const{
    return m_download_maxbr_isValid;
}

QString MDGetSongDetail_200_response_privileges_inner::getMaxBrLevel() const {
    return m_max_br_level;
}
void MDGetSongDetail_200_response_privileges_inner::setMaxBrLevel(const QString &max_br_level) {
    m_max_br_level = max_br_level;
    m_max_br_level_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_max_br_level_Set() const{
    return m_max_br_level_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_max_br_level_Valid() const{
    return m_max_br_level_isValid;
}

QString MDGetSongDetail_200_response_privileges_inner::getPlayMaxBrLevel() const {
    return m_play_max_br_level;
}
void MDGetSongDetail_200_response_privileges_inner::setPlayMaxBrLevel(const QString &play_max_br_level) {
    m_play_max_br_level = play_max_br_level;
    m_play_max_br_level_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_play_max_br_level_Set() const{
    return m_play_max_br_level_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_play_max_br_level_Valid() const{
    return m_play_max_br_level_isValid;
}

QString MDGetSongDetail_200_response_privileges_inner::getDownloadMaxBrLevel() const {
    return m_download_max_br_level;
}
void MDGetSongDetail_200_response_privileges_inner::setDownloadMaxBrLevel(const QString &download_max_br_level) {
    m_download_max_br_level = download_max_br_level;
    m_download_max_br_level_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_download_max_br_level_Set() const{
    return m_download_max_br_level_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_download_max_br_level_Valid() const{
    return m_download_max_br_level_isValid;
}

QString MDGetSongDetail_200_response_privileges_inner::getPlLevel() const {
    return m_pl_level;
}
void MDGetSongDetail_200_response_privileges_inner::setPlLevel(const QString &pl_level) {
    m_pl_level = pl_level;
    m_pl_level_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_pl_level_Set() const{
    return m_pl_level_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_pl_level_Valid() const{
    return m_pl_level_isValid;
}

QString MDGetSongDetail_200_response_privileges_inner::getDlLevel() const {
    return m_dl_level;
}
void MDGetSongDetail_200_response_privileges_inner::setDlLevel(const QString &dl_level) {
    m_dl_level = dl_level;
    m_dl_level_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_dl_level_Set() const{
    return m_dl_level_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_dl_level_Valid() const{
    return m_dl_level_isValid;
}

QString MDGetSongDetail_200_response_privileges_inner::getFlLevel() const {
    return m_fl_level;
}
void MDGetSongDetail_200_response_privileges_inner::setFlLevel(const QString &fl_level) {
    m_fl_level = fl_level;
    m_fl_level_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_fl_level_Set() const{
    return m_fl_level_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_fl_level_Valid() const{
    return m_fl_level_isValid;
}

MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege MDGetSongDetail_200_response_privileges_inner::getFreeTrialPrivilege() const {
    return m_free_trial_privilege;
}
void MDGetSongDetail_200_response_privileges_inner::setFreeTrialPrivilege(const MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege &free_trial_privilege) {
    m_free_trial_privilege = free_trial_privilege;
    m_free_trial_privilege_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_free_trial_privilege_Set() const{
    return m_free_trial_privilege_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_free_trial_privilege_Valid() const{
    return m_free_trial_privilege_isValid;
}

QList<MDGetArtistSingle_200_response_hotSongs_inner_privilege_chargeInfoList_inner> MDGetSongDetail_200_response_privileges_inner::getChargeInfoList() const {
    return m_charge_info_list;
}
void MDGetSongDetail_200_response_privileges_inner::setChargeInfoList(const QList<MDGetArtistSingle_200_response_hotSongs_inner_privilege_chargeInfoList_inner> &charge_info_list) {
    m_charge_info_list = charge_info_list;
    m_charge_info_list_isSet = true;
}

bool MDGetSongDetail_200_response_privileges_inner::is_charge_info_list_Set() const{
    return m_charge_info_list_isSet;
}

bool MDGetSongDetail_200_response_privileges_inner::is_charge_info_list_Valid() const{
    return m_charge_info_list_isValid;
}

bool MDGetSongDetail_200_response_privileges_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fee_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_payed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_st_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pl_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dl_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cs_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_maxbr_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fl_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_toast_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flag_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pre_sell_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_play_maxbr_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_download_maxbr_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_br_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_play_max_br_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_download_max_br_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pl_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dl_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fl_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_free_trial_privilege.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_charge_info_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool MDGetSongDetail_200_response_privileges_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace MelodixAPI
