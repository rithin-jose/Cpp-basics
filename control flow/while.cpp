#include<iostream>

using namespace std;

int main()
{

    int a;
    cout<<"Enter the no. whose table is to be displayed: ";
    cin>>a;

    int i=1;
    while(i<=10)
    {
        cout<<a<<"*"<<i<<"="<<(a*i)<<endl;
        i++;
    }

    return 0;
}

/*

    syntax:

    initialization expression;
    while (test_expression)
    {
        statements
    
    update_expression;
    }

*/

/********************************************************
Title: while loop
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/