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

#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

#include "MDHttpFileElement.h"

namespace MelodixAPI {

void MDHttpFileElement::setMimeType(const QString &mime) {
    mime_type = mime;
}

void MDHttpFileElement::setFileName(const QString &name) {
    local_filename = name;
}

void MDHttpFileElement::setVariableName(const QString &name) {
    variable_name = name;
}

void MDHttpFileElement::setRequestFileName(const QString &name) {
    request_filename = name;
}

bool MDHttpFileElement::isSet() const {
    return !local_filename.isEmpty() || !request_filename.isEmpty();
}

QString MDHttpFileElement::asJson() const {
    QFile file(local_filename);
    QByteArray bArray;
    bool result = false;
    if (file.exists()) {
        result = file.open(QIODevice::ReadOnly);
        bArray = file.readAll();
        file.close();
    }
    if (!result) {
        qDebug() << "Error opening file " << local_filename;
    }
    return QString(bArray);
}

QJsonValue MDHttpFileElement::asJsonValue() const {
    QFile file(local_filename);
    QByteArray bArray;
    bool result = false;
    if (file.exists()) {
        result = file.open(QIODevice::ReadOnly);
        bArray = file.readAll();
        file.close();
    }
    if (!result) {
        qDebug() << "Error opening file " << local_filename;
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    return QJsonDocument::fromJson(bArray.data()).object();
#else
    return QJsonDocument::fromBinaryData(bArray.data()).object();
#endif
}

bool MDHttpFileElement::fromStringValue(const QString &instr) {
    QFile file(local_filename);
    bool result = false;
    if (file.exists()) {
        file.remove();
    }
    result = file.open(QIODevice::WriteOnly);
    file.write(instr.toUtf8());
    file.close();
    if (!result) {
        qDebug() << "Error creating file " << local_filename;
    }
    return result;
}

bool MDHttpFileElement::fromJsonValue(const QJsonValue &jval) {
    QFile file(local_filename);
    bool result = false;
    if (file.exists()) {
        file.remove();
    }
    result = file.open(QIODevice::WriteOnly);
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    file.write(QJsonDocument(jval.toObject()).toJson());
#else
    file.write(QJsonDocument(jval.toObject()).toBinaryData());
#endif
    file.close();
    if (!result) {
        qDebug() << "Error creating file " << local_filename;
    }
    return result;
}

QByteArray MDHttpFileElement::asByteArray() const {
    QFile file(local_filename);
    QByteArray bArray;
    bool result = false;
    if (file.exists()) {
        result = file.open(QIODevice::ReadOnly);
        bArray = file.readAll();
        file.close();
    }
    if (!result) {
        qDebug() << "Error opening file " << local_filename;
    }
    return bArray;
}

bool MDHttpFileElement::fromByteArray(const QByteArray &bytes) {
    QFile file(local_filename);
    bool result = false;
    if (file.exists()) {
        file.remove();
    }
    result = file.open(QIODevice::WriteOnly);
    file.write(bytes);
    file.close();
    if (!result) {
        qDebug() << "Error creating file " << local_filename;
    }
    return result;
}

bool MDHttpFileElement::saveToFile(const QString &varName, const QString &localFName, const QString &reqFname, const QString &mime, const QByteArray &bytes) {
    setMimeType(mime);
    setFileName(localFName);
    setVariableName(varName);
    setRequestFileName(reqFname);
    return fromByteArray(bytes);
}

QByteArray MDHttpFileElement::loadFromFile(const QString &varName, const QString &localFName, const QString &reqFname, const QString &mime) {
    setMimeType(mime);
    setFileName(localFName);
    setVariableName(varName);
    setRequestFileName(reqFname);
    return asByteArray();
}

} // namespace MelodixAPI
