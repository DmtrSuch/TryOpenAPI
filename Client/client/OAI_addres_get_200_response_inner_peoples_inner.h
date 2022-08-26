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

/*
 * OAI_addres_get_200_response_inner_peoples_inner.h
 *
 * 
 */

#ifndef OAI_addres_get_200_response_inner_peoples_inner_H
#define OAI_addres_get_200_response_inner_peoples_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAI_addres_get_200_response_inner_peoples_inner : public OAIObject {
public:
    OAI_addres_get_200_response_inner_peoples_inner();
    OAI_addres_get_200_response_inner_peoples_inner(QString json);
    ~OAI_addres_get_200_response_inner_peoples_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getAge() const;
    void setAge(const qint32 &age);
    bool is_age_Set() const;
    bool is_age_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getSurname() const;
    void setSurname(const QString &surname);
    bool is_surname_Set() const;
    bool is_surname_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 age;
    bool m_age_isSet;
    bool m_age_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString surname;
    bool m_surname_isSet;
    bool m_surname_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAI_addres_get_200_response_inner_peoples_inner)

#endif // OAI_addres_get_200_response_inner_peoples_inner_H
