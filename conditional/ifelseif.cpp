#include<iostream>

using namespace std;

int main()
{
    int a=20;

    if(a==10)
    {
        cout<<"a has a value of 10";
    }

    else if(a==15)
    {
        cout<<"a has a value of 15";
    }

    else if(a==20)
    {
        cout<<"a has a value of 20";
    }

    else
    {
        cout<<"not sure what is a's value";
    }

    
    return 0;
}


/*
    Syntax:

    if (condition)
        statement;
    else if (condition)
        statement;
    .
    .
    else
        statement;

    here if is evaluated and then the else if when the if is false and continues till last else if.
    finally the else is run when no condition matches.

*/

/********************************************************
Title: If-else-if ladder
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/