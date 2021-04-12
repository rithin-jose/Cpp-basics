#include <iostream>
using namespace std;
  
int main(int argc, char** argv)
{
    cout << "You have entered " << argc
         << " arguments:" << "\n";
  
    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";
  
    return 0;
}

/*
    argc: argument count, is int and stores number of command-line arguments
    passed by the user including the name of the program. So if we pass 
    a value to a program, value of argc would be 2 (one for argument and 
    one for program name).

    argv: argument vector,  is array of character pointers listing all the arguments.
    If argc is greater than zero,the array elements from argv[0] to argv[argc-1] 
    will contain pointers to strings.

    Argv[0] is the name of the program , After that till argv[argc-1] every 
    element is command -line arguments.


    name of the program will give the entire path of where the program is 
    located(may vary with the compiler used)
*/

/********************************************************
Title: Command Line Argument
Author: CAC
Date: 11th April 2021
Description:
This code was implemented on day 14 of 100 days of code
*********************************************************/