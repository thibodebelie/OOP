//
// Created by thibodebelie on 10/25/24.
//

#include "grid.h"

Grid::Grid()
{
   for(int i = 0; i <3; i++)
   {
       for(int j = 0; j <3; j++)
       {
           _grid[i][j] = std::make_shared<Cell>();
       }
   }
}

const std::array<std::array<std::shared_ptr<Cell>, 3>, 3> & Grid::getGrid() const
{
    return _grid;
}

const std::shared_ptr<Cell> & Grid::getCell(int x, int y) const
{
    return _grid[x][y];
}

