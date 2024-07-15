#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Player.h"

class Game
{
public:
    Game();
    void play();

private:
    Board board;
    Player player1;
    Player player2;
    bool currentPlayerIsPlayer1;
    void switchPlayer();
    void makeMove();
};

#endif
