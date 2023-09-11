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
 * MDGetArtistDetail_200_response_data_user.h
 *
 * 
 */

#ifndef MDGetArtistDetail_200_response_data_user_H
#define MDGetArtistDetail_200_response_data_user_H

#include <QJsonObject>

#include "MDGetArtistDetail_200_response_data_user_avatarDetail.h"
#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {
class MDGetArtistDetail_200_response_data_user_avatarDetail;

class MDGetArtistDetail_200_response_data_user : public MDObject {
public:
    MDGetArtistDetail_200_response_data_user();
    MDGetArtistDetail_200_response_data_user(QString json);
    ~MDGetArtistDetail_200_response_data_user() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getBackgroundUrl() const;
    void setBackgroundUrl(const QString &background_url);
    bool is_background_url_Set() const;
    bool is_background_url_Valid() const;

    qint32 getBirthday() const;
    void setBirthday(const qint32 &birthday);
    bool is_birthday_Set() const;
    bool is_birthday_Valid() const;

    QString getDetailDescription() const;
    void setDetailDescription(const QString &detail_description);
    bool is_detail_description_Set() const;
    bool is_detail_description_Valid() const;

    bool isAuthenticated() const;
    void setAuthenticated(const bool &authenticated);
    bool is_authenticated_Set() const;
    bool is_authenticated_Valid() const;

    qint32 getGender() const;
    void setGender(const qint32 &gender);
    bool is_gender_Set() const;
    bool is_gender_Valid() const;

    qint32 getCity() const;
    void setCity(const qint32 &city);
    bool is_city_Set() const;
    bool is_city_Valid() const;

    QString getSignature() const;
    void setSignature(const QString &signature);
    bool is_signature_Set() const;
    bool is_signature_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getShortUserName() const;
    void setShortUserName(const QString &short_user_name);
    bool is_short_user_name_Set() const;
    bool is_short_user_name_Valid() const;

    qint32 getAccountStatus() const;
    void setAccountStatus(const qint32 &account_status);
    bool is_account_status_Set() const;
    bool is_account_status_Valid() const;

    qint32 getLocationStatus() const;
    void setLocationStatus(const qint32 &location_status);
    bool is_location_status_Set() const;
    bool is_location_status_Valid() const;

    qint32 getAvatarImgId() const;
    void setAvatarImgId(const qint32 &avatar_img_id);
    bool is_avatar_img_id_Set() const;
    bool is_avatar_img_id_Valid() const;

    bool isDefaultAvatar() const;
    void setDefaultAvatar(const bool &default_avatar);
    bool is_default_avatar_Set() const;
    bool is_default_avatar_Valid() const;

    qint32 getProvince() const;
    void setProvince(const qint32 &province);
    bool is_province_Set() const;
    bool is_province_Valid() const;

    QString getNickname() const;
    void setNickname(const QString &nickname);
    bool is_nickname_Set() const;
    bool is_nickname_Valid() const;

    qint32 getDjStatus() const;
    void setDjStatus(const qint32 &dj_status);
    bool is_dj_status_Set() const;
    bool is_dj_status_Valid() const;

    QString getAvatarUrl() const;
    void setAvatarUrl(const QString &avatar_url);
    bool is_avatar_url_Set() const;
    bool is_avatar_url_Valid() const;

    qint32 getAccountType() const;
    void setAccountType(const qint32 &account_type);
    bool is_account_type_Set() const;
    bool is_account_type_Valid() const;

    qint32 getAuthStatus() const;
    void setAuthStatus(const qint32 &auth_status);
    bool is_auth_status_Set() const;
    bool is_auth_status_Valid() const;

    qint32 getVipType() const;
    void setVipType(const qint32 &vip_type);
    bool is_vip_type_Set() const;
    bool is_vip_type_Valid() const;

    QString getUserName() const;
    void setUserName(const QString &user_name);
    bool is_user_name_Set() const;
    bool is_user_name_Valid() const;

    bool isFollowed() const;
    void setFollowed(const bool &followed);
    bool is_followed_Set() const;
    bool is_followed_Valid() const;

