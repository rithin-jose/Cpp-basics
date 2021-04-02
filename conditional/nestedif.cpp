#include<iostream>

using namespace std;

int main()
{
    int i = 10;
  
    if (i == 10)
    {
        if (i < 15)                             //this executes only if i==10
           printf("i is smaller than 15\n");
  
        if (i < 12)
            printf("i is smaller than 12 too\n");

        else
            printf("i is greater than 15");
    }
    
    return 0;
}


/*
    Syntax:

    if (condition1) 
    {
        Executes when condition1 is true
        if (condition2) 
        {
            Executes when condition2 is true
        }
    }

*/

/********************************************************
Title: Nested If-else
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/