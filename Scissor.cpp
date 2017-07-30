/*********************************************************************
 ** Program name: Scissor
 ** Author:       Group 16
 ** Date:         July 24th 2017
 ** Description:  Includes class definition of Scissor, which inherents
 **               from tool. Very simple class, with very little
 **               modification from tool, just sets type differently
 **
 *********************************************************************/

#include "Scissor.hpp"
#include "Tool.hpp"
#define SCISSOR 's'


/*********************************************************************
 ** Input:	None
 **
 ** Return: NA
 **
 ** Description:  Default constructor using Tool constructor, sets
 **               _strength to 1, and type to Scissor ('s')
 **
 **
 *********************************************************************/
Scissor::Scissor():
Tool(1, SCISSOR)
{}


/*********************************************************************
 ** Input:	strength int   -  strength of Tool
 **
 ** Return: NA
 **
 ** Description:  Constructor using Tool constructor, sets
 **               _strength to input, and type to Scissor ('s')
 **
 **
 *********************************************************************/
Scissor::Scissor(int strength):
Tool(strength, SCISSOR)
{}
