#include<iostream>
#include<conio.h>

using namespace std;

void add();         //void since no value is returning

int main()
{
    add();
    return 0;
}

void add()
{
    int i,j;
    cout<<"Enter two nos.";

    cin>>i>>j;
    cout<<"Sum "<<(i+j);
}


/********************************************************
Title: Function without parameter not returning value.
Author: CAC
Date: 4th April 2021
Description:
This code was implemented on day 7 of 100 days of code
*********************************************************/