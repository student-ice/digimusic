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
 * MDGetArtistSingle_200_response.h
 *
 * 
 */

#ifndef MDGetArtistSingle_200_response_H
#define MDGetArtistSingle_200_response_H

#include <QJsonObject>

#include "MDGetArtistSingle_200_response_artist.h"
#include "MDGetArtistSingle_200_response_hotSongs_inner.h"
#include <QList>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {
class MDGetArtistSingle_200_response_artist;
class MDGetArtistSingle_200_response_hotSongs_inner;

class MDGetArtistSingle_200_response : public MDObject {
public:
    MDGetArtistSingle_200_response();
    MDGetArtistSingle_200_response(QString json);
    ~MDGetArtistSingle_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    MDGetArtistSingle_200_response_artist getArtist() const;
    void setArtist(const MDGetArtistSingle_200_response_artist &artist);
    bool is_artist_Set() const;
    bool is_artist_Valid() const;

    QList<MDGetArtistSingle_200_response_hotSongs_inner> getHotSongs() const;
    void setHotSongs(const QList<MDGetArtistSingle_200_response_hotSongs_inner> &hot_songs);
    bool is_hot_songs_Set() const;
    bool is_hot_songs_Valid() const;

    bool isMore() const;
    void setMore(const bool &more);
    bool is_more_Set() const;
    bool is_more_Valid() const;

    qint32 getCode() const;
    void setCode(const qint32 &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    MDGetArtistSingle_200_response_artist m_artist;
    bool m_artist_isSet;
    bool m_artist_isValid;

    QList<MDGetArtistSingle_200_response_hotSongs_inner> m_hot_songs;
    bool m_hot_songs_isSet;
    bool m_hot_songs_isValid;

    bool m_more;
    bool m_more_isSet;
    bool m_more_isValid;

    qint32 m_code;
    bool m_code_isSet;
    bool m_code_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetArtistSingle_200_response)

#endif // MDGetArtistSingle_200_response_H
