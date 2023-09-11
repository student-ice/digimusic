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
 * MDGetSongUrl_200_response.h
 *
 * 
 */

#ifndef MDGetSongUrl_200_response_H
#define MDGetSongUrl_200_response_H

#include <QJsonObject>

#include "MDGetSongUrl_200_response_data_inner.h"
#include <QList>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {
class MDGetSongUrl_200_response_data_inner;

class MDGetSongUrl_200_response : public MDObject {
public:
    MDGetSongUrl_200_response();
    MDGetSongUrl_200_response(QString json);
    ~MDGetSongUrl_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCode() const;
    void setCode(const qint32 &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    QList<MDGetSongUrl_200_response_data_inner> getData() const;
    void setData(const QList<MDGetSongUrl_200_response_data_inner> &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_code;
    bool m_code_isSet;
    bool m_code_isValid;

    QList<MDGetSongUrl_200_response_data_inner> m_data;
    bool m_data_isSet;
    bool m_data_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetSongUrl_200_response)

#endif // MDGetSongUrl_200_response_H
