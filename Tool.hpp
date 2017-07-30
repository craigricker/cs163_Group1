/*********************************************************************
 ** Program name: Tool
 ** Author:       Group 16
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

#ifndef GROUP16_TOOL_HPP
#define GROUP16_TOOL_HPP

#include <stdio.h>



/*********************************************************************
 ** Tool class
 **
 ** Tool is a purely virtual function, that will be used to create
 ** different tool classes
 **
 **
 ** Data Members:
 ** _strength: strength of the tool
 ** _type:  type of the tool
 **
 ** Constructors:
 ** Tool(int, char) - sets the strength and the type
 ** Tool()  - Sets strength to 1
 ** 
 **
 ** Operators:
 ** Overload all operators inline
 **
 ** Functions:
 ** getType() - getter for type
 ** getStrength() - getter for strength
 ** setStrength() - setter for stregnth
 *********************************************************************/
class Tool
{
   protected:
   int _strength;    // Strength of the tool
   char _type;       // Type of tool
   
   public:
   Tool(int str, char type);
   Tool();
   // Update strength to new value
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
   
   // Get tye type of tool
   char getType();
   // Get strength of tool
   int getStrength();
   // Update strength
   void setStrength(int newStr);
};

#endif /* GROUP16_TOOL_HPP */