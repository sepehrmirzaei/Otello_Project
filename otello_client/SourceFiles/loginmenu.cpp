//
// Created by sepehr007 on 1/30/18.
//
#include <QtWidgets/QApplication>
#include "HeaderFiles/loginmenu.h"

LoginMenu::LoginMenu():QWidget() {
    QRect rec = QApplication::desktop() -> screenGeometry();
    setGeometry(500,300,400,300);

    exit =new QPushButton("EXIT",this);
    login=new QPushButton("Play!", this);
    QDialogButtonBox *buttonarea=new QDialogButtonBox;
    buttonarea -> addButton(exit, QDialogButtonBox::RejectRole);
    buttonarea -> addButton(login, QDialogButtonBox::ActionRole);

    user=new QLineEdit();
    QLabel *userlab = new QLabel("username : ");
    QHBoxLayout *userbox =new QHBoxLayout;
    userbox -> addWidget(userlab);
    userbox -> addWidget(user);

    address=new QLineEdit("localhost");
    QLabel *addlab = new QLabel("server IP : ");
    QHBoxLayout *addressbox =new QHBoxLayout;
    addressbox -> addWidget(addlab);
    addressbox -> addWidget(address);

    port=new QLineEdit("8888");
    QLabel *portlab = new QLabel("server port : ");
    QHBoxLayout *portbox =new QHBoxLayout;
    portbox -> addWidget(portlab);
    portbox -> addWidget(port);

    QHBoxLayout *groupBox1 = new QHBoxLayout();
    QLabel *radiolab = new QLabel("User Vs");
    radio1 = new QRadioButton(tr(" Computer"));
    radio2 = new QRadioButton(tr(" User"));
    groupBox1 -> addWidget(radiolab);
    groupBox1 -> addWidget(radio1);
    groupBox1 -> addWidget(radio2);

    QHBoxLayout *groupBox2 = new QHBoxLayout();
    QLabel *colorlab = new QLabel("Color :");
    white = new QRadioButton(tr(" white"));
    black = new QRadioButton(tr(" black"));
    groupBox2 -> addWidget(colorlab);
    groupBox2 -> addWidget(white);
    groupBox2 -> addWidget(black);

    QVBoxLayout *mainmap=new QVBoxLayout;
    mainmap -> addLayout(userbox);
    mainmap -> addLayout(addressbox);
    mainmap -> addLayout(portbox);
    mainmap -> addLayout(groupBox1);
    mainmap -> addLayout(groupBox2);
    mainmap -> addWidget(buttonarea);
    setLayout(mainmap);

    connect(exit, SIGNAL(clicked()), this, SLOT(close()));

    show();

}