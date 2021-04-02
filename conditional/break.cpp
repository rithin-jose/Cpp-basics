#include<iostream>

using namespace std;

int main()
{
     int i;
    for (i = 1; i <= 15; i++)
    {
        printf("%d\n", i);
        if (i == 10)
        {
            cout<<"i ==10";
            break;  //when i becomes 10, we break out of the loop
        }

    }

    return 0;
}


/*
    This loop control statement is used to terminate the loop. As soon as the break statement is 
    encountered from within a loop, the loop iterations stops there and control returns from the 
    loop immediately to the first statement after the loop.
*/

/********************************************************
Title: Break statement
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/