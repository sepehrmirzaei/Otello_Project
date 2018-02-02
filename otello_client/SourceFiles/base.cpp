//
// Created by sepehr007 on 2/2/18.
//

#include "HeaderFiles/base.h"

Base::Base() {
    login=new LoginMenu();
    connect(login,SIGNAL(information(QString,QString,QString)),this,SLOT(NewBoard(QString,QString,QString)));


}
void Base::NewBoard(QString usrname,QString clr, QString mode) {
    board=new OtelloBoard(usrname,clr,mode);
    board->show();

}