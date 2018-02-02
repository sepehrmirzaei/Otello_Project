#include <iostream>
#include <QApplication>
#include <QWidget>
//#include "HeaderFiles/otelloboard.h"
//#include "HeaderFiles/loginmenu.h"
#include "HeaderFiles/base.h"
int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    Base *sample=new Base;



    return app.exec();
}