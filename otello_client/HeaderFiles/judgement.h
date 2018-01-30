//
// Created by sepehr007 on 1/30/18.
//

#ifndef OTELLO_CLIENT_JUDGEMENT_H
#define OTELLO_CLIENT_JUDGEMENT_H

#include <QtCore/QObject>

class Judgement: QObject{
    Q_OBJECT
public:
    Judgement(int ,int,QString);

    bool AbilityToMove();
    bool MakeScore(int , int);
    bool CheckDistance(int , int);
    bool SuddenDeath();
    bool EnemyTurn();

private:
    QString turnToMove;


};

#endif //OTELLO_CLIENT_JUDGEMENT_H
