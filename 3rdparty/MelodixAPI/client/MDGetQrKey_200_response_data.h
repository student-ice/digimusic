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
 * MDGetQrKey_200_response_data.h
 *
 * 
 */

#ifndef MDGetQrKey_200_response_data_H
#define MDGetQrKey_200_response_data_H

#include <QJsonObject>

#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetQrKey_200_response_data : public MDObject {
public:
    MDGetQrKey_200_response_data();
    MDGetQrKey_200_response_data(QString json);
    ~MDGetQrKey_200_response_data() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCode() const;
    void setCode(const qint32 &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    QString getUnikey() const;
    void setUnikey(const QString &unikey);
    bool is_unikey_Set() const;
    bool is_unikey_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_code;
    bool m_code_isSet;
    bool m_code_isValid;

    QString m_unikey;
    bool m_unikey_isSet;
    bool m_unikey_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetQrKey_200_response_data)

#endif // MDGetQrKey_200_response_data_H
