//
// Created by Rafael Silva on 31/03/23.
//
#include <iostream>
#include <vector>
#include "ttt.h"

int main() {
    std::vector<char> ttt_grid = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    bool gameOver = false;;
    char player1 = 'x';
    char player2 = 'o';

//Gameplay loop
    printGrid(ttt_grid);
    while (!gameOver) {
        int pos;
//Player 1's turn
        std::cout << "Player 1, enter a position between 0 and 8 to place an 'x' in "
                     "the grid: ";
        std::cin >> pos;
        pos = validatePosition(pos, ttt_grid);
        if (ttt_grid[pos] == 'x' || ttt_grid[pos] == 'o') {
            pos = positionNotAvailable(pos, ttt_grid);
        }
        if (ttt_grid[pos] == ' ') {
            ttt_grid[pos] = 'x';
        }
        printGrid(ttt_grid);
        gameOver = gameEnded(ttt_grid);

//Player 2's turn
        std::cout << "Player 2, enter a position between 0 and 8 to place an 'o' "
                     "in the grid: ";
        std::cin >> pos;
        pos = validatePosition(pos, ttt_grid);
        if (ttt_grid[pos] == 'x' || ttt_grid[pos] == 'o') {
            pos = positionNotAvailable(pos, ttt_grid);
        }
        if (ttt_grid[pos] == ' ') {
            ttt_grid[pos] = 'o';
        }
        printGrid(ttt_grid);
        gameOver = gameEnded(ttt_grid);
    }


    return 0;
}