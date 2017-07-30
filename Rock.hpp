/*********************************************************************
 ** Program name: Rock
 ** Author:       Group 16
 ** Date:         July 24th 2017
 ** Description:  Includes class definition of Rock, which inherents
 **               from tool. Very simple class, with very little
 **               modification from tool, just sets type differently
 **
 *********************************************************************/

#ifndef GROUP16_ROCK_HPP
#define GROUP16_ROCK_HPP

#include <stdio.h>
#include "Tool.hpp"


/*********************************************************************
 ** Rock class
 **
 ** Inherents from Tool class, has very littl added functionality.
 ** Sets type to Rock (represented by _type = 'p'
 ** Uses inhereted functions for everything, only difference is
 ** setting type
 *********************************************************************/
class Rock: public Tool
{
public:
   // Default constructor
   Rock();
   // Constructor which sets strength
   Rock(int strength);
};


#endif /* GROUP16_ROCK_HPP */
