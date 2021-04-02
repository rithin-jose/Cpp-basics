#include<iostream>

using namespace std;

int main()
{

    int n = 1;
    label:
    cout << n << " ";
    n++;
    if (n <= 10)
        goto label;
    return 0;
}


/*
    The goto statement in C++ also referred to as unconditional 
    jump statement can be used to jump from one point to another within a function.
    
    it jumps unconditionally to the specified label.

*/

/********************************************************
Title: Goto label statement
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/