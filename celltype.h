#ifndef CELLTYPE_H
#define CELLTYPE_H

#include <QString>
#include <QVector>

class CellType
{
public:
    CellType();
    CellType(int indexActions[8]);
    enum ActionEnum{up,down,right,left,forward,backward,nothing,death};
    QString getAction(int i);

private:
    ActionEnum _actions[8];
};

#endif // CELLTYPE_H
