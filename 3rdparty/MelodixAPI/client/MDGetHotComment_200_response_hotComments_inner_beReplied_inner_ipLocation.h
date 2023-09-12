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
 * MDGetHotComment_200_response_hotComments_inner_beReplied_inner_ipLocation.h
 *
 * 
 */

#ifndef MDGetHotComment_200_response_hotComments_inner_beReplied_inner_ipLocation_H
#define MDGetHotComment_200_response_hotComments_inner_beReplied_inner_ipLocation_H

#include <QJsonObject>

#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetHotComment_200_response_hotComments_inner_beReplied_inner_ipLocation : public MDObject {
public:
    MDGetHotComment_200_response_hotComments_inner_beReplied_inner_ipLocation();
    MDGetHotComment_200_response_hotComments_inner_beReplied_inner_ipLocation(QString json);
    ~MDGetHotComment_200_response_hotComments_inner_beReplied_inner_ipLocation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getLocation() const;
    void setLocation(const QString &location);
    bool is_location_Set() const;
    bool is_location_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_location;
    bool m_location_isSet;
    bool m_location_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetHotComment_200_response_hotComments_inner_beReplied_inner_ipLocation)

#endif // MDGetHotComment_200_response_hotComments_inner_beReplied_inner_ipLocation_H
