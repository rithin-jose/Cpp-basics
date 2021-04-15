#include<iostream>

using namespace std;

int main()
{
    int a;
    int* b;     //pointer
    
    a=10;
    b=&a;

    cout<<"Content of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<" "<<endl<<endl;

    cout<<"Content of b: "<<b<<endl;
    cout<<"Address of b: "<<&b<<endl;
    
    return 0;
}

/*
    A pointer is a variable that stores the memory address as its value.

    A pointer variable points to a data type (like int or string) of the 
    same type, and is created with the * operator. The address of the 
    variable you're working with is assigned to the pointer.

    There are three ways to declare pointer variables:
        string* var; (preferred)
        string *var;
        string * var;


    & operator was used to create a reference variable. But it can also be used to 
    get the memory address of a variable; which is the location of where the variable 
    is stored on the computer.

*/

/********************************************************
Title: Pointer
Author: CAC
Date: 15th April 2021
Description:
This code was implemented on day 18 of 100 days of code
*********************************************************/