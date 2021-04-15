#include<iostream>

using namespace std;

int main()
{
    int x = 10;
    int& ref = x;

    cout<<"x = "<<x<<endl; 
    cout<<"ref = "<<ref<<endl<<endl;

    cout<<"Re-assigning ref"<<endl;
    ref = 20;

    cout<<"x = "<<x<<endl; 
    cout<<"ref = "<<ref<<endl<<endl;

    return 0;
}

/*
    When a variable is declared as a reference, it becomes an 
    alternative name for an existing variable. A variable can 
    be declared as a reference by putting ‘&’ in the declaration.

    Importance:
    If passing a large data  structure/large object to a function,
    without reference a new copy will be created which wastes
    CPU time and memory.

    Reference avoids this wastage by passing the real object.
*/

/********************************************************
Title: Pointer
Author: CAC
Date: 15th April 2021
Description:
This code was implemented on day 18 of 100 days of code
*********************************************************/