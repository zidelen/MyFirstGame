//
// Created by Phillip Henry on 7/28/23.
//
#include <iostream>
#include "Game.h"

void PlayTest();
void CheckWin();

int main(){
    CheckWin();
}

void PlayTest(){
    // Initialize Game
    Game game;
    int input = 0;
    do{
        system("clear");
        game.PrintGame(std::cout);
        std::cin >> input;
        game.PlayMove(input);
    }
    while(input != 0);
}
void CheckWin(){
    // Initialize Game
    Game game;
    int input = 0;
    do{
        system("clear");
        game.PrintGame(std::cout);
        std::cin >> input;
        game.PlayMove(input);
    }
    while(input != 0);
    std::cout << game.CheckWin();
}