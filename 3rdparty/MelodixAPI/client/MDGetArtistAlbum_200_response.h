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
 * MDGetArtistAlbum_200_response.h
 *
 * 
 */

#ifndef MDGetArtistAlbum_200_response_H
#define MDGetArtistAlbum_200_response_H

#include <QJsonObject>

#include "MDGetArtistAlbum_200_response_artist.h"
#include "MDGetArtistAlbum_200_response_hotAlbums_inner.h"
#include <QList>

#include "MDEnum.h"
#include "MDObject.h"

namespace MelodixAPI {
class MDGetArtistAlbum_200_response_artist;
class MDGetArtistAlbum_200_response_hotAlbums_inner;

class MDGetArtistAlbum_200_response : public MDObject {
public:
    MDGetArtistAlbum_200_response();
    MDGetArtistAlbum_200_response(QString json);
    ~MDGetArtistAlbum_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    MDGetArtistAlbum_200_response_artist getArtist() const;
    void setArtist(const MDGetArtistAlbum_200_response_artist &artist);
    bool is_artist_Set() const;
    bool is_artist_Valid() const;

    QList<MDGetArtistAlbum_200_response_hotAlbums_inner> getHotAlbums() const;
    void setHotAlbums(const QList<MDGetArtistAlbum_200_response_hotAlbums_inner> &hot_albums);
    bool is_hot_albums_Set() const;
    bool is_hot_albums_Valid() const;

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

    MDGetArtistAlbum_200_response_artist m_artist;
    bool m_artist_isSet;
    bool m_artist_isValid;

    QList<MDGetArtistAlbum_200_response_hotAlbums_inner> m_hot_albums;
    bool m_hot_albums_isSet;
    bool m_hot_albums_isValid;

    bool m_more;
    bool m_more_isSet;
    bool m_more_isValid;

    qint32 m_code;
    bool m_code_isSet;
    bool m_code_isValid;
};

} // namespace MelodixAPI

Q_DECLARE_METATYPE(MelodixAPI::MDGetArtistAlbum_200_response)

#endif // MDGetArtistAlbum_200_response_H
