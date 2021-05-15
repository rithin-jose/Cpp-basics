#include<iostream>

using namespace std;

int main()
{
    int x=10;

    int* ptr;
    ptr = &x;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int** ptr1;
    ptr1 = &ptr;
    cout<<ptr1<<endl<<*ptr1<<endl<<**ptr1;

    return 0;
}

/*
    ptr1 points to ptr which inturn points to variable x.
*/

/********************************************************
Title: Pointer to pointer
Author: CAC
Date: 15th May 2021
Description:
This code was implemented on day 48 of 100 days of code
*********************************************************/