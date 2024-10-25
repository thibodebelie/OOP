//
// Created by thibodebelie on 10/25/24.
//

#include "gridView.h"

GridView::GridView(std::shared_ptr<Grid> model): _model(model)
{
    for(int i = 0; i<3 ; ++i){
        for(int j = 0; j<3 ; ++j){
            _cellViews[i][j] = std::make_shared<CellView>(_model->getCell(i, j));

            addItem(_cellViews[i][j].get());
            _cellViews[i][j].get()->setPos(i*200 + 2 , j*200 + 2);
        }
    }

}

