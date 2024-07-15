# Tic Tac Toe - Low Level Design

## Requirements
- Game should be played on a 3x3 grid.
- Two players should play the game.
- Each player should use either 'X' or 'O' symbol.
- First player to get 3 consecutive cells of his symbol eithor horizontally, vertically or diagonally, wins the game.
- Game ends in draw if all cells are filled and no player wins the game.
- The game should display the grid and allow players to make a move.
- The game should handle valid and invalid moves.
- The game shoul detect and announce the winner or a draw at the end of the game.

## Classes
- **Player** - Represents a player containing their symbol.
- **Board** - Represents a 3x3 game board. Provides methods to make moves, check for winner and check for draws.
- **Game** - Manages the game flow. Hanldes player turns, validates moves and determines winner.

## Compiling & Running the Code
To compile and run the code, you can use the following commands:
```
g++ -o tic_tac_toe Board.cpp Player.cpp Game.cpp tictactoe.cpp
./tic_tac_toe.exe
```
