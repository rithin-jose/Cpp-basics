#include<iostream>
#include<conio.h>

using namespace std;

void add(int, int);         //void since no value is returning

int main()
{
    int i,j;
    cout<<"Enter two nos.";

    cin>>i>>j;
    
    add(i,j);
    return 0;
}

void add(int a,int b)
{
    cout<<"Sum "<<(a+b);
}


/********************************************************
Title: Function with parameter not returning value.
Author: CAC
Date: 4th April 2021
Description:
This code was implemented on day 7 of 100 days of code
*********************************************************/