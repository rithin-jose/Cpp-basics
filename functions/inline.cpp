#include<iostream>

using namespace std;

// this function definition is copied from here.
inline void sum()
{
    int a,b;

    cout<<"Enter two nos. ";
    cin>>a>>b;

    cout<<"Sum: "<<(a+b);
}

int main()
{
    sum();
    //definition is pasted here.

    return 0;
}

/*
    When an inline function is called, the compiler replaces 
    all the calling statements with the function definition 
    at run-time. Every time an inline function is called, 
    the compiler generates a copy of the function’s code, 
    in place, to avoid the function call.


    Inline function reduces the overhead caused by the function call.

    Disadvantage is that when the function is called multiple times the 
    program becomes bulky.
*/

/********************************************************
Title: Inline Functions.
Author: CAC
Date: 5th April 2021
Description:
This code was implemented on day 8 of 100 days of code
*********************************************************/