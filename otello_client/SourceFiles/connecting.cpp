//
// Created by sepehr007 on 2/2/18.
//

#include "../HeaderFiles/connecting.h"
#include <QHostAddress>
#include <QTcpSocket>
#include <iostream>

using namespace std;
Connection::Connection(QHostAddress *serveraddress, quint16 serverport)
{
    socket= new QTcpSocket;
    socket -> connectToHost(*serveraddress, serverport);
    connect(socket, SIGNAL(readyRead()), this, SLOT(receivemessage()));
}
void Connection::receivemessage()
{
    QString message=socket -> readAll();
    emit newrecievemessage(message);
}
void Connection::sendmessage(QString message)
{
    QByteArray data=&message.toStdString()[0];
    socket-> write(data);
}