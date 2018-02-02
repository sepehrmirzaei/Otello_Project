//
// Created by sepehr007 on 1/29/18.
//
#include "../HeaderFiles/otelloboard.h"
using namespace std;

OtelloBoard::OtelloBoard(QString usrname,QString usrcolor,QString playmode): QWidget(){
    UsrColor=usrcolor;
    PlayMode=playmode;
    TurnColor="white";
    this->setWindowTitle(usrname);

    setGeometry(0,0,480,480);
    nomove=0;
    OpeningBoard();
    SetMapFirstValue();
    Moving();

}
void OtelloBoard::OpeningBoard() {

    mGameTable=new QTableWidget(8,8,this);
    mGameTable->setGeometry(0,0,480,480);
    mGameTable->horizontalHeader()->setDefaultSectionSize(59);
    mGameTable->verticalHeader()->setDefaultSectionSize(59);
    mGameTable->horizontalHeader()->hide();
    mGameTable->verticalHeader()->hide();
    mGameTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    this->setStyleSheet("background-color:green;");


    SetCoin(3,3,"white");
    SetCoin(4,4,"white");
    SetCoin(3,4,"black");
    SetCoin(4,3,"black");


}

void OtelloBoard::SetMapFirstValue() {
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            mMap[i][j]=0;
    mMap[3][3]=mMap[4][4]=1;
    mMap[3][4]=mMap[4][3]=2;
}

void OtelloBoard::SetCoin(int i, int j, QString type) {

    QString whiteImgPath = "/home/sepehr007/OtelloProject/otello_client/whitecoin.jpg";
    QString blackImgPath = "/home/sepehr007/OtelloProject/otello_client/blackcoin.jpg";
    QImage *whiteimg = new QImage(whiteImgPath);
    QImage *blackimg = new QImage(blackImgPath);

    QTableWidgetItem *brush = new QTableWidgetItem;
    if(type=="white"){
        brush->setData(Qt::DecorationRole, QPixmap::fromImage(*whiteimg));
        mGameTable->setItem(i, j, brush);
        mMap[i][j]=1;
    }
    else if(type=="black"){
        brush->setData(Qt::DecorationRole, QPixmap::fromImage(*blackimg));
        mGameTable->setItem(i, j, brush);
        mMap[i][j]=2;
    }
    for (int z=0;z<8;z++)
        for(int k=0;k<8;k++)
            if(mMap[z][k]==3){
                mMap[z][k]=0;
            }
}

void OtelloBoard::mouseClicking(int i, int j) {
    if(mMap[i][j]==3) {
        if(UsrColor=="white") {

            for (int z=0;z<8;z++)
                for(int k=0;k<8;k++)
                    if(mMap[z][k]==3){
                        mGameTable->setItem(z, k, new QTableWidgetItem);
                        mGameTable->item(z, k)->setBackground(Qt::darkGreen);
                    }
            SetCoin(i, j, "white");
            EatCoin(i,j,1);
            TurnColor = "black";
        }
        else{
            for (int z=0;z<8;z++)
                for(int k=0;k<8;k++)
                    if(mMap[z][k]==3){
                        mGameTable->setItem(z, k, new QTableWidgetItem);
                        mGameTable->item(z, k)->setBackground(Qt::darkGreen);
                    }
            SetCoin(i, j, "black");
            EatCoin(i,j,2);
            TurnColor = "white";
        }

        Moving();
    }
        //this->setStyleSheet("background-color:green;");

}

void OtelloBoard::SetOffers(){
    for (int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            if(mMap[i][j]==3){
                mGameTable->setItem(i, j, new QTableWidgetItem);
                mGameTable->item(i, j)->setBackground(Qt::darkYellow);
            }
}

void OtelloBoard::Moving(){
    if(FinishCheck()) {
        if (PlayMode == "cpu") {
            if (TurnColor == UsrColor) {
                Judgement *judge = new Judgement(TurnColor);
                bool law = judge->AbilityToMove(mMap);
                if (law) {
                    SetOffers();
                    nomove = 0;
                    connect(this->mGameTable, SIGNAL(cellPressed(int, int)), this, SLOT(mouseClicking(int, int)));
                }
                else {
                    if (UsrColor == "white") {
                        TurnColor = "black";
                    }
                    else {
                        TurnColor = "white";
                    }
                    nomove++;
                    Moving();
                }
            }
            else {
                Judgement *judge = new Judgement(TurnColor);
                bool law = judge->AbilityToMove(mMap);
                if (law == true) {
                    AI *hoosh = new AI(mMap,TurnColor);
                    SetCoin(hoosh->GetX(), hoosh->GetY(), TurnColor);
                    if(UsrColor=="white")
                        EatCoin(hoosh->GetX(), hoosh->GetY(), 2);
                    else
                        EatCoin(hoosh->GetX(), hoosh->GetY(), 1);

                    TurnColor = UsrColor;
                    nomove = 0;
                    Moving();
                }
                else {
                    TurnColor = UsrColor;
                    nomove++;
                    Moving();
                }
            }
        }
    }
    else
        close();
}

bool OtelloBoard::FinishCheck() {
    if(nomove>=2)
        return false;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            if(mMap[i][j]==0 and nomove<2)
                return true;
    return false;

}

void OtelloBoard::EatCoin(int x, int y,int clr){
    mMap[x][y]=clr;
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
            if(mMap[cx][cy]==0)
                break;

            if(mMap[cx][cy]==clr)
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
        while(cx>=0 && cy>=0 && cx<8 && cy<8 && mMap[cx][cy]!=clr)
        {
            if(clr==1)
                SetCoin(cx,cy,"white");
            else if(clr==2)
                SetCoin(cx,cy,"black");
            cx=cx+reverses[i].x();
            cy=cy+reverses[i].y();
        }

    }

}


