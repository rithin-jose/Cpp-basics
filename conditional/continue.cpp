#include<iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
            continue;
        else
            cout << i << " ";
    }

    return 0;
}


/*
    This loop control statement is just like the break statement. 
    The continue statement is opposite to that of break statement,
     instead of terminating the loop, it forces to execute the next 
     iteration of the loop.

*/

/********************************************************
Title: Continue statement
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/