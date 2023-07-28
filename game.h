//
// Created by Phillip Henry on 7/28/23.
//

#include <ostream>

#ifndef CONNECT4__GAME_H_
#define CONNECT4__GAME_H_

class Game{
public:
    Game();
    Game(int rows, int columns);
    ~Game();
    void PlayMove(int column);
    void RemoveMove(int row, int column);
    void PrintGame(std::ostream& out);
    void ResetGame();
    

private:
    int movesPlayed;
    int rowCount;
    int columnCount;
    char **gameState;
};

#endif //CONNECT4__GAME_H_
