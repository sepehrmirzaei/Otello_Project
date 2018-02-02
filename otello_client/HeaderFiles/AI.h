//
// Created by sepehr007 on 2/2/18.
//

#ifndef OTELLO_CLIENT_AI_H
#define OTELLO_CLIENT_AI_H

#include <QtCore/QString>
#include "judgement.h"
class AI{
public:
    AI(int [][8],QString color);
    void FindMove(int [][8],int clr,int);
    int ValueOfMove(int i,int j,int [][8],int color);
    int GetX();
    int GetY();

private:
    int x,y,offerx,offery;
    int ptr,finalptr;
    int ScoreTable[8][8]={{7,6,6,6,6,6,6,7},
                          {6,5,4,4,4,4,5,6},
                          {6,4,3,2,2,3,4,6},
                          {6,4,2,1,1,2,4,6},
                          {6,4,2,1,1,2,4,6},
                          {6,4,3,2,2,3,4,6},
                          {6,5,4,4,4,4,5,6},
                          {7,6,6,6,6,6,6,7}};

};


#endif //OTELLO_CLIENT_AI_H
