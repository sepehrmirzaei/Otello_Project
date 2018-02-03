//
// Created by sepehr007 on 2/2/18.
//

#include "HeaderFiles/base.h"

Base::Base() {
    login=new LoginMenu();
    connect(login,SIGNAL(information(QString,QString,QString,QHostAddress *,quint16)),this,SLOT(NewBoard(QString,QString,QString,QHostAddress *,quint16)));


}
void Base::NewBoard(QString usrname,QString clr, QString mode,QHostAddress * IP,quint16 port) {
    board=new OtelloBoard(usrname,clr,mode,IP,port);
    board->show();
}