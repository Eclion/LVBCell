#include "celltype.h"
#include <math.h>
#include <qglobal.h>

//enum ActionEnum{up,down,right,left,forward,backward,null=0,death};

CellType::CellType()
{
    bool actionSet[8];
    for(int i = 0;i<8;i++)actionSet[i]=false;
    for(int i = 0;i<8;i++){
        int indexRnd=0;
        do{
            indexRnd=round(qrand()*8);
        }while(actionSet[indexRnd] && i<8);
        actionSet[indexRnd] = true;
        _actions[i]=ActionEnum(indexRnd);
    }
}

CellType::CellType(int indexActions[8])
{
    for(int i =0;i<8;i++){
        _actions[i] = ActionEnum(indexActions[i]);
    }
}

QString CellType::getAction(int i){

    switch(this->_actions[i]){

    case(up):
        return "up";
        break;
    case(down):
        return "down";
        break;
    case(right):
        return "right";
        break;
    case(left):
        return "left";
        break;
    case(forward):
        return "forward";
        break;
    case(backward):
        return "backward";
        break;
    case(nothing):
        return "nothing";
        break;
    case(death):
        return "death";
        break;

    default:
        return "";
        break;
    }
}
