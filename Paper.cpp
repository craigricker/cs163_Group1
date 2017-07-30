/*********************************************************************
 ** Program name: Paper
 ** Author:       Group 16
 ** Date:         July 24th 2017
 ** Description:  Includes class definition of Paper, which inherents
 **               from tool. Very simple class, with very little
 **               modification from tool, just sets type differently
 **
 *********************************************************************/

#include "Paper.hpp"
#include "Tool.hpp"
#define PAPER 'p'


/*********************************************************************
 ** Input:	None
 **
 ** Return: NA
 **
 ** Description:  Default constructor using Tool constructor, sets 
 **               _strength to 1, and type to PAPER ('p')
 **
 **
 *********************************************************************/
Paper::Paper():
Tool(1, PAPER)
{}


/*********************************************************************
 ** Input:	strength int   -  strength of Tool
 **
 ** Return: NA
 **
 ** Description:  Constructor using Tool constructor, sets
 **               _strength to input, and type to PAPER ('p')
 **
 **
 *********************************************************************/
Paper::Paper(int strength):
Tool(strength, PAPER)
{}
