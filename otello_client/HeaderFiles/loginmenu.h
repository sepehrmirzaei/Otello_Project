//
// Created by sepehr007 on 1/30/18.
//

#ifndef OTELLO_CLIENT_LOGINMENU_H
#define OTELLO_CLIENT_LOGINMENU_H

#include <QWidget>
#include <QDesktopWidget>
#include <QDialogButtonBox>
#include <QHostAddress>
#include <QLineEdit>
#include <QSpinBox>
#include <QCheckBox>
#include <QLabel>
#include <QHBoxLayout>
#include <QPushButton>
#include <QGroupBox>
#include <QRadioButton>

class LoginMenu: public QWidget{
Q_OBJECT
public:
    LoginMenu();
private:
    QPushButton *login, *exit;
    QLineEdit *user, *address, *port;
    QCheckBox *chekbox;
    QRadioButton *radio1,*radio2,*white,*black;
};

#endif //OTELLO_CLIENT_LOGINMENU_H
