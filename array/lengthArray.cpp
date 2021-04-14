#include<iostream>

using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50},len;

    // method 1
        len = sizeof(arr)/sizeof(arr[0]);
        cout<<"Length of array is: "<<len<<endl;
        /*
            sizeof(arr) = 5*4=20        [4= compiler size of int]
            sizeof(arr[0]) = 4
            sizeof(arr)/sizeof(arr[0]) = 20/4 = 5
        */
    
    // method 2
    int len2 = *(&arr + 1) - arr;
    cout<<"Length of array is: "<<len2<<endl;
    

    return 0;
}

/*
    There are two ways to find length of array:
    1. Using sizeof()
    2. Using pionter

*/

/********************************************************
Title: Finding length of array
Author: CAC
Date: 14th April 2021
Description:
This code was implemented on day 17 of 100 days of code
*********************************************************/