//
// Created by thibodebelie on 10/25/24.
//

#include "ticTacToe.h"

TicTacToe::TicTacToe(std::array<std::string, 2> playerNames)
{
    for (int i = 0; i < playerNames.size(); i++)
    {
        _players.emplace_back(playerNames[i],static_cast<Cell::Symbols>(i));
    }

}
