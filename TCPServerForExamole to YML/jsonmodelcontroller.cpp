#include "jsonmodelcontroller.h"
#include <QVariant>

#define NAME "name"
#define SURNAME "surname"
#define AGE "age"
#define CITY "city"
#define STREET "street"
#define PEOPLE "peoples"

JsonController::JsonController()
{

}

int JsonController::deleteuser(QString city)
{
    int i = 0;
    int j = 0;
    foreach (jsonmodeladdress adr, items){
        if (adr.GetCity() == city){
            items.removeAt(i);
            j++;
        } else{
        i++;
        }
        }
    return j;
}

void JsonController::clear()
{
    items.clear();
}

QByteArray JsonController::list()
{
    QJsonArray jAdr;
    foreach (jsonmodeladdress adr, items){
        jAdr.append(adr.toJsonObject());
    }
    return QJsonDocument(jAdr).toJson();
}

bool JsonController::append(QByteArray json)
{
    QJsonObject jAddr = QJsonDocument::fromJson(json).object();
    if (jAddr.value(CITY).toString() == "" ||
        jAddr.value(STREET).toString() == "" ||
        jAddr.value(PEOPLE).toArray().size() == 0
        )
    {
        return false;
    }
    else {
        items.append(jsonmodeladdress(jAddr));
        return true;
    }
}

jsonmodelpeople::jsonmodelpeople(QJsonObject jObj)
{
    name = jObj.value(NAME).toString();
    surname = jObj.value(SURNAME).toString();
    age = jObj.value(AGE).toInt();
}

QJsonObject jsonmodelpeople::toJsonObject()
{
    QJsonObject jObj;
    jObj.insert(NAME, QJsonValue::fromVariant(name));
    jObj.insert(SURNAME, QJsonValue::fromVariant(surname));
    jObj.insert(AGE, QJsonValue::fromVariant(age));
    return jObj;
}

jsonmodeladdress::jsonmodeladdress(QJsonObject jObj)
{
    city = jObj.value(CITY).toString();
    street = jObj.value(STREET).toString();
    QJsonArray jPeople = jObj.value(PEOPLE).toArray();
    foreach (QJsonValue jval, jPeople ){
        QJsonObject jPpl = jval.toObject();
        peoples.append(jsonmodelpeople(jPpl));


    }
}

QString jsonmodeladdress::GetCity(){return city;}

QJsonObject jsonmodeladdress::toJsonObject()
{
    QJsonObject jObj;
    jObj.insert(CITY, QJsonValue::fromVariant(city));
    jObj.insert(STREET, QJsonValue::fromVariant(street));
    QJsonArray jPeople;
    foreach (jsonmodelpeople ppl, peoples){
        jPeople.append(ppl.toJsonObject());
    }
    jObj.insert(PEOPLE, jPeople);
    return jObj;
}
