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
 * MDGetArtistDetail_200_response_data_vipRights_rightsInfoDetailDtoList_inner.h
 *
 * 
 */

#ifndef MDGetArtistDetail_200_response_data_vipRights_rightsInfoDetailDtoList_inner_H
#define MDGetArtistDetail_200_response_data_vipRights_rightsInfoDetailDtoList_inner_H

#include <QJsonObject>


#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetArtistDetail_200_response_data_vipRights_rightsInfoDetailDtoList_inner : public MDObject {
public:
    MDGetArtistDetail_200_response_data_vipRights_rightsInfoDetailDtoList_inner();
    MDGetArtistDetail_200_response_data_vipRights_rightsInfoDetailDtoList_inner(QString json);
    ~MDGetArtistDetail_200_response_data_vipRights_rightsInfoDetailDtoList_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getVipCode() const;
    void setVipCode(const qint32 &vip_code);
    bool is_vip_code_Set() const;
    bool is_vip_code_Valid() const;

    qint32 getExpireTime() const;
    void setExpireTime(const qint32 &expire_time);
    bool is_expire_time_Set() const;
    bool is_expire_time_Valid() const;

    qint32 getVipLevel() const;
    void setVipLevel(const qint32 &vip_level);
    bool is_vip_level_Set() const;
    bool is_vip_level_Valid() const;

    bool isSignIap() const;
    void setSignIap(const bool &sign_iap);
    bool is_sign_iap_Set() const;
    bool is_sign_iap_Valid() const;

    bool isSignDeduct() const;
    void setSignDeduct(const bool &sign_deduct);
    bool is_sign_deduct_Set() const;
    bool is_sign_deduct_Valid() const;

    bool isSignIapDeduct() const;
    void setSignIapDeduct(const bool &sign_iap_deduct);
    bool is_sign_iap_deduct_Set() const;
    bool is_sign_iap_deduct_Valid() const;

    bool isSign() const;
    void setSign(const bool &sign);
    bool is_sign_Set() const;
    bool is_sign_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_vip_code;
    bool m_vip_code_isSet;
    bool m_vip_code_isValid;

    qint32 m_expire_time;
    bool m_expire_time_isSet;
    bool m_expire_time_isValid;

    qint32 m_vip_level;
    bool m_vip_level_isSet;
    bool m_vip_level_isValid;

    bool m_sign_iap;
    bool m_sign_iap_isSet;
    bool m_sign_iap_isValid;

    bool m_sign_deduct;
    bool m_sign_deduct_isSet;
    bool m_sign_deduct_isValid;

    bool m_sign_iap_deduct;
    bool m_sign_iap_deduct_isSet;
    bool m_sign_iap_deduct_isValid;

    bool m_sign;
    bool m_sign_isSet;
    bool m_sign_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetArtistDetail_200_response_data_vipRights_rightsInfoDetailDtoList_inner)

#endif // MDGetArtistDetail_200_response_data_vipRights_rightsInfoDetailDtoList_inner_H
