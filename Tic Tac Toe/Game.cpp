#include "Game.h"
#include <iostream>

Game::Game() : player1('X'), player2('O'), currentPlayerIsPlayer1(true) {}

void Game::play()
{
    while (true)
    {
        board.display();
        makeMove();
        if (board.checkWin(currentPlayerIsPlayer1 ? player1.getSymbol() : player2.getSymbol()))
        {
            board.display();
            std::cout << "Player " << (currentPlayerIsPlayer1 ? "1" : "2") << " wins!" << std::endl;
            break;
        }
        if (board.isFull())
        {
            board.display();
            std::cout << "The game is a draw!" << std::endl;
            break;
        }
        switchPlayer();
    }
}

void Game::switchPlayer()
{
    currentPlayerIsPlayer1 = !currentPlayerIsPlayer1;
}

void Game::makeMove()
{
    int row, col;
    char currentSymbol = currentPlayerIsPlayer1 ? player1.getSymbol() : player2.getSymbol();
    while (true)
    {
        std::cout << "Player " << (currentPlayerIsPlayer1 ? "1" : "2") << " (" << currentSymbol << ") enter row and column (0-2): ";
        std::cin >> row >> col;
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board.makeMove(row, col, currentSymbol))
        {
            break;
        }
        std::cout << "Invalid move. Try again." << std::endl;
    }
}
