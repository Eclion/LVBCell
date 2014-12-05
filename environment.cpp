#include "environment.h"

Environment::Environment()
{
    _cells = new QVector<Cell*>();
}

void Environment::setupEnvironment(){

}

void Environment::addCell(Cell *c){
    _cells->append(c);
}

bool Environment::isPlaceFree(int coord[3]){
    for(int i=0;i<_cells->length();i++){
        if(_cells->at(i)->getX() == coord[0] &&
                _cells->at(i)->getY() == coord[1] &&
                _cells->at(i)->getZ() == coord[2]) return false;
    }
    return true;
}

bool Environment::run(){
    int index=0;
    while(true){
        index = rand()*_cells->length();
        _cells->at(index)->live();
    }
    return true;
}

void Environment::updateGraph(){
    for(int i=0;i<_cells->length();i++){
        _cells->at(i)->getX();
        _cells->at(i)->getY();
        _cells->at(i)->getZ();
    }
}
