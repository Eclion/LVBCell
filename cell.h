#ifndef CELL_H
#define CELL_H

#include "gene.h"
#include <QWidget>

class Cell
{
public:
    Cell(int coord[3]);
    void live();
    void moveTo(int newCoord[3]);
    int getX(),getY(),getZ();

private:
    int _age;
    int _coord[3];
    void mutate();//aucune idée de l'utilité pour l'instant
    Gene* _gene;
    bool _quiescient;//état dans lequel la cellule ne fait plus rien
    int _actionIndex;
    int _typeIndex;
    int _lastTypeIndex;//index d'avant la dernière division


};

#endif // CELL_H
