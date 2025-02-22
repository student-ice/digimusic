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
 * MDGetLyric_200_response.h
 *
 * 
 */

#ifndef MDGetLyric_200_response_H
#define MDGetLyric_200_response_H

#include <QJsonObject>

#include "MDGetLyric_200_response_lrc.h"

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {
class MDGetLyric_200_response_lrc;

class MDGetLyric_200_response : public MDObject {
public:
    MDGetLyric_200_response();
    MDGetLyric_200_response(QString json);
    ~MDGetLyric_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isSgc() const;
    void setSgc(const bool &sgc);
    bool is_sgc_Set() const;
    bool is_sgc_Valid() const;

    bool isSfy() const;
    void setSfy(const bool &sfy);
    bool is_sfy_Set() const;
    bool is_sfy_Valid() const;

    bool isQfy() const;
    void setQfy(const bool &qfy);
    bool is_qfy_Set() const;
    bool is_qfy_Valid() const;

    MDGetLyric_200_response_lrc getLrc() const;
    void setLrc(const MDGetLyric_200_response_lrc &lrc);
    bool is_lrc_Set() const;
    bool is_lrc_Valid() const;

    MDGetLyric_200_response_lrc getKlyric() const;
    void setKlyric(const MDGetLyric_200_response_lrc &klyric);
    bool is_klyric_Set() const;
    bool is_klyric_Valid() const;

    MDGetLyric_200_response_lrc getTlyric() const;
    void setTlyric(const MDGetLyric_200_response_lrc &tlyric);
    bool is_tlyric_Set() const;
    bool is_tlyric_Valid() const;

    MDGetLyric_200_response_lrc getRomalrc() const;
    void setRomalrc(const MDGetLyric_200_response_lrc &romalrc);
    bool is_romalrc_Set() const;
    bool is_romalrc_Valid() const;

    qint32 getCode() const;
    void setCode(const qint32 &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_sgc;
    bool m_sgc_isSet;
    bool m_sgc_isValid;

    bool m_sfy;
    bool m_sfy_isSet;
    bool m_sfy_isValid;

    bool m_qfy;
    bool m_qfy_isSet;
    bool m_qfy_isValid;

    MDGetLyric_200_response_lrc m_lrc;
    bool m_lrc_isSet;
    bool m_lrc_isValid;

    MDGetLyric_200_response_lrc m_klyric;
    bool m_klyric_isSet;
    bool m_klyric_isValid;

    MDGetLyric_200_response_lrc m_tlyric;
    bool m_tlyric_isSet;
    bool m_tlyric_isValid;

    MDGetLyric_200_response_lrc m_romalrc;
    bool m_romalrc_isSet;
    bool m_romalrc_isValid;

    qint32 m_code;
    bool m_code_isSet;
    bool m_code_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetLyric_200_response)

#endif // MDGetLyric_200_response_H
