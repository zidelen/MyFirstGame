//
// Created by Phillip Henry on 7/28/23.
//
#pragma once

#include <iostream>

class Game{
public:
    Game();
    Game(int rows, int columns);
    ~Game();
    void PlayMove(int column);
    void RemoveMove(int row, int column);
    void PrintGame(std::ostream &out);
    void ResetGame();
    void UpdateGravity();
    void UpdateGravity(int column);
    bool CheckWin();

private:
    int turn;
    int movesPlayed;
    int rowCount;
    int columnCount;
    char **gameState;
};
