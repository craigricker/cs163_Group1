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


/*********************************************************************
 ** Input:	plrA Tool  *- pointer to a tool to compare str
 **         plrB Tool * - pointer to a tool to compare str
 **
 ** Return: Tool *   - who won
 **
 ** Description:  Uses the logic as dictated by the group 1 assignment
 **               Rock doubles vs scissor, halved vs paper etc
 **               In addition, this logic is used to decide which
 **               player wins the game, as based on Piazza feedback
 **
 *********************************************************************/
Tool * Tool::fight(Tool * plrA, Tool * plrB)
{
   
   if (plrA->getType() == ROCK)
   {
      if (plrB->getType() == PAPER)
      {
         plrA->setStrength(plrA->getStrength() / 2);
      }
      else if (plrB->getType() == SCISSOR)
      {
         plrA->setStrength(plrA->getStrength() * 2);
      }
   }
   else if (plrA->getType() == PAPER)
   {
      if (plrB->getType() == SCISSOR)
      {
         plrA->setStrength(plrA->getStrength() / 2);
      }
      else if (plrB->getType() == ROCK)
      {
         plrA->setStrength(plrA->getStrength() * 2);
      }
   }
   else if (plrA->getType() == SCISSOR)
   {
      if (plrB->getType() == ROCK)
      {
         plrA->setStrength(plrA->getStrength() / 2);
      }
      else if (plrB->getType() == PAPER)
      {
         plrA->setStrength(plrA->getStrength() * 2);
      }
   }
   
   // Decide who is winner
   if (plrA->getStrength() > plrB->getStrength())
   {
      return plrA;
   }
   else if(plrB->getStrength() > plrA->getStrength())
   {
      return plrB;
   }
   else{
      return nullptr;
   }
}

/*********************************************************************
 ** Input:	os ostream &   - stream to be printed out to
 **         actTool Tool & - tool to have information printed out to
 **
 ** Return: ostream & - ostream with printed information
 **
 ** Description:  Oversloads << operator to print out basic information
 **               on the type of tool selected.
 **
 *********************************************************************/
ostream & operator <<(ostream& os, const Tool& actTool)
{
   if (actTool._type == PAPER)
   {
      os << "paper";
   }
   else if (actTool._type == ROCK)
   {
      os << "rock";
   }
   else if ( actTool._type == SCISSOR)
   {
      os << "scissor";
   }
   // Illegal state
   else{
      exit(-1);
   }
   return os;
}
