#ifndef GENE_H
#define GENE_H

#include "celltype.h"
#include <QQueue>

class Gene
{
public:
    Gene(int taille = 128);
    void copyGene(Gene* g);
    CellType* getCellType(int i);
    void incrementTypeIndex();
    int getTaille();

private:
    QQueue<CellType*> _componants;
    int _taille;
};

#endif // GENE_H
