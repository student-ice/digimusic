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
 * MDGetHotComment_200_response_hotComments_inner_user.h
 *
 * 
 */

#ifndef MDGetHotComment_200_response_hotComments_inner_user_H
#define MDGetHotComment_200_response_hotComments_inner_user_H

#include <QJsonObject>

#include "MDGetHotComment_200_response_hotComments_inner_user_vipRights.h"
#include "MDGetTopPlaylist_200_response_playlists_inner_creator_avatarDetail.h"
#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {
class MDGetTopPlaylist_200_response_playlists_inner_creator_avatarDetail;
class MDGetHotComment_200_response_hotComments_inner_user_vipRights;

class MDGetHotComment_200_response_hotComments_inner_user : public MDObject {
public:
    MDGetHotComment_200_response_hotComments_inner_user();
    MDGetHotComment_200_response_hotComments_inner_user(QString json);
    ~MDGetHotComment_200_response_hotComments_inner_user() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getAnonym() const;
    void setAnonym(const qint32 &anonym);
    bool is_anonym_Set() const;
    bool is_anonym_Valid() const;

    MDGetTopPlaylist_200_response_playlists_inner_creator_avatarDetail getAvatarDetail() const;
    void setAvatarDetail(const MDGetTopPlaylist_200_response_playlists_inner_creator_avatarDetail &avatar_detail);
    bool is_avatar_detail_Set() const;
    bool is_avatar_detail_Valid() const;

    qint32 getUserType() const;
    void setUserType(const qint32 &user_type);
    bool is_user_type_Set() const;
    bool is_user_type_Valid() const;

    QString getAvatarUrl() const;
    void setAvatarUrl(const QString &avatar_url);
    bool is_avatar_url_Set() const;
    bool is_avatar_url_Valid() const;

    bool isFollowed() const;
    void setFollowed(const bool &followed);
    bool is_followed_Set() const;
    bool is_followed_Valid() const;

    bool isMutual() const;
    void setMutual(const bool &mutual);
    bool is_mutual_Set() const;
    bool is_mutual_Valid() const;

    MDGetHotComment_200_response_hotComments_inner_user_vipRights getVipRights() const;
    void setVipRights(const MDGetHotComment_200_response_hotComments_inner_user_vipRights &vip_rights);
    bool is_vip_rights_Set() const;
    bool is_vip_rights_Valid() const;

    QString getNickname() const;
    void setNickname(const QString &nickname);
    bool is_nickname_Set() const;
    bool is_nickname_Valid() const;

    qint32 getAuthStatus() const;
    void setAuthStatus(const qint32 &auth_status);
    bool is_auth_status_Set() const;
    bool is_auth_status_Valid() const;

    qint32 getVipType() const;
    void setVipType(const qint32 &vip_type);
    bool is_vip_type_Set() const;
    bool is_vip_type_Valid() const;

    qint32 getUserId() const;
    void setUserId(const qint32 &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_anonym;
    bool m_anonym_isSet;
    bool m_anonym_isValid;

    MDGetTopPlaylist_200_response_playlists_inner_creator_avatarDetail m_avatar_detail;
    bool m_avatar_detail_isSet;
    bool m_avatar_detail_isValid;

    qint32 m_user_type;
    bool m_user_type_isSet;
    bool m_user_type_isValid;

    QString m_avatar_url;
    bool m_avatar_url_isSet;
    bool m_avatar_url_isValid;

    bool m_followed;
    bool m_followed_isSet;
    bool m_followed_isValid;

    bool m_mutual;
    bool m_mutual_isSet;
    bool m_mutual_isValid;

    MDGetHotComment_200_response_hotComments_inner_user_vipRights m_vip_rights;
    bool m_vip_rights_isSet;
    bool m_vip_rights_isValid;

    QString m_nickname;
    bool m_nickname_isSet;
    bool m_nickname_isValid;

    qint32 m_auth_status;
    bool m_auth_status_isSet;
    bool m_auth_status_isValid;

    qint32 m_vip_type;
    bool m_vip_type_isSet;
    bool m_vip_type_isValid;

    qint32 m_user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetHotComment_200_response_hotComments_inner_user)

#endif // MDGetHotComment_200_response_hotComments_inner_user_H
