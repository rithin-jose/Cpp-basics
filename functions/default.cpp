#include<iostream>

using namespace std;

void add(int a=10,int b=13)
{
    cout<<(a+b)<<endl;
}

int main()
{
    add(15,20);         //a=15,b=20
    add(16);            //a=16,b=13(default)
    add();              //a=10(default),b=13(default)

    return 0;
}

/*
    when an argument is not specified during function call the 
    values provided during function prtotype/defination is used

*/

/********************************************************
Title: Function with default arguments.
Author: CAC
Date: 5th April 2021
Description:
This code was implemented on day 8 of 100 days of code
*********************************************************/