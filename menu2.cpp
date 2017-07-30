/*********************************************************************
 ** Program name: menu2
 ** Author:       Craig Ricker
 ** Date:         July 9th 2017
 ** Description:  This is a collection of helper functions that helps
 **               build a menu, check and accept user input.
 *********************************************************************/

#include "menu2.hpp"

#include <stdio.h>
#include <iostream>
#include <limits>
#include <list>

using namespace std;


/*********************************************************************
 ** Input:     none
 ** Return:    int - a successful int that user inputs
 **
 ** Description:  Prompts the user, and through the use of helper
 **               functions, will not return until an integer is entered
 *********************************************************************/
int getInt()
{
   string numberCheck;
   cin.clear();
   cin >> numberCheck;
   
   while (!isPosInt(numberCheck))
   {
      cout << "Please make a valid choice" << endl;
      cin.clear();
      cin.ignore(256,'\n');
      cin >> numberCheck;
   }
   return stoi(numberCheck);
}


/*********************************************************************
 ** Input:     string input - user entry to check if is an integer or not
 ** Return:    bool - indicate true if integer, false if not
 **
 ** Description:  Decides if user input is an integer or not
 *********************************************************************/
bool isPosInt(string input)
{
   // Loop through each icon making sure it is a digit
   for(int charX = 0; charX < (int) input.length(); charX++)
   {
      // If it isn't, return false
      if(!isdigit(input[charX]))
         return false;
   }
   return true;
}

/*********************************************************************
 ** Input:     int lower  - lower range of acceptable
 **            int upper   - upper range of acceptable
 ** Return:    int - the integer entered within acceptable range
 **
 ** Description:  Prompts user to enter integer until one is entered
 **               within range
 *********************************************************************/
int getIntRange(int lower, int upper)
{
   // Prompt user to get an integer
   int intToTest = getInt();
   // Check to make sure it is within range
   while (intToTest < lower || intToTest > upper)
   {
      // If not, continue to prompt until acceptable integer is entered
      cout << "Enter a number within range " << lower << " and " << upper << endl;
      intToTest = getInt();
   }
   return intToTest;
}

/*********************************************************************
 ** Input:     string * promp    array of text to display for options
 **            int nOpts         number of options
 ** Return:    int - the integer of the option the user selected
 **
 ** Description:  Prints out all options, then forces the user
 **               to select one of the options within the range
 *********************************************************************/
int menu(string * prompt, int nOpts)
{
   for (int i = 0; i < nOpts; i++)
   {
      cout << "Enter " << i << " to " << prompt[i] << endl;
   }
   int choice = getIntRange(0, nOpts - 1);
   
   return choice;
}


