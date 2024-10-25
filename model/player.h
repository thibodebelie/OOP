//
// Created by thibodebelie on 10/25/24.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <string>

#include "cell.h"


class Player
{
public:

    Player(const std::string& name, const Cell::Symbols& symbol);
    std::string getName() const;

private:
    std::string _name;
    const Cell::Symbols _symbol;
};



#endif //PLAYER_H
