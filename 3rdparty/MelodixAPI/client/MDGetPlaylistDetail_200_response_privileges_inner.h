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

/*
 * MDGetPlaylistDetail_200_response_privileges_inner.h
 *
 * 
 */

#ifndef MDGetPlaylistDetail_200_response_privileges_inner_H
#define MDGetPlaylistDetail_200_response_privileges_inner_H

#include <QJsonObject>

#include "MDGetArtistSingle_200_response_hotSongs_inner_privilege_chargeInfoList_inner.h"
#include "MDGetPlaylistDetail_200_response_privileges_inner_freeTrialPrivilege.h"
#include <QList>
#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {
class MDGetPlaylistDetail_200_response_privileges_inner_freeTrialPrivilege;
class MDGetArtistSingle_200_response_hotSongs_inner_privilege_chargeInfoList_inner;

class MDGetPlaylistDetail_200_response_privileges_inner : public MDObject {
public:
    MDGetPlaylistDetail_200_response_privileges_inner();
    MDGetPlaylistDetail_200_response_privileges_inner(QString json);
    ~MDGetPlaylistDetail_200_response_privileges_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    qint32 getFee() const;
    void setFee(const qint32 &fee);
    bool is_fee_Set() const;
    bool is_fee_Valid() const;

    qint32 getPayed() const;
    void setPayed(const qint32 &payed);
    bool is_payed_Set() const;
    bool is_payed_Valid() const;

    qint32 getRealPayed() const;
    void setRealPayed(const qint32 &real_payed);
    bool is_real_payed_Set() const;
    bool is_real_payed_Valid() const;

    qint32 getSt() const;
    void setSt(const qint32 &st);
    bool is_st_Set() const;
    bool is_st_Valid() const;

    qint32 getPl() const;
    void setPl(const qint32 &pl);
    bool is_pl_Set() const;
    bool is_pl_Valid() const;

    qint32 getDl() const;
    void setDl(const qint32 &dl);
    bool is_dl_Set() const;
    bool is_dl_Valid() const;

    qint32 getSp() const;
    void setSp(const qint32 &sp);
    bool is_sp_Set() const;
    bool is_sp_Valid() const;

    qint32 getCp() const;
    void setCp(const qint32 &cp);
    bool is_cp_Set() const;
    bool is_cp_Valid() const;

    qint32 getSubp() const;
    void setSubp(const qint32 &subp);
    bool is_subp_Set() const;
    bool is_subp_Valid() const;

    bool isCs() const;
    void setCs(const bool &cs);
    bool is_cs_Set() const;
    bool is_cs_Valid() const;

    qint32 getMaxbr() const;
    void setMaxbr(const qint32 &maxbr);
    bool is_maxbr_Set() const;
    bool is_maxbr_Valid() const;

    qint32 getFl() const;
    void setFl(const qint32 &fl);
    bool is_fl_Set() const;
    bool is_fl_Valid() const;

    bool isToast() const;
    void setToast(const bool &toast);
    bool is_toast_Set() const;
    bool is_toast_Valid() const;

    qint32 getFlag() const;
    void setFlag(const qint32 &flag);
    bool is_flag_Set() const;
    bool is_flag_Valid() const;

    bool isPaidBigBang() const;
    void setPaidBigBang(const bool &paid_big_bang);
    bool is_paid_big_bang_Set() const;
    bool is_paid_big_bang_Valid() const;

    bool isPreSell() const;
    void setPreSell(const bool &pre_sell);
    bool is_pre_sell_Set() const;
    bool is_pre_sell_Valid() const;

    qint32 getPlayMaxbr() const;
    void setPlayMaxbr(const qint32 &play_maxbr);
    bool is_play_maxbr_Set() const;
    bool is_play_maxbr_Valid() const;

    qint32 getDownloadMaxbr() const;
    void setDownloadMaxbr(const qint32 &download_maxbr);
    bool is_download_maxbr_Set() const;
    bool is_download_maxbr_Valid() const;

    QString getMaxBrLevel() const;
    void setMaxBrLevel(const QString &max_br_level);
    bool is_max_br_level_Set() const;
    bool is_max_br_level_Valid() const;

    QString getPlayMaxBrLevel() const;
    void setPlayMaxBrLevel(const QString &play_max_br_level);
    bool is_play_max_br_level_Set() const;
    bool is_play_max_br_level_Valid() const;

    QString getDownloadMaxBrLevel() const;
    void setDownloadMaxBrLevel(const QString &download_max_br_level);
    bool is_download_max_br_level_Set() const;
    bool is_download_max_br_level_Valid() const;

