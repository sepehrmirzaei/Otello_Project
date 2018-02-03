//
// Created by sepehr007 on 1/30/18.
//

#ifndef OTELLO_CLIENT_JUDGEMENT_H
#define OTELLO_CLIENT_JUDGEMENT_H

#include <QtCore/QObject>

class Judgement: QObject{
    Q_OBJECT
public:
    Judgement(QString);

    bool AbilityToMove(int [8][8]);
    //bool MakeScore(int , int);
    //bool CheckDistance(int , int);


private:
    QString TurnToMove;


};

#endif //OTELLO_CLIENT_JUDGEMENT_H
