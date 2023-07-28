//
// Created by Phillip Henry on 7/28/23.
//

#ifndef CONNECT4__GAME_H_
#define CONNECT4__GAME_H_

class Game{
public:
    Game();
    ~Game();
    void PlayMove(int row, int column, int player);
    void RemoveMove(int row, int column);
    void PrintGame();
    void ResetGame();
    

private:
    int movesPlayed;
    int rowCount;
    int columnCount;
    int **gameState;
};

#endif //CONNECT4__GAME_H_
