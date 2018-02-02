//
// Created by sepehr007 on 1/30/18.
//

#include "HeaderFiles/judgement.h"

Judgement::Judgement(QString color) {
    TurnToMove=color;
}

bool Judgement::AbilityToMove(int board[8][8]){
    bool moveExist=false;
    int clr;
    if(TurnToMove=="white")
        clr=1;
    else if(TurnToMove=="black")
        clr=2;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            bool verify=false;
            if(board[i][j]==0){
                if(i-1>=0 and j-1>=0 and board[i-1][j-1]!=0 and board[i-1][j-1]!=3 and clr!=board[i-1][j-1]){
                    int I=i-1,J=j-1;
                    while (I>=0 and J>=0){
                        if(board[I][J]==0)
                            break;
                        else if(board[I][J]==clr)
                        {
                            verify=true;
                            break;
                        }
                        I--;
                        J--;
                    }
                }
                if(i-1>=0 and board[i-1][j]!=0 and board[i-1][j]!=3 and clr!=board[i-1][j]){
                    int I=i-1;
                    while (I>=0){
                        if(board[I][j]==0)
                            break;
                        else if(board[I][j]==clr)
                        {
                            verify=true;
                            break;
                        }
                        I--;
                    }
                }
                if(i-1>=0 and j+1<=7 and board[i-1][j+1]!=0 and board[i-1][j+1]!=3 and clr!=board[i-1][j+1]){
                    int I=i-1,J=j+1;
                    while (I>=0 and J<=7){
                        if(board[I][J]==0)
                            break;
                        else if(board[I][J]==clr)
                        {
                            verify=true;
                            break;
                        }
                        I--;
                        J++;
                    }
                }
                if(j+1<=7 and board[i][j+1]!=0 and board[i][j+1]!=3 and clr!=board[i][j+1]){
                    int J=j+1;
                    while (i>=0 and J<=7){
                        if(board[i][J]==0)
                            break;
                        else if(board[i][J]==clr)
                        {
                            verify=true;
                            break;
                        }
                        J++;
                    }
                }
                if(i+1<=7 and j+1<=7 and board[i+1][j+1]!=0 and board[i+1][j+1]!=3 and clr!=board[i+1][j+1]){
                    int I=i+1,J=j+1;
                    while (I<=7 and J<=7){
                        if(board[I][J]==0)
                            break;
                        else if(board[I][J]==clr)
                        {
                            verify=true;
                            break;
                        }
                        I++;
                        J++;
                    }
                }
                if(i+1<=7 and board[i+1][j]!=0 and board[i+1][j]!=3 and clr!=board[i+1][j]){
                    int I=i+1;
                    while (I>=0){
                        if(board[I][j]==0)
                            break;
                        else if(board[I][j]==clr)
                        {
                            verify=true;
                            break;
                        }
                        I++;

                    }
                }
                if(i+1<=7 and j-1>=0 and board[i+1][j-1]!=0 and board[i+1][j-1]!=3 and clr!=board[i+1][j-1]){
                    int I=i+1,J=j-1;
                    while (I<=7 and J>=0){
                        if(board[I][J]==0)
                            break;
                        else if(board[I][J]==clr)
                        {
                            verify=true;
                            break;
                        }
                        I++;
                        J--;
                    }
                }
                if(j-1>=0 and board[i][j-1]!=0 and board[i][j-1]!=3 and clr!=board[i][j-1]){
                    int J=j-1;
                    while (J>=0){
                        if(board[i][J]==0)
                            break;
                        else if(board[i][J]==clr)
                        {
                            verify=true;
                            break;
                        }
                        J--;
                    }
                }


                if(verify==true) {
                    board[i][j] = 3;
                    moveExist=true;
                }
            }


            else
                continue;
        }
    }
    return moveExist;
}


