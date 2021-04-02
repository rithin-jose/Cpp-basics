#include<iostream>

using namespace std;

int main()
{

    int a;
    cout<<"Enter the no. whose table is to be displayed: ";
    cin>>a;

    int i=1;
    do
    {
        cout<<a<<"*"<<i<<"="<<(a*i)<<endl;
        i++;
    }while(i<=10);

    return 0;
}

/*

    syntax:

    initialization expression;
    do
    {
        statements

        update_expression;
    } while (test_expression);
    

    there is a semi colon at the end of the loop.
    here the condition is checked while exiting the loop hence it is called 
    exit controlled loop.
    
*/

/********************************************************
Title: while loop
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/