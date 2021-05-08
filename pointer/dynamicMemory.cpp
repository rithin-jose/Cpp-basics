#include<iostream>

using namespace std;

int main()
{
    int* ptr;
    ptr = new int(25);

    cout<<*ptr;
    delete ptr;

    // Array using dynamic memory allocation
    int n;
    cin>>n;
    int* ptr2 =  new(nothrow) int[n];
    if (!ptr2)
            cout << "allocation of memory failed\n";
    else
    {
        for (int i = 0; i < n; i++)
            ptr2[i] = i+1;

        cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << ptr2[i] << " ";
    }
    delete[] ptr2;

}
/*
    Dynamic memory allocation occurs with the use of the keyword new.
    The memory is deallocated with the use of delete keyword.

    It is the programmers responsibility of the programmer to deallocate the memory
    or elde there will be memory leak.
    or if the pointer is reassigned without deallocating the memory there will be memory leak.

    If not enough memory is there we use nothrow to return NULL pointer
        Eg. int* ptr2 =  new(nothrow) int[n];

*/

/********************************************************
Title: Pointer
Author: CAC
Date: 8th May 2021
Description:
This code was implemented on day 41 of 100 days of code
*********************************************************/