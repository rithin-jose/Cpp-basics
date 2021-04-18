#include<iostream>
#include<cstring>

using namespace std;

union Example{
    int x,y;
};

int main()
{
    Example e1;

    e1.x=3;

    cout<<"x: "<<e1.x<<endl;
    cout<<"y: "<<e1.y;

    return 0;
}

/*
    The keyword 'union' is used to define a union.
    Syntax:
    union union_name {
        member definition;
    } union_variables;

    union_variable are optional and can be defined in main()

    all members in a union shares the same memory and the size of memory is
    decided on the bases of the data type with the largest memory size;

    eg.
    union Example{
        int a;
        char c;
        float f;
        double d;
    };

    the size would be 8 ad doble is the largest.
    
    <-----8 byte---->
    | | | | | | | | |
    <c>
    <---a-->
    <---f-->
    <-------d-------->

    Note:size of int on my compiler is 4 byte.
    all the data members sharing the data space will overlap each other.
*/

/********************************************************
Title: Union
Author: CAC
Date: 18th April 2021
Description:
This code was implemented on day 21 of 100 days of code
*********************************************************/