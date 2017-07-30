/*********************************************************************
 ** Program name: Tool
 ** Author:       Craig Ricker
 ** Date:         July 24th 2017
 ** Description:  Abstract class definition of a tool, each tool
 **               has a strength, type and the ability to update the
 **               strength.
 **
 **               Need to implement a method for comparing
 **               different tools. This could be an overloading of the
 **               >> operator perhaps?
 **               Implemented all overloader opperators
 **
 **               Game program updates the strengths based on who is
 **               playing one another, but allows the Tool base class
 **               to decide who is the winner based on who has the
 **               higher score.
 **
 *********************************************************************/

#include "Tool.hpp"
#include <iostream>
#define PAPER 'p'
#define SCISSOR 's'
#define ROCK 'r'

using namespace std;


/*********************************************************************
 ** Input:	str int  - strength to set for Tool
 **
 ** Return: NA
 **
 ** Description:  Constructor which sets strength equal to input,
 **               and type to input char
 **
 **
 *********************************************************************/
Tool::Tool(int str, char type)
{
   _strength = str;
   _type = type;
}

/*********************************************************************
 ** Input:	None
 **
 ** Return: NA
 **
 ** Description:  Default constructor, just sets strength to 1
 **
 **
 *********************************************************************/
Tool::Tool()
{
   _strength = 1;
}


/*********************************************************************
 ** Input:	None
 **
 ** Return: int   -  strength of tool
 **
 ** Description:  Simple getter for _strength
 **
 **
 *********************************************************************/
int Tool::getStrength()
{
   return _strength;
}


/*********************************************************************
 ** Input:	None
 **
 ** Return: char   -  type of tool
 **
 ** Description:  Simple getter for _type
 **
 **
 *********************************************************************/
char Tool::getType()
{
   return _type;
}

/*********************************************************************
 ** Input:	int   -  strength of tool
 **
 ** Return: None
 **
 ** Description:  Simple setter for _strength
 **
 **
 *********************************************************************/
void Tool::setStrength(int newStr)
{
   _strength = newStr;
}


