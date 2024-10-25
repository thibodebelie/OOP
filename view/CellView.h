//
// Created by thibodebelie on 10/25/24.
//

#ifndef CELLVIEW_H
#define CELLVIEW_H

#include <QGraphicsRectItem>

#include "cell.h"


class CellView: public QGraphicsRectItem
{
public:
    CellView(std::shared_ptr<Cell> model);
    void updateSymbol();
private:
    std::shared_ptr<Cell> _model;
    QGraphicsSimpleTextItem letter;

};



#endif //CELLVIEW_H
