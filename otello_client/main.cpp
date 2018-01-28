#include <iostream>
#include <QApplication>
#include <QWidget>
int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    QWidget *a=new QWidget;
    a->show();
    return app.exec();
}