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
 * MDGetArtistSingle_200_response_songs_inner_h.h
 *
 * 
 */

#ifndef MDGetArtistSingle_200_response_songs_inner_h_H
#define MDGetArtistSingle_200_response_songs_inner_h_H

#include <QJsonObject>


#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetArtistSingle_200_response_songs_inner_h : public MDObject {
public:
    MDGetArtistSingle_200_response_songs_inner_h();
    MDGetArtistSingle_200_response_songs_inner_h(QString json);
    ~MDGetArtistSingle_200_response_songs_inner_h() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getBr() const;
    void setBr(const qint32 &br);
    bool is_br_Set() const;
    bool is_br_Valid() const;

    qint32 getFid() const;
    void setFid(const qint32 &fid);
    bool is_fid_Set() const;
    bool is_fid_Valid() const;

    qint32 getSize() const;
    void setSize(const qint32 &size);
    bool is_size_Set() const;
    bool is_size_Valid() const;

    qint32 getVd() const;
    void setVd(const qint32 &vd);
    bool is_vd_Set() const;
    bool is_vd_Valid() const;

    qint32 getSr() const;
    void setSr(const qint32 &sr);
    bool is_sr_Set() const;
    bool is_sr_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_br;
    bool m_br_isSet;
    bool m_br_isValid;

    qint32 m_fid;
    bool m_fid_isSet;
    bool m_fid_isValid;

    qint32 m_size;
    bool m_size_isSet;
    bool m_size_isValid;

    qint32 m_vd;
    bool m_vd_isSet;
    bool m_vd_isValid;

    qint32 m_sr;
    bool m_sr_isSet;
    bool m_sr_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetArtistSingle_200_response_songs_inner_h)

#endif // MDGetArtistSingle_200_response_songs_inner_h_H
