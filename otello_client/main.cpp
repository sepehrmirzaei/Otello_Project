#include <iostream>
#include <QApplication>
#include <QWidget>
#include "HeaderFiles/otelloboard.h"
#include "HeaderFiles/loginmenu.h"
int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    OtelloBoard *sample=new OtelloBoard;
    sample->show();

    LoginMenu *samlpe2=new LoginMenu;

    return app.exec();
}