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
 * MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner.h
 *
 * 
 */

#ifndef MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner_H
#define MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner_H

#include <QJsonObject>

#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner : public MDObject {
public:
    MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner();
    MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner(QString json);
    ~MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getExpertIdentiyId() const;
    void setExpertIdentiyId(const qint32 &expert_identiy_id);
    bool is_expert_identiy_id_Set() const;
    bool is_expert_identiy_id_Valid() const;

    QString getExpertIdentiyName() const;
    void setExpertIdentiyName(const QString &expert_identiy_name);
    bool is_expert_identiy_name_Set() const;
    bool is_expert_identiy_name_Valid() const;

    qint32 getExpertIdentiyCount() const;
    void setExpertIdentiyCount(const qint32 &expert_identiy_count);
    bool is_expert_identiy_count_Set() const;
    bool is_expert_identiy_count_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_expert_identiy_id;
    bool m_expert_identiy_id_isSet;
    bool m_expert_identiy_id_isValid;

    QString m_expert_identiy_name;
    bool m_expert_identiy_name_isSet;
    bool m_expert_identiy_name_isValid;

    qint32 m_expert_identiy_count;
    bool m_expert_identiy_count_isSet;
    bool m_expert_identiy_count_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner)

#endif // MDGetArtistDetail_200_response_data_secondaryExpertIdentiy_inner_H
