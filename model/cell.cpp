//
// Created by thibodebelie on 10/25/24.
//

#include "cell.h"


void Cell::setSymbol(const Symbols &symbol)
{
    _symbol = symbol;
}

const Cell::Symbols & Cell::getSymbol() const
{
    return _symbol;
}
