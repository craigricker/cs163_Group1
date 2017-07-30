/*********************************************************************
 ** Program name: RPSGame
 ** Author:       Group 16
 ** Date:         July 24th 2017
 ** Description:  Class definition of RPSGame, no self executing code
 **               For indepth explanation of class, see class header
 *********************************************************************/

#include "RPSGame.hpp"
#include "Paper.hpp"
#include "Rock.hpp"
#include "Scissor.hpp"
#include "Tool.hpp"
#include <stdlib.h>
#include <time.h>

#define PAPER 'p'
#define SCISSOR 's'
#define ROCK 'r'
#define CHOICE_SIZE 3
const char COMP_CHOICES[CHOICE_SIZE] = {PAPER, SCISSOR, ROCK};
using namespace std;

void RPSGame::_printStatus()
{
   cout << "Human wins: " << _plrAScore << endl;
   cout << "Computer wins: " << _plrBScore << endl;
   cout << "Ties: " << _ties << endl;
}

void RPSGame::_play(char playerChoice)
{
   // Set playerA's tool
   _plrA = _createTool(playerChoice);
   // Randomize computer selection

   int randIndex = rand() % CHOICE_SIZE;
   char compSelection = COMP_CHOICES[randIndex];
   // Set up computer player
   _plrB = _createTool(compSelection);
   
   // This currently doesn't really do anything
   // This MAY need to be changed to drive the logic of the entire
   // game, I saw a piazza post that said it shouldn't rely on str...
   // but who knows.
   Tool::fight(*_plrA, *_plrB);
   
   Tool * winner;
   // Cases where player A throws rock
   if (_plrA->getType() == ROCK)
   {
      // If paper, plrB wins
      if (_plrB->getType() == PAPER)
      {
         winner = _plrB;
      }
      // If scissor, rock wins
      else if (_plrB->getType() == SCISSOR)
      {
         winner = _plrA;
      }
      // If rock, tie
      else if (_plrB->getType() == ROCK)
      {
         winner = nullptr;
      }
      else{
         // Illegal state, just exit
         exit(-1);
      }
   }
   // Case where player a throws paper
   else if (_plrA->getType() == PAPER)
   {
      // If paper, tie
      if (_plrB->getType() == PAPER)
      {
         winner = nullptr;
      }
      // If scissor, scissor wins
      else if (_plrB->getType() == SCISSOR)
      {
         winner = _plrB;
      }
      // If rock, rock loses
      else if (_plrB->getType() == ROCK)
      {
         winner = _plrA;
      }
      else{
         // Illegal state, just exit
         exit(-1);
      }
   }
   // Case where player a throws scissor
   else if (_plrA->getType() == SCISSOR)
   {
      // If paper, scissor wins
      if (_plrB->getType() == PAPER)
      {
         winner = _plrA;
      }
      // If scissor, tie
      else if (_plrB->getType() == SCISSOR)
      {
         winner = nullptr;
      }
      // If rock, rock wins
      else if (_plrB->getType() == ROCK)
      {
         winner = _plrB;
      }
      else{
         // Illegal state, just exit
         exit(-1);
      }
   }
   // Illegal state, throw errow and exit
   else{
      exit(-1);
   }
   cout << "You selected: " << (*_plrA) << endl;
   cout << "Computer selected: " << (*_plrB) << endl;
   // Winner is decided, now update score of winner
   if (winner == nullptr)
   {
      cout << "It was a tie!" << endl;
      _ties++;
   }
   else if (winner == _plrA)
   {
      cout << "You won!" << endl;
      _plrAScore++;
   }
   else if (winner == _plrB)
   {
      cout << "Computer won, sad day :(" << endl;
      _plrBScore++;
   }
   // Illegal state, exit
   else
   {
      exit(-1);
   }
   _printStatus();
}

Tool * RPSGame::_createTool(char tool)
{
   if (tool == SCISSOR)
   {
      return new Scissor();
   }
   else if (tool == PAPER)
   {
      return new Paper();
   }
   else if (tool == ROCK)
   {
      return new Rock();
   }
   else
   {
      exit(-1);
   }
}

RPSGame::RPSGame()
{
   _plrB = nullptr;
   _plrA = nullptr;
   _ties = 0;
   _plrAScore = 0;
   _plrBScore = 0;
   
}
