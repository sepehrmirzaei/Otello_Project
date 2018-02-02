//
// Created by sepehr007 on 1/30/18.
//
#include <QtWidgets/QApplication>
#include "HeaderFiles/loginmenu.h"

LoginMenu::LoginMenu():QWidget() {
    QRect rec = QApplication::desktop() -> screenGeometry();
    setGeometry(500,300,400,300);

    QGridLayout *grid=new QGridLayout;
    grid->addWidget(InfoLine(),0,0);
    grid->addWidget(GameMode(),1,0);
    grid->addWidget(setColor(),2,0);
    grid->addWidget(Button(),3,0);
    setLayout(grid);

    connect(exit, SIGNAL(clicked()), this, SLOT(close()));
    connect(login, SIGNAL(clicked()), this, SLOT(requestlogin()));

    show();

}
QGroupBox * LoginMenu::InfoLine(){
    QGroupBox *mode=new QGroupBox();
    user=new QLineEdit();
    QLabel *userlab = new QLabel("username :   ");
    QHBoxLayout *userbox =new QHBoxLayout;
    userbox -> addWidget(userlab);
    userbox -> addWidget(user);

    address=new QLineEdit("localhost");
    QLabel *addlab = new QLabel("server IP :     " );
    QHBoxLayout *addressbox =new QHBoxLayout;
    addressbox -> addWidget(addlab);
    addressbox -> addWidget(address);

    port=new QLineEdit("8888");
    QLabel *portlab = new QLabel("server port :  ");
    QHBoxLayout *portbox =new QHBoxLayout;
    portbox -> addWidget(portlab);
    portbox -> addWidget(port);

    QVBoxLayout *mainmap=new QVBoxLayout;
    mainmap -> addLayout(userbox);
    mainmap -> addLayout(addressbox);
    mainmap -> addLayout(portbox);

    mode->setLayout(mainmap);
    return mode;

}

QGroupBox * LoginMenu::GameMode(){
    QGroupBox *mode=new QGroupBox();
    QHBoxLayout *groupBox1 = new QHBoxLayout();
    QLabel *radiolab = new QLabel("User Vs :");
    radio1 = new QRadioButton(tr(" Computer"));
    radio2 = new QRadioButton(tr(" User"));
    groupBox1 -> addWidget(radiolab);
    groupBox1 -> addWidget(radio1);
    groupBox1 -> addWidget(radio2);

    mode->setLayout(groupBox1);
    return mode;

}

QGroupBox * LoginMenu::setColor(){
    QGroupBox *color=new QGroupBox();
    QHBoxLayout *groupBox2 = new QHBoxLayout();
    QLabel *colorlab = new QLabel("Color :");
    white = new QRadioButton(tr(" white"));
    black = new QRadioButton(tr(" black"));
    groupBox2 -> addWidget(colorlab);
    groupBox2 -> addWidget(white);
    groupBox2 -> addWidget(black);

    color->setLayout(groupBox2);
    return color;

}
QGroupBox * LoginMenu::Button(){
    QGroupBox *button=new QGroupBox();
    QHBoxLayout *groupBox4 = new QHBoxLayout();
    exit =new QPushButton("EXIT",this);
    login=new QPushButton("Play!", this);
    QDialogButtonBox *buttonarea=new QDialogButtonBox;
    buttonarea -> addButton(exit, QDialogButtonBox::RejectRole);
    buttonarea -> addButton(login, QDialogButtonBox::ActionRole);
    groupBox4 -> addWidget(buttonarea);
    button->setLayout(groupBox4);
    return button;
}
void LoginMenu::requestlogin()
{
    QString serveraddress=address -> text()=="localhost" ? "127.0.0.1" : address -> text();
    //this -> hide();
    UsrName=user->text();
    if(white->isChecked()) {
        UsrColor="white";
    }
    else if(black->isChecked()){
        UsrColor="black";
    }
    if(radio1->isChecked()){
        PlayMode="cpu";
    }
    else if(radio2->isChecked()){
        PlayMode="client";
    }
    emit information(UsrName,UsrColor,PlayMode);
}