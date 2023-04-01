//
// Created by Rafael Silva on 31/03/23.
//
#include <iostream>
#include <vector>

#ifndef TIC_TAC_TOE_STARTING_TTT_H
#define TIC_TAC_TOE_STARTING_TTT_H

void printGrid(std::vector<char> grid);
bool gameEnded(std::vector<char> grid);
void victoryMessage(char player);
int requestGridPosition();



#endif //TIC_TAC_TOE_STARTING_TTT_H
