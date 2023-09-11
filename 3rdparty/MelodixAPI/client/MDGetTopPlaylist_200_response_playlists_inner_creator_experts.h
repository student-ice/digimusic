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
 * MDGetTopPlaylist_200_response_playlists_inner_creator_experts.h
 *
 * 
 */

#ifndef MDGetTopPlaylist_200_response_playlists_inner_creator_experts_H
#define MDGetTopPlaylist_200_response_playlists_inner_creator_experts_H

#include <QJsonObject>

#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetTopPlaylist_200_response_playlists_inner_creator_experts : public MDObject {
public:
    MDGetTopPlaylist_200_response_playlists_inner_creator_experts();
    MDGetTopPlaylist_200_response_playlists_inner_creator_experts(QString json);
    ~MDGetTopPlaylist_200_response_playlists_inner_creator_experts() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getR1() const;
    void setR1(const QString &r_1);
    bool is_r_1_Set() const;
    bool is_r_1_Valid() const;

    QString getR2() const;
    void setR2(const QString &r_2);
    bool is_r_2_Set() const;
    bool is_r_2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_r_1;
    bool m_r_1_isSet;
    bool m_r_1_isValid;

    QString m_r_2;
    bool m_r_2_isSet;
    bool m_r_2_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetTopPlaylist_200_response_playlists_inner_creator_experts)

#endif // MDGetTopPlaylist_200_response_playlists_inner_creator_experts_H
