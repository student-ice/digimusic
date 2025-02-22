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

/*
 * MDGetAccountInfo_200_response_account.h
 *
 * 
 */

#ifndef MDGetAccountInfo_200_response_account_H
#define MDGetAccountInfo_200_response_account_H

#include <QJsonObject>

#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetAccountInfo_200_response_account : public MDObject {
public:
    MDGetAccountInfo_200_response_account();
    MDGetAccountInfo_200_response_account(QString json);
    ~MDGetAccountInfo_200_response_account() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getUserName() const;
    void setUserName(const QString &user_name);
    bool is_user_name_Set() const;
    bool is_user_name_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getStatus() const;
    void setStatus(const qint32 &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    qint32 getWhitelistAuthority() const;
    void setWhitelistAuthority(const qint32 &whitelist_authority);
    bool is_whitelist_authority_Set() const;
    bool is_whitelist_authority_Valid() const;

    qint32 getCreateTime() const;
    void setCreateTime(const qint32 &create_time);
    bool is_create_time_Set() const;
    bool is_create_time_Valid() const;

    qint32 getTokenVersion() const;
    void setTokenVersion(const qint32 &token_version);
    bool is_token_version_Set() const;
    bool is_token_version_Valid() const;

    qint32 getBan() const;
    void setBan(const qint32 &ban);
    bool is_ban_Set() const;
    bool is_ban_Valid() const;

    qint32 getBaoyueVersion() const;
    void setBaoyueVersion(const qint32 &baoyue_version);
    bool is_baoyue_version_Set() const;
    bool is_baoyue_version_Valid() const;

    qint32 getDonateVersion() const;
    void setDonateVersion(const qint32 &donate_version);
    bool is_donate_version_Set() const;
    bool is_donate_version_Valid() const;

    qint32 getVipType() const;
    void setVipType(const qint32 &vip_type);
    bool is_vip_type_Set() const;
    bool is_vip_type_Valid() const;

    bool isAnonimousUser() const;
    void setAnonimousUser(const bool &anonimous_user);
    bool is_anonimous_user_Set() const;
    bool is_anonimous_user_Valid() const;

    bool isPaidFee() const;
    void setPaidFee(const bool &paid_fee);
    bool is_paid_fee_Set() const;
    bool is_paid_fee_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_user_name;
    bool m_user_name_isSet;
    bool m_user_name_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    qint32 m_whitelist_authority;
    bool m_whitelist_authority_isSet;
    bool m_whitelist_authority_isValid;

    qint32 m_create_time;
    bool m_create_time_isSet;
    bool m_create_time_isValid;

    qint32 m_token_version;
    bool m_token_version_isSet;
    bool m_token_version_isValid;

    qint32 m_ban;
    bool m_ban_isSet;
    bool m_ban_isValid;

    qint32 m_baoyue_version;
    bool m_baoyue_version_isSet;
    bool m_baoyue_version_isValid;

    qint32 m_donate_version;
    bool m_donate_version_isSet;
    bool m_donate_version_isValid;

    qint32 m_vip_type;
    bool m_vip_type_isSet;
    bool m_vip_type_isValid;

    bool m_anonimous_user;
    bool m_anonimous_user_isSet;
    bool m_anonimous_user_isValid;

    bool m_paid_fee;
    bool m_paid_fee_isSet;
    bool m_paid_fee_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetAccountInfo_200_response_account)

#endif // MDGetAccountInfo_200_response_account_H
