#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int x,y;

    cout<<"Enter two nos.: ";
    cin>>x>>y;

    //with temprary variable
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl; 

    //without temprary variable(+)
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<" "<<y<<endl; 

    //without temprary variable(*,/)
    x = x*y;
    y = x/y;
    x = x/y;
    cout<<x<<" "<<y<<endl; 

    //without temprary variable(XOR)
    x = x^y; 
    y = x^y; 
    x = x^y; 
    cout<<x<<" "<<y<<endl; 


    return 0;
}

/*
    exmple: x = 10, y=20


    temp = x;   temp=10 , x= 10, y=20
    x = y;      temp=10 , x= 20, y=20
    y = temp;   temp=10 , x= 20, y=10


    x = x+y;    x=30, y=20
    y = x-y;    x=30, y=10
    x = x-y;    x=20, y=10

    x = x*y;    x200, y=20
    y = x/y;    x=200, y=10
    x = x/y;    x=10, y=20

    x=0000 1010, y= 0001 0100
    x = x^y;    x=0001 1110, y= 0001 0100
    y = x^y;    x=0000 1010, y= 0000 1010
    x = x^y;    x=0001 0100, y= 0000 1010

*/

/********************************************************
Title: Swaping nos.
Author: CAC
Date: 18th April 2021
Description:
This code was implemented on day 21 of 100 days of code
*********************************************************/