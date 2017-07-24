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

#ifndef RICKERCR_TOOL_HPP
#define RICKERCR_TOOL_HPP

#include <stdio.h>

class Tool
{
   protected:
   int _strength;    // Strength of the tool
   char _type;       // Type of tool
   
   public:
   // Update strength to new value
   virtual void _setStrength(int newStrength) = 0;
   friend bool operator<(const Tool& LHS, const Tool& RHS)
   {
      return LHS._strength < RHS._strength;
   };
   friend bool operator> (const Tool& LHS, const Tool& RHS)
   { return RHS < LHS; };
   friend bool operator<=(const Tool& LHS, const Tool& RHS)
   { return !(LHS > RHS); };
   friend bool operator>=(const Tool& LHS, const Tool& RHS)
   { return !(LHS < RHS); };
   
   friend bool operator==(const Tool& LHS, const Tool& RHS)
   {return LHS._strength == RHS._strength;};
   friend bool operator!=(const Tool& LHS, const Tool& RHS)
   { return !(LHS == RHS); };
};

#endif /* RICKERCR_TOOL_HPP */
