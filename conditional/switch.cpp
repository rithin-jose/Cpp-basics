#include<iostream>

using namespace std;

int main()
{
    int ch;

    cin>>ch;

    switch (ch)
    {
        case 1: 
                cout<<"You pressed 1";
                break;
        case 2: 
                cout<<"You pressed 2";
                break;
        case 3: 
                cout<<"You pressed 3";
                break;
        case 4: 
                cout<<"You pressed 4";
                break;
        case 5: 
                cout<<"You pressed 5";
                break;
        default:
                cout<<"Default statement => not sure wha you pressed";
    }

    return 0;
}


/*
    Syntax:

    switch (n)
    {
        case 1: // code to be executed if n = 1;
            break;
        case 2: // code to be executed if n = 2;
            break;
        default: // code to be executed if n doesn't match any cases
    }

    default condition works if no case matchs.
    If break statement is not used after a case matched all statements 
    below it and the default stmt also runs along with it.
*/

/********************************************************
Title: Input output
Author: CAC
Date: 2nd April 2021
Description:
This code was implemented on day 5 of 100 days of code
*********************************************************/