    QString getPlLevel() const;
    void setPlLevel(const QString &pl_level);
    bool is_pl_level_Set() const;
    bool is_pl_level_Valid() const;

    QString getDlLevel() const;
    void setDlLevel(const QString &dl_level);
    bool is_dl_level_Set() const;
    bool is_dl_level_Valid() const;

    QString getFlLevel() const;
    void setFlLevel(const QString &fl_level);
    bool is_fl_level_Set() const;
    bool is_fl_level_Valid() const;

    MDGetPlaylistDetail_200_response_privileges_inner_freeTrialPrivilege getFreeTrialPrivilege() const;
    void setFreeTrialPrivilege(const MDGetPlaylistDetail_200_response_privileges_inner_freeTrialPrivilege &free_trial_privilege);
    bool is_free_trial_privilege_Set() const;
    bool is_free_trial_privilege_Valid() const;

    qint32 getRightSource() const;
    void setRightSource(const qint32 &right_source);
    bool is_right_source_Set() const;
    bool is_right_source_Valid() const;

    QList<MDGetArtistSingle_200_response_hotSongs_inner_privilege_chargeInfoList_inner> getChargeInfoList() const;
    void setChargeInfoList(const QList<MDGetArtistSingle_200_response_hotSongs_inner_privilege_chargeInfoList_inner> &charge_info_list);
    bool is_charge_info_list_Set() const;
    bool is_charge_info_list_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    qint32 m_fee;
    bool m_fee_isSet;
    bool m_fee_isValid;

    qint32 m_payed;
    bool m_payed_isSet;
    bool m_payed_isValid;

    qint32 m_real_payed;
    bool m_real_payed_isSet;
    bool m_real_payed_isValid;

    qint32 m_st;
    bool m_st_isSet;
    bool m_st_isValid;

    qint32 m_pl;
    bool m_pl_isSet;
    bool m_pl_isValid;

    qint32 m_dl;
    bool m_dl_isSet;
    bool m_dl_isValid;

    qint32 m_sp;
    bool m_sp_isSet;
    bool m_sp_isValid;

    qint32 m_cp;
    bool m_cp_isSet;
    bool m_cp_isValid;

    qint32 m_subp;
    bool m_subp_isSet;
    bool m_subp_isValid;

    bool m_cs;
    bool m_cs_isSet;
    bool m_cs_isValid;

    qint32 m_maxbr;
    bool m_maxbr_isSet;
    bool m_maxbr_isValid;

    qint32 m_fl;
    bool m_fl_isSet;
    bool m_fl_isValid;

    bool m_toast;
    bool m_toast_isSet;
    bool m_toast_isValid;

    qint32 m_flag;
    bool m_flag_isSet;
    bool m_flag_isValid;

    bool m_paid_big_bang;
    bool m_paid_big_bang_isSet;
    bool m_paid_big_bang_isValid;

    bool m_pre_sell;
    bool m_pre_sell_isSet;
    bool m_pre_sell_isValid;

    qint32 m_play_maxbr;
    bool m_play_maxbr_isSet;
    bool m_play_maxbr_isValid;

    qint32 m_download_maxbr;
    bool m_download_maxbr_isSet;
    bool m_download_maxbr_isValid;

    QString m_max_br_level;
    bool m_max_br_level_isSet;
    bool m_max_br_level_isValid;

    QString m_play_max_br_level;
    bool m_play_max_br_level_isSet;
    bool m_play_max_br_level_isValid;

    QString m_download_max_br_level;
    bool m_download_max_br_level_isSet;
    bool m_download_max_br_level_isValid;

    QString m_pl_level;
    bool m_pl_level_isSet;
    bool m_pl_level_isValid;

    QString m_dl_level;
    bool m_dl_level_isSet;
    bool m_dl_level_isValid;

    QString m_fl_level;
    bool m_fl_level_isSet;
    bool m_fl_level_isValid;

    MDGetPlaylistDetail_200_response_privileges_inner_freeTrialPrivilege m_free_trial_privilege;
    bool m_free_trial_privilege_isSet;
    bool m_free_trial_privilege_isValid;

    qint32 m_right_source;
    bool m_right_source_isSet;
    bool m_right_source_isValid;

    QList<MDGetArtistSingle_200_response_hotSongs_inner_privilege_chargeInfoList_inner> m_charge_info_list;
    bool m_charge_info_list_isSet;
    bool m_charge_info_list_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetPlaylistDetail_200_response_privileges_inner)

#endif // MDGetPlaylistDetail_200_response_privileges_inner_H
