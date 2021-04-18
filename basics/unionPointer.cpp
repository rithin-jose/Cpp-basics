#include<iostream>
#include<cstring>

using namespace std;

union Example{
    int x;
    char y;
};

int main()
{
    union Example e1;
    e1.x = 65;
  
    // p2 is a pointer to union p1
    union Example* e2 = &e1;

    cout<<e2->x<<endl;
    cout<<e2->y;


  
    return 0;
}

/*
    Dot operator(.) is used to normally access members of a structure or union.
    Arrow Operator(->) operator exists to access the members of the structure 
    or the unions using pointers.
*/

/********************************************************
Title: Pointer to Union
Author: CAC
Date: 18th April 2021
Description:
This code was implemented on day 21 of 100 days of code
*********************************************************/