    qint32 getUserId() const;
    void setUserId(const qint32 &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    QString getLastLoginIp() const;
    void setLastLoginIp(const QString &last_login_ip);
    bool is_last_login_ip_Set() const;
    bool is_last_login_ip_Valid() const;

    qint32 getLastLoginTime() const;
    void setLastLoginTime(const qint32 &last_login_time);
    bool is_last_login_time_Set() const;
    bool is_last_login_time_Valid() const;

    qint32 getAuthenticationTypes() const;
    void setAuthenticationTypes(const qint32 &authentication_types);
    bool is_authentication_types_Set() const;
    bool is_authentication_types_Valid() const;

    bool isMutual() const;
    void setMutual(const bool &mutual);
    bool is_mutual_Set() const;
    bool is_mutual_Valid() const;

    qint32 getCreateTime() const;
    void setCreateTime(const qint32 &create_time);
    bool is_create_time_Set() const;
    bool is_create_time_Valid() const;

    bool isAnchor() const;
    void setAnchor(const bool &anchor);
    bool is_anchor_Set() const;
    bool is_anchor_Valid() const;

    qint32 getAuthority() const;
    void setAuthority(const qint32 &authority);
    bool is_authority_Set() const;
    bool is_authority_Valid() const;

    qint32 getBackgroundImgId() const;
    void setBackgroundImgId(const qint32 &background_img_id);
    bool is_background_img_id_Set() const;
    bool is_background_img_id_Valid() const;

    qint32 getUserType() const;
    void setUserType(const qint32 &user_type);
    bool is_user_type_Set() const;
    bool is_user_type_Valid() const;

    MDGetArtistDetail_200_response_data_user_avatarDetail getAvatarDetail() const;
    void setAvatarDetail(const MDGetArtistDetail_200_response_data_user_avatarDetail &avatar_detail);
    bool is_avatar_detail_Set() const;
    bool is_avatar_detail_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_background_url;
    bool m_background_url_isSet;
    bool m_background_url_isValid;

    qint32 m_birthday;
    bool m_birthday_isSet;
    bool m_birthday_isValid;

    QString m_detail_description;
    bool m_detail_description_isSet;
    bool m_detail_description_isValid;

    bool m_authenticated;
    bool m_authenticated_isSet;
    bool m_authenticated_isValid;

    qint32 m_gender;
    bool m_gender_isSet;
    bool m_gender_isValid;

    qint32 m_city;
    bool m_city_isSet;
    bool m_city_isValid;

    QString m_signature;
    bool m_signature_isSet;
    bool m_signature_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_short_user_name;
    bool m_short_user_name_isSet;
    bool m_short_user_name_isValid;

    qint32 m_account_status;
    bool m_account_status_isSet;
    bool m_account_status_isValid;

    qint32 m_location_status;
    bool m_location_status_isSet;
    bool m_location_status_isValid;

    qint32 m_avatar_img_id;
    bool m_avatar_img_id_isSet;
    bool m_avatar_img_id_isValid;

    bool m_default_avatar;
    bool m_default_avatar_isSet;
    bool m_default_avatar_isValid;

    qint32 m_province;
    bool m_province_isSet;
    bool m_province_isValid;

    QString m_nickname;
    bool m_nickname_isSet;
    bool m_nickname_isValid;

    qint32 m_dj_status;
    bool m_dj_status_isSet;
    bool m_dj_status_isValid;

    QString m_avatar_url;
    bool m_avatar_url_isSet;
    bool m_avatar_url_isValid;

    qint32 m_account_type;
    bool m_account_type_isSet;
    bool m_account_type_isValid;

    qint32 m_auth_status;
    bool m_auth_status_isSet;
    bool m_auth_status_isValid;

    qint32 m_vip_type;
    bool m_vip_type_isSet;
    bool m_vip_type_isValid;

    QString m_user_name;
    bool m_user_name_isSet;
    bool m_user_name_isValid;

    bool m_followed;
    bool m_followed_isSet;
    bool m_followed_isValid;

    qint32 m_user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;

    QString m_last_login_ip;
    bool m_last_login_ip_isSet;
    bool m_last_login_ip_isValid;

    qint32 m_last_login_time;
    bool m_last_login_time_isSet;
    bool m_last_login_time_isValid;

    qint32 m_authentication_types;
    bool m_authentication_types_isSet;
    bool m_authentication_types_isValid;

    bool m_mutual;
    bool m_mutual_isSet;
    bool m_mutual_isValid;

    qint32 m_create_time;
    bool m_create_time_isSet;
    bool m_create_time_isValid;

    bool m_anchor;
    bool m_anchor_isSet;
    bool m_anchor_isValid;

    qint32 m_authority;
    bool m_authority_isSet;
    bool m_authority_isValid;

    qint32 m_background_img_id;
    bool m_background_img_id_isSet;
    bool m_background_img_id_isValid;

    qint32 m_user_type;
    bool m_user_type_isSet;
    bool m_user_type_isValid;

    MDGetArtistDetail_200_response_data_user_avatarDetail m_avatar_detail;
    bool m_avatar_detail_isSet;
    bool m_avatar_detail_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetArtistDetail_200_response_data_user)

#endif // MDGetArtistDetail_200_response_data_user_H
