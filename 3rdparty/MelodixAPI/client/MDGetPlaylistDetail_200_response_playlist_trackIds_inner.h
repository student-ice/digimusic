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
 * MDGetPlaylistDetail_200_response_playlist_trackIds_inner.h
 *
 * 
 */

#ifndef MDGetPlaylistDetail_200_response_playlist_trackIds_inner_H
#define MDGetPlaylistDetail_200_response_playlist_trackIds_inner_H

#include <QJsonObject>

#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetPlaylistDetail_200_response_playlist_trackIds_inner : public MDObject {
public:
    MDGetPlaylistDetail_200_response_playlist_trackIds_inner();
    MDGetPlaylistDetail_200_response_playlist_trackIds_inner(QString json);
    ~MDGetPlaylistDetail_200_response_playlist_trackIds_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    qint32 getV() const;
    void setV(const qint32 &v);
    bool is_v_Set() const;
    bool is_v_Valid() const;

    qint32 getT() const;
    void setT(const qint32 &t);
    bool is_t_Set() const;
    bool is_t_Valid() const;

    qint32 getAt() const;
    void setAt(const qint32 &at);
    bool is_at_Set() const;
    bool is_at_Valid() const;

    qint32 getUid() const;
    void setUid(const qint32 &uid);
    bool is_uid_Set() const;
    bool is_uid_Valid() const;

    QString getRcmdReason() const;
    void setRcmdReason(const QString &rcmd_reason);
    bool is_rcmd_reason_Set() const;
    bool is_rcmd_reason_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    qint32 m_v;
    bool m_v_isSet;
    bool m_v_isValid;

    qint32 m_t;
    bool m_t_isSet;
    bool m_t_isValid;

    qint32 m_at;
    bool m_at_isSet;
    bool m_at_isValid;

    qint32 m_uid;
    bool m_uid_isSet;
    bool m_uid_isValid;

    QString m_rcmd_reason;
    bool m_rcmd_reason_isSet;
    bool m_rcmd_reason_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetPlaylistDetail_200_response_playlist_trackIds_inner)

#endif // MDGetPlaylistDetail_200_response_playlist_trackIds_inner_H
