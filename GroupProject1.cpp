//
//  main.cpp
//  GroupProject1
//
//  Created by Craig Ricker on 7/24/17.
//  Copyright © 2017 Jortssports. All rights reserved.
//

#include <iostream>
#include "Paper.hpp"
#include "Rock.hpp"
#include "Scissor.hpp"
#include "Tool.hpp"
#include "RPSGame.hpp"
#include "menu2.hpp"


using namespace std;


#define PAPER 'p'
#define SCISSOR 's'
#define ROCK 'r'
#define CHOICE_SIZE 3
const char CHOICES[CHOICE_SIZE] = {PAPER, SCISSOR, ROCK};


enum flow {PLAY, QUIT};

int main(int argc, const char * argv[]) {
   // seed time
   srand ((unsigned int) time(NULL) );
   string menuPrompts[2] = {"Play", "Quit"};
   string toolPrompts[3] = {"Paper", "Scissor", "Rock"};
   int toolPrompt;
   char toolType;
   
   RPSGame * game = new RPSGame();
   while ((flow) menu(menuPrompts, 2) == PLAY)
   {
      cout << "Enter an integer for your Tool type" << endl;
      toolPrompt = menu(toolPrompts, 3);
      toolType = CHOICES[toolPrompt];
      game->_play(toolType);
      cout << "Do you want to play again?" << endl;
   }
   

}
