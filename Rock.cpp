/*********************************************************************
 ** Program name: Rock
 ** Author:       Group 16
 ** Date:         July 24th 2017
 ** Description:  Includes class definition of Rock, which inherents
 **               from tool. Very simple class, with very little
 **               modification from tool, just sets type differently
 **
 *********************************************************************/

#include "Rock.hpp"
#include "Tool.hpp"
#define ROCK 'r'


/*********************************************************************
 ** Input:	None
 **
 ** Return: NA
 **
 ** Description:  Default constructor using Tool constructor, sets
 **               _strength to 1, and type to ROCK ('r')
 **
 **
 *********************************************************************/
Rock::Rock():
Tool(1, ROCK)
{}


/*********************************************************************
 ** Input:	strength int   -  strength of Tool
 **
 ** Return: NA
 **
 ** Description:  Constructor using Tool constructor, sets
 **               _strength to input, and type to ROCK ('r')
 **
 **
 *********************************************************************/
Rock::Rock(int strength):
Tool(strength, ROCK)
{}
