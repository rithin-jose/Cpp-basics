#include<iostream>

using namespace std;

// Function prototype(Singanture)
void add();

int main()
{
    //Function call
    add();

    return 0;
}


//Body of the function or function definition
void add()
{
    int x=10,y=20;
    cout<<(x+y);
}

/*

    if the body is written where the prototype(above main function) is we call it global function.
    variables above main() are called global variable and has the scope active through out the program.

*/

/********************************************************
Title: User defined Functions
Author: CAC
Date: 4th April 2021
Description:
This code was implemented on day 7 of 100 days of code
*********************************************************/