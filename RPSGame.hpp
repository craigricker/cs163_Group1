/*********************************************************************
 ** Program name: RPSGame
 ** Author:       Group 16
 ** Date:         July 24th 2017
 ** Description:  Class definition of RPSGame, no self executing code
 **               For indepth explanation of class, see class header
 *********************************************************************/

#ifndef GROUP16_RPSGAME_HPP
#define GROUP16_RPSGAME_HPP

#include <iostream>
#include "Paper.hpp"
#include "Rock.hpp"
#include "Scissor.hpp"
#include "Tool.hpp"



/*********************************************************************
 ** RPS class
 **
 ** RPS class has a pointer to two tools, _plrA which is the human
 ** player, and _plrB which is the computer player
 ** It has three member ints, _plrAScore, _plrBScore, and _ties
 ** These track the score of the game
 **
 **
 ** _printStatus prints out the current score
 ** _createTool returns a pointer to a newly created tool, based
 **   on the char input. r = rock, p = paper, s = scissor
 ** _play creates a new tool for human player based on input,
 **   and randomly selects a tool type for the computer player
 **   it then decides who wins, prints the choices, updates the score
 **   and prints out the new score
 **   Important to delete the pointers at the end of _play()
 ** Destructor: _plrA and _plrB pointers should already have been 
 **   deleted, but deleted just incase.
 *********************************************************************/
class RPSGame
{
private:
   Tool * _plrA;
   Tool * _plrB;
   int _plrAScore;
   int _plrBScore;
   int _ties;
   
   void _printStatus();
   Tool * _createTool(char);
   
   
   
public:
   void _play(char);
   RPSGame();
   ~RPSGame();
   
};

#endif /* GROUP16_RPSGAME_HPP */
