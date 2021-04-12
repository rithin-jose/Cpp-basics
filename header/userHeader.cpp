#include<iostream>
#include"myheader.h"


using namespace std;
  
int main()
{
    int sum;
    sum = addUDH(3,5);
    cout<<"Sum: "<<sum;
    return 0;
}

/*

    Assume a function add() that takes two arguments a,b
    the program for add may be required in many programs and 
    rather than replicating it in multiple programs it will be better 
    to place it in a used defined header file.

    Note: 
    - the example taken is simple and in real life much complex 
      piece of code is placed in a header file.
    - the header file is only available with the programer and has to be 
      added with source code to run on other computers.

*/

/********************************************************
Title: User Defined header file
Author: CAC
Date: 12th April 2021
Description:
This code was implemented on day 15 of 100 days of code
*********************************************************/