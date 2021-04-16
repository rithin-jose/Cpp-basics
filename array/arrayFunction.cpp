#include<iostream>

using namespace std;

void func1(int arr[6])
{
    cout<<"Function 1"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
}

void func2(int arr[],int size)
{
    cout<<"Function 2"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

void func3(int* arr,int size)
{
    cout<<"Function 3"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[]={1,2,3,4,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    func1(arr);

    func2(arr,n);
    func3(arr,n);

    return 0;
}

/*
    There are three was to pass an array to a function:
        - fun(int arr[10])
        - fun(int arr[])
        - fun(int* arr)
*/

/********************************************************
Title: Passing Array to function
Author: CAC
Date: 16th April 2021
Description:
This code was implemented on day 18 of 100 days of code
*********************************************************/