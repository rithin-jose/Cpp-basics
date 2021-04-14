#include<iostream>

using namespace std;

int main()
{
    char a[100],b[100];

    // cout<<"Enter a string: ";
    // cin>>a;
    // cout<<"The word entred is: "<<a<<endl;
    
    cout<<"Enter a string: ";
    cin.get(b,100);
    cout<<"The word entred is: "<<b;
    cout<<"Enter a string: ";
    cin.get(a,100);
    cout<<"The word entred is: "<<a;



    return 0;
}

/*
    When inputing a string using cin a blank space is considered as the termination of the string
    so in effect we can get a word not a line.

    this is why we use cin.get().

*/

/********************************************************
Title: Character Array
Author: CAC
Date: 13th April 2021
Description:
This code was implemented on day 16 of 100 days of code
*********************************************************/