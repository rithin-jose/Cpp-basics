#include<iostream>

using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};

    int* ptr;
    ptr = arr;

    cout<<*arr<<endl;
    cout<<*ptr<<endl;

    ptr= ptr+2;
    cout<<*ptr;
    
    return 0;
}

/*
    Array name is a pointer that points to the zeroth block
    of the array.

    the pointer can move around but not the array name.
*/

/********************************************************
Title: Pointer
Author: CAC
Date: 7th May 2021
Description:
This code was implemented on day 40 of 100 days of code
*********************************************************/