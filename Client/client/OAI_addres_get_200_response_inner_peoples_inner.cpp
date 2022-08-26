/**
 * TCP API
 * API for TCP server
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAI_addres_get_200_response_inner_peoples_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAI_addres_get_200_response_inner_peoples_inner::OAI_addres_get_200_response_inner_peoples_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_addres_get_200_response_inner_peoples_inner::OAI_addres_get_200_response_inner_peoples_inner() {
    this->initializeModel();
}

OAI_addres_get_200_response_inner_peoples_inner::~OAI_addres_get_200_response_inner_peoples_inner() {}

void OAI_addres_get_200_response_inner_peoples_inner::initializeModel() {

    m_age_isSet = false;
    m_age_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_surname_isSet = false;
    m_surname_isValid = false;
}

void OAI_addres_get_200_response_inner_peoples_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_addres_get_200_response_inner_peoples_inner::fromJsonObject(QJsonObject json) {

    m_age_isValid = ::OpenAPI::fromJsonValue(age, json[QString("age")]);
    m_age_isSet = !json[QString("age")].isNull() && m_age_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_surname_isValid = ::OpenAPI::fromJsonValue(surname, json[QString("surname")]);
    m_surname_isSet = !json[QString("surname")].isNull() && m_surname_isValid;
}

QString OAI_addres_get_200_response_inner_peoples_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_addres_get_200_response_inner_peoples_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_age_isSet) {
        obj.insert(QString("age"), ::OpenAPI::toJsonValue(age));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_surname_isSet) {
        obj.insert(QString("surname"), ::OpenAPI::toJsonValue(surname));
    }
    return obj;
}

qint32 OAI_addres_get_200_response_inner_peoples_inner::getAge() const {
    return age;
}
void OAI_addres_get_200_response_inner_peoples_inner::setAge(const qint32 &age) {
    this->age = age;
    this->m_age_isSet = true;
}

bool OAI_addres_get_200_response_inner_peoples_inner::is_age_Set() const{
    return m_age_isSet;
}

bool OAI_addres_get_200_response_inner_peoples_inner::is_age_Valid() const{
    return m_age_isValid;
}

QString OAI_addres_get_200_response_inner_peoples_inner::getName() const {
    return name;
}
void OAI_addres_get_200_response_inner_peoples_inner::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAI_addres_get_200_response_inner_peoples_inner::is_name_Set() const{
    return m_name_isSet;
}

bool OAI_addres_get_200_response_inner_peoples_inner::is_name_Valid() const{
    return m_name_isValid;
}

QString OAI_addres_get_200_response_inner_peoples_inner::getSurname() const {
    return surname;
}
void OAI_addres_get_200_response_inner_peoples_inner::setSurname(const QString &surname) {
    this->surname = surname;
    this->m_surname_isSet = true;
}

bool OAI_addres_get_200_response_inner_peoples_inner::is_surname_Set() const{
    return m_surname_isSet;
}

bool OAI_addres_get_200_response_inner_peoples_inner::is_surname_Valid() const{
    return m_surname_isValid;
}

bool OAI_addres_get_200_response_inner_peoples_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_age_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_surname_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAI_addres_get_200_response_inner_peoples_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI