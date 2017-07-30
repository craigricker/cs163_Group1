/*********************************************************************
 ** Program name: Paper
 ** Author:       Group 16
 ** Date:         July 24th 2017
 ** Description:  Includes class definition of Paper, which inherents
 **               from tool. Very simple class, with very little 
 **               modification from tool, just sets type differently
 **
 *********************************************************************/

#ifndef GROUP16_PAPER_HPP
#define GROUP16_PAPER_HPP

#include <stdio.h>
#include "Tool.hpp"


/*********************************************************************
 ** Paper class
 ** 
 ** Inherents from Tool class, has very littl added functionality.
 ** Sets type to PAPER (represented by _type = 'p'
 ** Uses inhereted functions for everything, only difference is
 ** setting type
 *********************************************************************/
class Paper: public Tool
{
public:
   // Default constructor
   Paper();
   // Constructor which sets strength
   Paper(int strength);
};


#endif /* GROUP16_PAPER_HPP */
