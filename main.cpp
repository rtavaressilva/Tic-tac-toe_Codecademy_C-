//
// Created by Rafael Silva on 31/03/23.
//
#include <iostream>
#include <vector>
#include "ttt.h"

int main() {
std::vector<char> ttt_grid = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
bool goOn = false;;
char player1 = 'x';
char player2 = 'o';

//Gameplay loop
while (!goOn) {;
    printGrid(ttt_grid);
    int pos;
//Player 1's turn
std::cout << "Player 1, enter a position between 0 and 9 to place an 'x' in "
             "the grid: ";
pos = requestGridPosition();
if (ttt_grid[pos] == 'x') {
    std::cout << "You already chose this position. Choose an empty one:";
    pos = requestGridPosition();
} else {
    ttt_grid[pos] = 'x';
}
goOn = gameEnded(ttt_grid);
//Player 2's turn
    std::cout << "Player 2, enter a position between 0 and 9 to place an 'o' in the grid: ";
    pos = requestGridPosition();
    if (ttt_grid[pos] == 'o') {
        std::cout << "You already chose this position. Choose an empty one:";
        pos = requestGridPosition();
    } else {
        ttt_grid[pos] = 'o';
    }
    goOn = gameEnded(ttt_grid);
}


    return 0;
}