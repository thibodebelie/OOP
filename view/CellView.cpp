//
// Created by thibodebelie on 10/25/24.
//

#include "CellView.h"


CellView::CellView(std::shared_ptr<Cell> model) : _model(model)
{
}

void CellView::updateSymbol()
{
    letter.setText(_model->getSymbol() == Cell::Symbols::X ? "X" : "O"); //ternary operator
}
