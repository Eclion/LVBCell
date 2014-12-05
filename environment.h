#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include "cell.h"
#include <QVector>
#include <QMatrix>

class Environment
{
public:
    Environment();
    QVector<Cell*> getNearCells(Cell* c);
    void setupEnvironment();
    void addCell(Cell* c);
    bool isPlaceFree(int coord[3]);
    bool run();
    void updateGraph();

private:
    QVector<Cell*>* _cells;
    QMatrix* _form;
};

#endif // ENVIRONMENT_H
