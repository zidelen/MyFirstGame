#include <iostream>
#include "game.h"


int main(){
    Game game1 = Game();
    int input;
    while(input !=0){
        system("clear");
        game1.PrintGame(std::cout);
        std::cin >> input;
        game1.PlayMove(input);
    }
    game1.PrintGame(std::cout);
    
    return 0;
}
