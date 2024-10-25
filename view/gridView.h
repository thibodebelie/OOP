//
// Created by thibodebelie on 10/25/24.
//

#ifndef GRIDVIEW_H
#define GRIDVIEW_H

#include <QGraphicsScene>
#include "CellView.h"
#include "grid.h"

class GridView : public QGraphicsScene
{
public:
    GridView(std::shared_ptr<Grid> model);

private:
    std::vector<std::vector<std::shared_ptr<CellView>>> _cellViews;
    std::shared_ptr<Grid> _model;

};



#endif //GRIDVIEW_H