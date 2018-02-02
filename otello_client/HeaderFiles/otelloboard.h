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
#include "judgement.h"
#include "AI.h"
class OtelloBoard : public QWidget{
Q_OBJECT
public:
    OtelloBoard(QString usrname,QString usrcolor,QString playmode);
    void SetCoin(int i,int j,QString type);
    void SetOffers();
    void OpeningBoard();
    void Moving();
    void EatCoin(int i,int j,int clr);
    bool FinishCheck();

public slots:
    void mouseClicking(int i,int j);
private:
    int mMap[8][8];
    int nomove;
    QTableWidget *mGameTable;
    void SetMapFirstValue();
    //Judgement *judge;
    QString UsrColor;
    QString TurnColor;
    QString PlayMode;       // cpu or client
};

#endif //OTELLOPROJECT_OTELLOBOARD_H
