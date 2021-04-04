#include<iostream>
#include<conio.h>

using namespace std;

int add();     

int main()
{
    int sum;
    sum = add();
    cout<<"Sum "<<sum;
    return 0;
}

int add()
{
    int i,j,sum;
    cout<<"Enter two nos. ";
    cin>>i>>j;

    sum = i+j;
    return sum;    
}


/********************************************************
Title: Function without parameter returning value.
Author: CAC
Date: 4th April 2021
Description:
This code was implemented on day 7 of 100 days of code
*********************************************************/