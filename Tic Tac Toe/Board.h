#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board
{
public:
    Board();
    void display();
    bool makeMove(int row, int col, char symbol);
    bool checkWin(char symbolsymbolsymbol);
    bool isFull();

private:
    std::vector<std::vector<char>> board;
    int moves;
    bool checkRows(char symbolsymbolsymbol);
    bool checkCols(char symbolsymbol);
    bool checkDiagonals(char symbol);
};

#endif