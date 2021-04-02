#include<iostream>

using namespace std;

int findAverage(int w,int x,int y,int z)
{
    int s = (w+x+y+z)/4;
    return s;           //returns the value s to main function
}

int main()
{
    int a,b,c,d,average;

    cout<<"enter 4 nos: ";
    cin>>a>>b>>c>>d;

    average = findAverage(a,b,c,d);                 //function that finds average more details will be in function section

    cout<<average;

    return 0;
}




/*
    The return in C++ returns the flow of the execution to the function 
    from where it is called. This statement does not mandatorily need 
    any conditional statements. As soon as the statement is executed, 
    the flow of the program stops immediately and return the control from
    where it was called. The return statement may or may not return anything 
    for a void function, but for a non-void function, a return value is must be returned.

*/

/********************************************************
Title: Return statements
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/