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
 * MDGetLikeSongId_200_response.h
 *
 * 
 */

#ifndef MDGetLikeSongId_200_response_H
#define MDGetLikeSongId_200_response_H

#include <QJsonObject>

#include <QList>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetLikeSongId_200_response : public MDObject {
public:
    MDGetLikeSongId_200_response();
    MDGetLikeSongId_200_response(QString json);
    ~MDGetLikeSongId_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getIds() const;
    void setIds(const QList<qint32> &ids);
    bool is_ids_Set() const;
    bool is_ids_Valid() const;

    qint32 getCheckPoint() const;
    void setCheckPoint(const qint32 &check_point);
    bool is_check_point_Set() const;
    bool is_check_point_Valid() const;

    qint32 getCode() const;
    void setCode(const qint32 &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_ids;
    bool m_ids_isSet;
    bool m_ids_isValid;

    qint32 m_check_point;
    bool m_check_point_isSet;
    bool m_check_point_isValid;

    qint32 m_code;
    bool m_code_isSet;
    bool m_code_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetLikeSongId_200_response)

#endif // MDGetLikeSongId_200_response_H
