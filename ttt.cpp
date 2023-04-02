#include "ttt.h"
#include <iostream>
#include <vector>

void printGrid(std::vector<char> grid) {
    std::cout << " " << grid[0] << "  | " << grid[1] << "  | " << grid[2] <<
              std::endl;
    std::cout << "----|----|----" << std::endl;
    std::cout << " " << grid[3] << "  | " << grid[4] << "  | " << grid[5] <<
              std::endl;
    std::cout << "----|----|----" << std::endl;
    std::cout << " " << grid[6] << "  | " << grid[7] << "  | " << grid[8] <<
              std::endl;
}

int validatePosition(int position, std::vector<char> grid) {
        if (position < 0 || position > 8) {
    while (position < 0 || position > 8) {
            std::cout << "Invalid position. Enter a position between 0 and 9: ";
            std::cin >> position;
        }
//        std::cout << "Position is " << position << std::endl;
//      position = availablePosition(position, grid);
//        std::cout << "Position is " << position << std::endl;
    }
    return position;
}
   int availablePosition(int position, std::vector<char> grid) {

    if (grid[position] == 'x' || grid[position] == 'o') {
       while (grid[position] == 'x' || grid[position] == 'o'){
        std::cout << "This position is not available. Choose an empty "
                     "one: ";
        std::cin >> position;
    }
//    validPosition = true;
}
return position;
}

void victoryMessage(char player) {
    std::cout << "Player " << player << " wins!" << std::endl;
}

bool gameEnded(std::vector<char> grid) {
bool matchOver = false;
    //vertical combinations
    //COLUMN 1
    if (grid[0] == 'x' && grid[3] == 'x' && grid[6] == 'x') {
        victoryMessage('x');
        matchOver = true;
    } else if (grid[0] == 'o' && grid[3] == 'o' && grid[6] == 'o') {
        victoryMessage('o');
        matchOver = true;
    }
    //COLUMN 2
    if (grid[1] == 'x' && grid[4] == 'x' && grid[7] == 'x') {
        victoryMessage('x');
    } else if (grid[1] == 'o' && grid[4] == 'o' && grid[7] == 'o') {
        victoryMessage('o');
        matchOver = true;
    }
    //COLUMN 3
    if (grid[2] == 'x' && grid[5] == 'x' && grid[8] == 'x') {
        victoryMessage('x');
        matchOver = true;
    } else if (grid[2] == 'o' && grid[5] == 'o' && grid[8] == 'o') {
        victoryMessage('o');
        matchOver = true;
    }

    //horizontal combinations
    //ROW 1
    if (grid[0] == 'x' && grid[1] == 'x' && grid[2] == 'x') {
        victoryMessage('x');
        matchOver = true;
    } else if (grid[0] == 'o' && grid[1] == 'o' && grid[2] == 'o') {
        victoryMessage('o');
        matchOver = true;
    }
    //ROW 2
    if (grid[3] == 'x' && grid[4] == 'x' && grid[5] == 'x') {
        victoryMessage('x');
        matchOver = true;
    } else if (grid[3] == 'o' && grid[4] == 'o' && grid[5] == 'o') {
        victoryMessage('o');
        matchOver = true;
    }
    //ROW 3
    if (grid[6] == 'x' && grid[7] == 'x' && grid[8] == 'x') {
        victoryMessage('x');
        matchOver = true;
    } else if (grid[6] == 'o' && grid[7] == 'o' && grid[8] == 'o') {
        victoryMessage('o');
        matchOver = true;
    }
    //diagonal combinations
    if (grid[0] == 'x' && grid[4] == 'x' && grid[8] == 'x') {
        victoryMessage('x');
        matchOver = true;
    } else if (grid[0] == 'o' && grid[4] == 'o' && grid[8] == 'o') {
        victoryMessage('o');
        matchOver = true;
    }
    if (grid[2] == 'x' && grid[4] == 'x' && grid[6] == 'x') {
        victoryMessage('x');
        matchOver = true;
    } else if (grid[2] == 'o' && grid[4] == 'o' && grid[6] == 'o') {
        victoryMessage('o');
        matchOver = true;
    }

    return matchOver;
}

