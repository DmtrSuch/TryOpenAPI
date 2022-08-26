#ifndef JSONMODELCONTROLLER_H
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>

#define JSONMODELCONTROLLER_H


class jsonmodelpeople
{
public:
    jsonmodelpeople(QJsonObject jObj);
    QJsonObject toJsonObject();
private:
    QString name;
    QString surname;
    qint64 age;
};

class jsonmodeladdress
{
public:
    jsonmodeladdress(QJsonObject jOb);
    QJsonObject toJsonObject();
    QString GetCity();
private:
    QString city;
    QString street;
    QList<jsonmodelpeople> peoples;

};

class JsonController
{
public:
    JsonController();
    QByteArray list();
    bool append(QByteArray json);
    void clear();
    int deleteuser(QString city);
private:
    QList<jsonmodeladdress> items;
};

#endif // JSONMODELCONTROLLER_H
