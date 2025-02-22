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
 * MDGetRecommendedNewSongs_200_response_result_inner_song.h
 *
 * 
 */

#ifndef MDGetRecommendedNewSongs_200_response_result_inner_song_H
#define MDGetRecommendedNewSongs_200_response_result_inner_song_H

#include <QJsonObject>

#include "MDGetRecommendedNewSongs_200_response_result_inner_song_album.h"
#include "MDGetRecommendedNewSongs_200_response_result_inner_song_artists_inner.h"
#include <QList>
#include <QString>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {
class MDGetRecommendedNewSongs_200_response_result_inner_song_artists_inner;
class MDGetRecommendedNewSongs_200_response_result_inner_song_album;

class MDGetRecommendedNewSongs_200_response_result_inner_song : public MDObject {
public:
    MDGetRecommendedNewSongs_200_response_result_inner_song();
    MDGetRecommendedNewSongs_200_response_result_inner_song(QString json);
    ~MDGetRecommendedNewSongs_200_response_result_inner_song() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QList<MDGetRecommendedNewSongs_200_response_result_inner_song_artists_inner> getArtists() const;
    void setArtists(const QList<MDGetRecommendedNewSongs_200_response_result_inner_song_artists_inner> &artists);
    bool is_artists_Set() const;
    bool is_artists_Valid() const;

    MDGetRecommendedNewSongs_200_response_result_inner_song_album getAlbum() const;
    void setAlbum(const MDGetRecommendedNewSongs_200_response_result_inner_song_album &album);
    bool is_album_Set() const;
    bool is_album_Valid() const;

    qint32 getDuration() const;
    void setDuration(const qint32 &duration);
    bool is_duration_Set() const;
    bool is_duration_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QList<MDGetRecommendedNewSongs_200_response_result_inner_song_artists_inner> m_artists;
    bool m_artists_isSet;
    bool m_artists_isValid;

    MDGetRecommendedNewSongs_200_response_result_inner_song_album m_album;
    bool m_album_isSet;
    bool m_album_isValid;

    qint32 m_duration;
    bool m_duration_isSet;
    bool m_duration_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetRecommendedNewSongs_200_response_result_inner_song)

#endif // MDGetRecommendedNewSongs_200_response_result_inner_song_H
