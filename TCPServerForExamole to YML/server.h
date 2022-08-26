#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QDateTime>
#include <QVector>
#include "jsonmodelcontroller.h"


class server : public QTcpServer
{
    Q_OBJECT
public:
    server();
    int port = 5555;
    QTcpSocket *socket;

private:
    QVector <QTcpSocket *> Sockets;
    JsonController controller;

public slots:
     void incomingConnection(qintptr socketDescriptor);
     void slotReadyRead();
     void slotDisconnected();
};

#endif // SERVER_H
