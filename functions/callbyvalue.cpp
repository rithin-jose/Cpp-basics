#include<iostream>

using namespace std;

void swap(int x,int y)  //formal parameters
{
    int temp;

    temp = x;
    x = y;
    y = temp;
    cout<<"During swap\t"<<x<<"\t"<<y<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter the values for a and b ";
    cin>>a>>b;

    cout<<"before swap\t"<<a<<"\t"<<b<<endl;
    swap(a,b);      //actual parameters
    cout<<"after swap\t"<<a<<"\t"<<b<<endl;
    return 0;
}

/*
    Here a copy of the values is passed to the function 
    and the effects are only seen in the function only.

    outside the function the effects are not seen.
*/

/********************************************************
Title: Function with call by value arguments.
Author: CAC
Date: 5th April 2021
Description:
This code was implemented on day 8 of 100 days of code
*********************************************************/