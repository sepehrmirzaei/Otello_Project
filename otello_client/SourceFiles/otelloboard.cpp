//
// Created by sepehr007 on 1/29/18.
//
#include "../HeaderFiles/otelloboard.h"
using namespace std;

OtelloBoard::OtelloBoard(): QWidget(){
    setGeometry(0,0,480,480);

    OpeningBoard();
    SetMapFirstValue();

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

    connect(this->mGameTable,SIGNAL(cellPressed(int,int)),this,SLOT(mouseClicking(int ,int)));

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

    QTableWidgetItem *thumbnail = new QTableWidgetItem;
    if(type=="white"){
        thumbnail->setData(Qt::DecorationRole, QPixmap::fromImage(*whiteimg));
        mGameTable->setItem(i, j, thumbnail);
    }
    else if(type=="black"){
        thumbnail->setData(Qt::DecorationRole, QPixmap::fromImage(*blackimg));
        mGameTable->setItem(i, j, thumbnail);
    }
}

void OtelloBoard::mouseClicking(int i, int j) {
    SetCoin(i,j,"white");
}