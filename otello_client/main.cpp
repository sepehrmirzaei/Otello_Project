#include <iostream>
#include <QApplication>
#include <QWidget>
#include "HeaderFiles/otelloboard.h"
int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    OtelloBoard *sample=new OtelloBoard;
    sample->show();
    return app.exec();
}