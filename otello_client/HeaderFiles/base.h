//
// Created by sepehr007 on 2/2/18.
//

#ifndef OTELLO_CLIENT_BASE_H
#define OTELLO_CLIENT_BASE_H

#include "loginmenu.h"
#include "otelloboard.h"
#include <QtCore/QObject>

class Base: public QObject{
    Q_OBJECT
public:
    Base();

public slots:
    void NewBoard(QString,QString,QString);
private:
    LoginMenu *login;
    OtelloBoard *board;

};


#endif //OTELLO_CLIENT_BASE_H
