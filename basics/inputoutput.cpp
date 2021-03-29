#include<iostream>

using namespace std;

int main()
{
    int a;

    cin>>a;     //takes an input fromthe user and binds that value to variable a

    cout<<a<<endl;    //takes the value bound to a and displays on the screen

    cerr<<"Unbuffered standard error stream"<<endl;
    clog<<"buffered standard error stream"<<endl;
    
    return 0;
}


/* 

Header files available in C++ for Input/Output operations are: 

 iostream: iostream stands for standard input-output stream. This header file contains definitions to objects like cin, cout, cerr etc.
 iomanip: iomanip stands for input output manipulators. The methods declared in this files are used for manipulating streams. This file contains definitions of setw, setprecision, etc.
 fstream: This header file mainly describes the file stream. This header file is used to handle the data being read from a file as input or data being written into the file as output.

 */

/********************************************************
Title: Input output
Author: CAC
Date: 30th march 2021
Description:
This code was implemented on day 2 of 100 days of code
*********************************************************/