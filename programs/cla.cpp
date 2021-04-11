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

/********************************************************
Title: Command Line Argument
Author: CAC
Date: 11th April 2021
Description:
This code was implemented on day 14 of 100 days of code
*********************************************************/