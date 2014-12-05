#include "gene.h"


Gene::Gene(int taille)
{
    _taille = taille;
    for(int i =0;i<_taille;i++){
        _componants.enqueue(new CellType());
    }
}

void Gene::copyGene(Gene* g)
{
    for(int i =0;i<g->getTaille();i++){
        this->_componants.enqueue(g->getCellType(i));
    }
}


CellType* Gene::getCellType(int i){
    return _componants[i];
}

int Gene::getTaille(){
    return _taille;
}
