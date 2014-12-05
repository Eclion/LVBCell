#include "cell.h"
#include <math.h>
#include "globals.h"


Cell::Cell(int coord[3])
{
    _age = 0;
    _quiescient = false;
    _actionIndex = 0;
    _typeIndex = 0;
    _gene = new Gene();
    for(int i=0;i<3;i++)_coord[i]=coord[i];
}

void Cell::live(){
    _age ++;
    if(_typeIndex >= _gene->getTaille()) _quiescient = true;
    if(_quiescient) return;

    QString movement = _gene->getCellType(_typeIndex)->getAction(_actionIndex);
    _actionIndex ++;

    int nextCoord[3];
    for(int i=0;i<3;i++) nextCoord[i] = _coord[i];
    if(movement=="up") nextCoord[2]++;
    else if(movement=="down") nextCoord[2]--;
    else if(movement=="left") nextCoord[1]++;
    else if(movement=="right") nextCoord[1]--;
    else if(movement=="forward") nextCoord[0]++;
    else if(movement=="backward") nextCoord[0]--;
    if(_env->isPlaceFree(nextCoord)){
        Cell* child=new Cell(_coord);
        moveTo(nextCoord);
        _env->addCell(child);
        _lastTypeIndex = _typeIndex;
    }else movement = "nothing";
    if(movement=="nothing"){
        _typeIndex++;
        _actionIndex = 0;
    }
    else if(movement=="death") delete this;
}

void Cell::mutate(){

}

void Cell::moveTo(int newCoord[3]){
    for(int i=0; i<3;i++){
        _coord[i]=newCoord[i];
    }
    _env->updateGraph();
}

int Cell::getX(){
    return _coord[0];
}

int Cell::getY(){
    return _coord[0];
}

int Cell::getZ(){
    return _coord[0];
}
