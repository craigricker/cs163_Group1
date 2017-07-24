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

// I'm not sure if this file is needed...we can transfer code over to it
// or perhaps entirely delete it.
