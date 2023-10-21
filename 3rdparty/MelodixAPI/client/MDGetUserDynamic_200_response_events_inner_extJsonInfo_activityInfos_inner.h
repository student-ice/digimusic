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
 * MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner.h
 *
 * 
 */

#ifndef MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner_H
#define MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner_H

#include <QJsonObject>

#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner : public MDObject {
public:
    MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner();
    MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner(QString json);
    ~MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getSubType() const;
    void setSubType(const qint32 &sub_type);
    bool is_sub_type_Set() const;
    bool is_sub_type_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getIcon() const;
    void setIcon(const QString &icon);
    bool is_icon_Set() const;
    bool is_icon_Valid() const;

    QString getTarget() const;
    void setTarget(const QString &target);
    bool is_target_Set() const;
    bool is_target_Valid() const;

    QString getExt() const;
    void setExt(const QString &ext);
    bool is_ext_Set() const;
    bool is_ext_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_sub_type;
    bool m_sub_type_isSet;
    bool m_sub_type_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_icon;
    bool m_icon_isSet;
    bool m_icon_isValid;

    QString m_target;
    bool m_target_isSet;
    bool m_target_isValid;

    QString m_ext;
    bool m_ext_isSet;
    bool m_ext_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner)

#endif // MDGetUserDynamic_200_response_events_inner_extJsonInfo_activityInfos_inner_H
