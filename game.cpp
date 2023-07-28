//
// Created by Phillip Henry on 7/28/23.
//

#include "game.h"

Game::Game(){

}
Game::~Game(){

}
void Game::PlayMove(int column){
    for(int i = rowCount; i > 0; i--){
        if(gameState[i][column] == '0'){
            gameState[i][column] = 0;
        }
    }
}
void Game::RemoveMove(int row, int column){

}
void Game::PrintGame(std::ostream& out){
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
    rowCount = rows;
    columnCount = columns;
    
    gameState = new char* [rowCount];
    for(int i = 0; i < rows; i++){
        gameState[i] = new char [columnCount];
        // TODO: Initialize the starting game as '0'
//        for(int j = 0; i < columnCount; i++){
//            gameState[i][j] = '0';
//        }
    }
}

