//
// Created by thibodebelie on 10/25/24.
//

#include "player.h"

Player::Player(const std::string &name, const Cell::Symbols& symbol) : _name(name), _symbol(symbol)
{

}

std::string Player::getName() const
{
    return _name;
}

