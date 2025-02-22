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
 * MDGetPlaylistTrackAll_200_response_privileges_inner_chargeInfoList_inner.h
 *
 * 
 */

#ifndef MDGetPlaylistTrackAll_200_response_privileges_inner_chargeInfoList_inner_H
#define MDGetPlaylistTrackAll_200_response_privileges_inner_chargeInfoList_inner_H

#include <QJsonObject>


#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetPlaylistTrackAll_200_response_privileges_inner_chargeInfoList_inner : public MDObject {
public:
    MDGetPlaylistTrackAll_200_response_privileges_inner_chargeInfoList_inner();
    MDGetPlaylistTrackAll_200_response_privileges_inner_chargeInfoList_inner(QString json);
    ~MDGetPlaylistTrackAll_200_response_privileges_inner_chargeInfoList_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getRate() const;
    void setRate(const qint32 &rate);
    bool is_rate_Set() const;
    bool is_rate_Valid() const;

    qint32 getChargeType() const;
    void setChargeType(const qint32 &charge_type);
    bool is_charge_type_Set() const;
    bool is_charge_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_rate;
    bool m_rate_isSet;
    bool m_rate_isValid;

    qint32 m_charge_type;
    bool m_charge_type_isSet;
    bool m_charge_type_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetPlaylistTrackAll_200_response_privileges_inner_chargeInfoList_inner)

#endif // MDGetPlaylistTrackAll_200_response_privileges_inner_chargeInfoList_inner_H
