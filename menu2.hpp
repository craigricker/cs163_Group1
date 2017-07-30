/*********************************************************************
 ** Program name: menu2
 ** Author:       Craig Ricker
 ** Date:         July 9th 2017
 ** Description:  This is a collection of helper functions that helps
 **               build a menu, check and accept user input.
 *********************************************************************/

#ifndef menu2_hpp
#define menu2_hpp

#include <stdio.h>
#include <iostream>
using namespace std;



/*********************************************************************
 ** Input:     string input - user entry to check if is an integer or not
 ** Return:    bool - indicate true if integer, false if not
 **
 ** Description:  Decides if user input is an integer or not
 *********************************************************************/
bool isPosInt(string);

/*********************************************************************
 ** Input:     none
 ** Return:    int - a successful int that user inputs
 **
 ** Description:  Prompts the user, and through the use of helper
 **               functions, will not return until an integer is entered
 *********************************************************************/
int getInt();

/*********************************************************************
 ** Input:     int lower  - lower range of acceptable
 **            int upper   - upper range of acceptable
 ** Return:    int - the integer entered within acceptable range
 **
 ** Description:  Prompts user to enter integer until one is entered
 **               within range
 *********************************************************************/
int getIntRange(int lower, int upper);

/*********************************************************************
 ** Input:     string * promp    array of text to display for options
 **            int nOpts         number of options
 ** Return:    int - the integer of the option the user selected
 **
 ** Description:  Prints out all options, then forces the user
 **               to select one of the options within the range
 *********************************************************************/
int menu(string * prompt, int nOpts);


#endif /* menu2_hpp */


