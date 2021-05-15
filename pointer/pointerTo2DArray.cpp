#include<iostream>

using namespace std;

int main()
{
    int arr[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    cout<<**arr<<endl;
    cout<<**arr+2<<endl;
    cout<<**arr+6<<endl;

    return 0;
}

/*
    A 2D array can be considered as an array or array.
    Eg. 3x3 matrix 

    ------------------------------------------------
    |    __ __ __   |    __ __ __   |    __ __ __   |
    |   |__|__|__|  |   |__|__|__|  |   |__|__|__|  |
    |     0  1  2   |     0  1  2   |     0  1  2   |
    ------------------------------------------------
            0               1                 2

*/

/********************************************************
Title: Pointer to 2D array
Author: CAC
Date: 15th May 2021
Description:
This code was implemented on day 48 of 100 days of code
*********************************************************/