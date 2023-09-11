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
 * MDGetPlaylistDetail_200_response_playlist_tracks_inner_al.h
 *
 * 
 */

#ifndef MDGetPlaylistDetail_200_response_playlist_tracks_inner_al_H
#define MDGetPlaylistDetail_200_response_playlist_tracks_inner_al_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {

class MDGetPlaylistDetail_200_response_playlist_tracks_inner_al : public MDObject {
public:
    MDGetPlaylistDetail_200_response_playlist_tracks_inner_al();
    MDGetPlaylistDetail_200_response_playlist_tracks_inner_al(QString json);
    ~MDGetPlaylistDetail_200_response_playlist_tracks_inner_al() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getPicUrl() const;
    void setPicUrl(const QString &pic_url);
    bool is_pic_url_Set() const;
    bool is_pic_url_Valid() const;

    QList<QString> getTns() const;
    void setTns(const QList<QString> &tns);
    bool is_tns_Set() const;
    bool is_tns_Valid() const;

    QString getPicStr() const;
    void setPicStr(const QString &pic_str);
    bool is_pic_str_Set() const;
    bool is_pic_str_Valid() const;

    qint32 getPic() const;
    void setPic(const qint32 &pic);
    bool is_pic_Set() const;
    bool is_pic_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_pic_url;
    bool m_pic_url_isSet;
    bool m_pic_url_isValid;

    QList<QString> m_tns;
    bool m_tns_isSet;
    bool m_tns_isValid;

    QString m_pic_str;
    bool m_pic_str_isSet;
    bool m_pic_str_isValid;

    qint32 m_pic;
    bool m_pic_isSet;
    bool m_pic_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetPlaylistDetail_200_response_playlist_tracks_inner_al)

#endif // MDGetPlaylistDetail_200_response_playlist_tracks_inner_al_H
