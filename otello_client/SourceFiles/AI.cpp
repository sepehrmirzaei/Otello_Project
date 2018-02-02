//
// Created by sepehr007 on 2/2/18.
//

#include <QtCore/QPoint>
#include "HeaderFiles/AI.h"

AI::AI(int map[8][8], QString color){
    finalptr=-10000;
    ptr=0;
    if(color=="white")
        FindMove(map,1,0);
    else
        FindMove(map,2,0);

}

void AI::FindMove(int map[8][8] ,int clr,int counter){
    if(counter<2) {
        for (int z = 0; z < 8; z++)
            for (int k = 0; k < 8; k++)
                if (map[z][k] == 3) {
                    map[z][k] = 0;
                }
        if (clr == 1) {
            Judgement *judge = new Judgement("white");
            bool law = judge->AbilityToMove(map);
        } else {
            Judgement *judge = new Judgement("black");
            bool law = judge->AbilityToMove(map);
        }
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++) {
                if (map[i][j] == 3) {
                    int cpy[8][8];
                    for (int z = 0; z < 8; z++)
                        for (int k = 0; k < 8; k++) {
                            cpy[z][k] = map[z][k];
                            if (cpy[z][k] == 3)
                                cpy[z][k] = 0;
                        }
                    if(counter%2==0 and counter<2) {
                        offerx = i;
                        offery=j;
                        ptr += ValueOfMove(i, j, cpy, clr);
                    }
                    else if(counter%2==1)
                        ptr -= ValueOfMove(i, j, cpy,clr);

                    if (clr == 1) {
                        FindMove(cpy,2,counter+1);
                    }
                    if (clr == 2) {
                        FindMove(cpy,1,counter+1);
                    }
                }
            }
    }
    else if(counter>=2){
        if (ptr>finalptr){
            finalptr=ptr;
            x=offerx;
            y=offery;
        }
    }
}


int AI::ValueOfMove(int x, int y, int map[8][8], int clr){
    int score=0;
    map[x][y]=clr;
    QPoint cordinations[8];
    cordinations[0]=QPoint(-1,-1);
    cordinations[1]=QPoint(-1,0);
    cordinations[2]=QPoint(-1,1);
    cordinations[3]=QPoint(0,-1);
    cordinations[4]=QPoint(0,1);
    cordinations[5]=QPoint(1,-1);
    cordinations[6]=QPoint(1,0);
    cordinations[7]=QPoint(1,1);
    std::vector<QPoint> reverses;
    for(int k=0;k<8;k++)
    {
        int cx=x+cordinations[k].x();
        int cy=y+cordinations[k].y();
        for(int l=0;cx<8 && cy<8 && cx>=0 && cy>=0;l++)
        {
            if(map[cx][cy]==0)
                break;

            if(map[cx][cy]==clr)
            {
                if(l) {
                    reverses.push_back(cordinations[k]);
                }
                break;
            }
            cx=cx+cordinations[k].x();
            cy=cy+cordinations[k].y();
        }
    }
    for(int i=0;i<reverses.size();i++)
    {
        int cx=x+reverses[i].x();
        int cy=y+reverses[i].y();
        while(cx>=0 && cy>=0 && cx<8 && cy<8 && map[cx][cy]!=clr)
        {
            score+=ScoreTable[cx][cy];
            cx=cx+reverses[i].x();
            cy=cy+reverses[i].y();
        }

    }
    score*=ScoreTable[x][y];

    return score;
}



int AI::GetX() {
    return x;
}
int AI::GetY() {
    return y;
}