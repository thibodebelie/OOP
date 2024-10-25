//
// Created by thibodebelie on 10/25/24.
//

#ifndef GRID_H
#define GRID_H
#include <array>

#include "cell.h"
#include <memory>

class Grid
{
public:
    Grid();
    const std::array<std::array<std::shared_ptr<Cell>, 3>, 3>& getGrid() const;
    const std::shared_ptr<Cell>& getCell(int x, int y) const;


private:
    std::array<std::array<std::shared_ptr<Cell>, 3>, 3> _grid;
};



#endif //GRID_H
