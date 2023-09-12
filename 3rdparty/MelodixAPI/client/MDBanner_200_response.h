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
 * MDBanner_200_response.h
 *
 * 
 */

#ifndef MDBanner_200_response_H
#define MDBanner_200_response_H

#include <QJsonObject>

#include "MDBanner_200_response_banners_inner.h"
#include <QList>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {
class MDBanner_200_response_banners_inner;

class MDBanner_200_response : public MDObject {
public:
    MDBanner_200_response();
    MDBanner_200_response(QString json);
    ~MDBanner_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<MDBanner_200_response_banners_inner> getBanners() const;
    void setBanners(const QList<MDBanner_200_response_banners_inner> &banners);
    bool is_banners_Set() const;
    bool is_banners_Valid() const;

    qint32 getCode() const;
    void setCode(const qint32 &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<MDBanner_200_response_banners_inner> m_banners;
    bool m_banners_isSet;
    bool m_banners_isValid;

    qint32 m_code;
    bool m_code_isSet;
    bool m_code_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDBanner_200_response)

#endif // MDBanner_200_response_H
