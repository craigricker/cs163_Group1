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
   
};

#endif /* GROUP16_RPSGAME_HPP */
