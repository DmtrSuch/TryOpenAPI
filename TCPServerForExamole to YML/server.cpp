#include "server.h"
#include <QDataStream>
#include <QStringList>

server::server()
{
    if(this->listen(QHostAddress::Any, port))
    {
        qDebug() << "started";
    }
    else
    {
        qDebug() << "error";
    }
}

void server::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket;
    socket -> setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead, this, &server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &server::slotDisconnected);

    Sockets.push_back(socket);

    qDebug() << "client connected" << socketDescriptor;
}

void server::slotReadyRead()
{
    socket = qobject_cast<QTcpSocket*>(sender());
    QString request = socket ->readAll();
    QString response;
    QString data;
    qDebug() << request;
    if (request.startsWith("GET /addres")){
        QString response = "HTTP/1.1 200 OK\r\n\r\n";
        socket -> write(response.toLatin1());
        socket -> write(controller.list());
    }
    else if (request.startsWith("PUT /addunit")){
        data = request.section("\r\n\r\n", 1, 1);
        bool answ = controller.append(data.toUtf8());
        if (answ == true){
            response = "HTTP/1.1 201 OK\r\n\r\n";
            socket -> write(response.toLatin1());
        }
        else{
            response = "HTTP/1.1 412 \r\n\r\n";
            socket -> write(response.toLatin1());
        }
    }
    else if (request.startsWith("DELETE /deleteuserforname/")){
        auto a = request.splitRef("/");
        QString city = a[2].toString().splitRef(" ")[0].toString();
        int temp = controller.deleteuser(city);
        if (temp != 0){
            response = "HTTP/1.1 200 OK\r\n\r\n";
            socket -> write(response.toLatin1());
        }
        else{
            response = "HTTP/1.1 404 "+city+"\r\n\r\n";
            socket -> write(response.toLatin1());
        }
        qDebug() << response;
    }
    else if (request.startsWith("DELETE /alldel")){
        controller.clear();
        response = "HTTP/1.1 200 OK\r\n\r\n";
        socket -> write(response.toLatin1());
    }


    socket -> disconnectFromHost();
}

void server::slotDisconnected()
{
    socket = qobject_cast<QTcpSocket*>(sender());
    socket -> close();
    socket -> deleteLater();
}
