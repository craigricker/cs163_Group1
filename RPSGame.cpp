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


/*********************************************************************
 ** Input:	None
 **
 ** Return: None
 **
 ** Description:  Default constructor using Tool constructor, sets
 **               _strength to 1, and type to PAPER ('p')
 **
 **
 *********************************************************************/
void RPSGame::_printStatus()
{
   cout << "Human wins: " << _plrAScore << endl;
   cout << "Computer wins: " << _plrBScore << endl;
   cout << "Ties: " << _ties << endl;
}



/*********************************************************************
 ** Input:	playerChoice char - the type of Tool user selects
 **
 ** Return: None
 **
 ** Description:  Sets _plrA to the Tool type of input (playerChoice)
 **               Sets _plrB(computer) to a random tool
 **               Sends both to "fight" by using Tool::fight()
 **               Decides winner based on logic of RPS
 **               Based on who won, update score
 **               Print out information on score, and number of ties
 **
 **
 *********************************************************************/
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

   
   Tool * winner = nullptr;
   winner =Tool::fight(_plrA, _plrB);
   
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


/*********************************************************************
 ** Input:	tool char - tool selection to be created
 **
 ** Return: Tool * - newly created tool
 **
 ** Description:  Takes a char, and based on the char, creates a tool
 **               of that corresponding class
 **
 **
 *********************************************************************/
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


/*********************************************************************
 ** Input:	None
 **
 ** Return: NA
 **
 ** Description:  Default constructor of RPSGame, sets all fields to 
 **               zero for int, and nullptr for pointers.
 **
 **
 *********************************************************************/
RPSGame::RPSGame()
{
   _plrB = nullptr;
   _plrA = nullptr;
   _ties = 0;
   _plrAScore = 0;
   _plrBScore = 0;
   
}

/*********************************************************************
 ** Input:	None
 **
 ** Return: NA
 **
 ** Description:  Destructor, deletes pointers if they exist still
 **
 **
 *********************************************************************/
RPSGame::~RPSGame()
{
   if (_plrA != nullptr)
   {
      delete _plrA;
   }
   if (_plrB != nullptr)
   {
      delete _plrB;

   }
}
