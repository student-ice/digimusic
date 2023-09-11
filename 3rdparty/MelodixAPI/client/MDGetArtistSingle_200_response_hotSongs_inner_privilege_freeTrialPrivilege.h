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
 * MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege.h
 *
 * 
 */

#ifndef MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege_H
#define MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege_H

#include <QJsonObject>


#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege : public MDObject {
public:
    MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege();
    MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege(QString json);
    ~MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isResConsumable() const;
    void setResConsumable(const bool &res_consumable);
    bool is_res_consumable_Set() const;
    bool is_res_consumable_Valid() const;

    bool isUserConsumable() const;
    void setUserConsumable(const bool &user_consumable);
    bool is_user_consumable_Set() const;
    bool is_user_consumable_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_res_consumable;
    bool m_res_consumable_isSet;
    bool m_res_consumable_isValid;

    bool m_user_consumable;
    bool m_user_consumable_isSet;
    bool m_user_consumable_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege)

#endif // MDGetArtistSingle_200_response_hotSongs_inner_privilege_freeTrialPrivilege_H
