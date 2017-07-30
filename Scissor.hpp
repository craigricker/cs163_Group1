/*********************************************************************
 ** Program name: Scissor
 ** Author:       Group 16
 ** Date:         July 24th 2017
 ** Description:  Includes class definition of Scissor, which inherents
 **               from tool. Very simple class, with very little
 **               modification from tool, just sets type differently
 **
 *********************************************************************/

#ifndef GROUP16_SCISSOR_HPP
#define GROUP16_SCISSOR_HPP

#include <stdio.h>
#include "Tool.hpp"


/*********************************************************************
 ** Scissor class
 **
 ** Inherents from Tool class, has very littl added functionality.
 ** Sets type to SCISSOR (represented by _type = 's'
 ** Uses inhereted functions for everything, only difference is
 ** setting type
 *********************************************************************/
class Scissor: public Tool
{
public:
   // Default constructor
   Scissor();
   // Constructor which sets strength
   Scissor(int strength);
};


#endif /* GROUP16_SCISSOR_HPP */
