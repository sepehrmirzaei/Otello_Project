//
// Created by sepehr007 on 1/29/18.
//
#ifndef OTELLOPROJECT_OTELLOBOARD_H
#define OTELLOPROJECT_OTELLOBOARD_H

#include <iostream>
#include <QWidget>
#include <QTableWidget>
#include <QHBoxLayout>
#include <QHeaderView>
class OtelloBoard : public QWidget{
Q_OBJECT
public:
    OtelloBoard();
    void SetCoin(int i,int j,QString type);
    void OpeningBoard();

public slots:
    void mouseClicking(int i,int j);
private:
    int mMap[8][8];
    QTableWidget *mGameTable;
    void SetMapFirstValue();
};

#endif //OTELLOPROJECT_OTELLOBOARD_H
