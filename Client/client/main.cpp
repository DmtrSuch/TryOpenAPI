#include <QCoreApplication>
#include "OAIDefaultApi.h"
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    OpenAPI::OAI_addunit_put_request Mes;
    OpenAPI::OAI_addres_get_200_response_inner_peoples_inner P;
    OpenAPI::OAIDefaultApi API;
    P.setAge(5);
    P.setName("temp");
    P.setSurname("temp");
    Mes.setCity("Spb0");
    QList <OpenAPI::OAI_addres_get_200_response_inner_peoples_inner> ppls;
    ppls.append(P);
    Mes.setPeoples(ppls);
    Mes.setStreet("temp");

    API.addunitPut(Mes);
    API.addresGet();
    return a.exec();
}
