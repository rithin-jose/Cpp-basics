#include<iostream>

using namespace std;

int main()
{

    cout<<"\tThis is \n how we use \'escape\' \"sequence\"  \v  is it intresting\? \\ ";

    /* 
        while representing a string we can use '' inside a "" without making it an escape sequence
        the reverse is not possible as '' is used to represent a character
    */ 
    cout<<"example ' of te same";


    return 0;
}


/*
    Nongraphic characters can be expressed by means of escape sequences.
    Eg.
    \t - tab
    \a - Alert/bell
    \b - Backspace
    \n - line feed/next line
    \v - verticle tab
    \' - single quote
    \" - double quote
    \? - question mark
    \\ - backslash
    \0 - string termination character

*/

/********************************************************
Title: Escape Sequence
Author: CAC
Date: 1st April 2021
Description:
This code was implemented on day 4 of 100 days of code
*********************************************************/