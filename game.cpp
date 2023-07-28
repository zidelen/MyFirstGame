//
// Created by Phillip Henry on 7/28/23.
//

#include "game.h"

Game::Game(){
    rowCount = 6;
    columnCount = 7;
    movesPlayed = 0;
    turn = 0;
    
    gameState = new char* [rowCount];
    for(int i = 0; i < rowCount; i++){
        gameState[i] = new char [columnCount];
        for(int j = 0; j < columnCount; j++){
            gameState[i][j] = '0';
        }
    }
}
Game::~Game(){

}
void Game::PlayMove(int column){
    bool placed = false;
    for(int i = rowCount-1; i >= 0; i--){
        if(gameState[i][column-1] == '0'){
            switch(turn){
                case 0:{
                    gameState[i][column-1] = 'x';
                    break;
                }
                case 1:{
                    gameState[i][column-1] = 'y';
                    break;
                }
            }
            placed = true;
            break;
        }
    }
    if(placed){
        turn = (turn + 1) % 2;
    }
}

void Game::RemoveMove(int row, int column){
    gameState[row-1][column-1] = '0';
    UpdateGravity(column);
}

void Game::PrintGame(std::ostream& out = std::cout){
    for(int i = 0; i < rowCount; i++){
        out << i+1 << " ";
        for(int j = 0; j < columnCount; j++){
            out << gameState[i][j] << " ";
        }
        out << std::endl;
    }
    out << "  ";
    for(int i = 0; i < columnCount; i++){
        out << i+1 << " ";
    }
    out << std::endl;
}
void Game::ResetGame(){

}
Game::Game(int rows, int columns){
    turn = 0;
    rowCount = rows;
    columnCount = columns;
    movesPlayed = 0;
    
    gameState = new char* [rowCount];
    for(int i = 0; i < rows; i++){
        gameState[i] = new char [columnCount];
        for(int j = 0; j < columnCount; j++){
            gameState[i][j] = '0';
        }
    }
}
void Game::UpdateGravity(){
    for(int i = 0; i < columnCount; i++){
        for(int j = rowCount-1; j > 0; j--){
            if(gameState[j][i] == '0'){
                gameState[j][i] = gameState[j-1][i];
                gameState[j-1][i] = '0';
            }
        }
    }
}

void Game::UpdateGravity(int column){
    for(int j = rowCount-1; j > 0; j--){
        if(gameState[j][column] == '0'){
            gameState[j][column] = gameState[j-1][column];
            gameState[j-1][column] = '0';
        }
    }
}