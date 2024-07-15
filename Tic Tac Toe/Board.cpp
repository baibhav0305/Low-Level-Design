#include "Board.h"
#include <iostream>

Board::Board()
{
    board.resize(3, std::vector<char>(3, ' '));
    moves = 0;
}

void Board::display()
{
    for (auto row : board)
    {
        for (auto cell : row)
        {
            std::cout << (cell == ' ' ? '.' : cell) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

bool Board::makeMove(int row, int col, char symbol)
{
    if (board[row][col] == ' ')
    {
        board[row][col] = symbol;
        moves++;
        return true;
    }
    return false;
}

bool Board::checkWin(char symbol)
{
    return checkRows(symbol) || checkCols(symbol) || checkDiagonals(symbol);
}

bool Board::isFull()
{
    return moves == 9;
}

bool Board::checkRows(char symbol)
{
    for (auto row : board)
    {
        if (row[0] == symbol && row[1] == symbol && row[2] == symbol)
        {
            return true;
        }
    }
    return false;
}

bool Board::checkCols(char symbol)
{
    for (int col = 0; col < 3; ++col)
    {
        if (board[0][col] == symbol && board[1][col] == symbol && board[2][col] == symbol)
        {
            return true;
        }
    }
    return false;
}

bool Board::checkDiagonals(char symbol)
{
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
    {
        return true;
    }
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
    {
        return true;
    }
    return false;
}
