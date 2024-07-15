#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
public:
    Player(char symbol);
    char getSymbol();

private:
    char symbol;
};

#endif
