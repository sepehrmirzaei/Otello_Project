//
// Created by sepehr007 on 2/2/18.
//

#ifndef OTELLO_CLIENT_CONNECTING_H
#define OTELLO_CLIENT_CONNECTING_H
#include <QObject>
#include <QHostAddress>
class QTcpSocket;
class Connection :public QObject
{
Q_OBJECT
public:
    Connection(QHostAddress * =new QHostAddress("127.0.0.1"), quint16 =4444);

private:
    QTcpSocket *socket;
    QHostAddress *serveraddress;
    quint16 serverport;
public slots:
    void receivemessage();
    void sendmessage(QString);
signals:
    void newrecievemessage(QString);
};
#endif //OTELLO_CLIENT_CONNECTING_H
