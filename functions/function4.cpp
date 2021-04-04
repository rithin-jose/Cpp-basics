#include<iostream>
#include<conio.h>

using namespace std;

int add(int x, int b);

int main()
{
    int i,j,sum;
    cout<<"Enter two nos.";

    cin>>i>>j;
    
    sum=add(i,j);
    cout<<"Sum "<<sum;
    return 0;
}

int add(int a,int b)
{
    int sum;
    sum=a+b;

    return sum;
}


/********************************************************
Title: Function with parameter returning value.
Author: CAC
Date: 4th April 2021
Description:
This code was implemented on day 7 of 100 days of code
*********************************************************/