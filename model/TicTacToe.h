//
// Created by thibodebelie on 10/25/24.
//

#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <vector>

#include "grid.h"
#include "player.h"


class TicTacToe
{
public:
    TicTacToe(std::array<std::string, 2> playerNames);

private:
    Grid _grid;
    std::vector<Player> _players;
};



#endif //TICTACTOE_H
