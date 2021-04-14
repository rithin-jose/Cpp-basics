#include<iostream>

using namespace std;

int main()
{

    int a[4];  //int array with size 4

    cout<<"Enter the elements of array: ";
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    cout<<"Elements of array are: ";
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }


    /*
        array can be initialized using curly brackets.
        and the size for it will be determined by the compiler.
    */
    int b[] = {10,30,50,23,33,45};

    cout<<endl<<endl<<"Elements of array b are: ";
    for(int i=0;i<4;i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}

/*

    array can have any data types such as int, float, double, char, etc 
    of any particular type.

    To input or output data we use a for loop.

    To access array we use it's index a[0],a[1],a[2],a[3].
    NOTE: Array index always start with 0.

*/

/********************************************************
Title: Input & output of Array
Author: CAC
Date: 14th April 2021
Description:
This code was implemented on day 17 of 100 days of code
*********************************************************/