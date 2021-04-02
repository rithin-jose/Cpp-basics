#include<iostream>

using namespace std;

int main()
{

    int a;
    cout<<"Enter the no. whose table is to be displayed: ";
    cin>>a;

    for(int i=1;i<=10;i++)
    {
        cout<<a<<"*"<<i<<"="<<(a*i)<<endl;
    }

    return 0;
}

/*

    syntax:

    for (initialization expr; test expr; update expr)
    {    
        body of the loop
        statements we want to execute
    }

*/

/********************************************************
Title: For loop
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/