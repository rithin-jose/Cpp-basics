#include<iostream>

using namespace std;

void input(int a[3][3])
{
    int i,j;
    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }


}

void output(int a[][3])
{
    int i,j;
    cout<<"Entered Array elements are: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int a[3][3];
    int b[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    input(a);
    output(a);
 
    return 0;
}

/*
    There are three was to pass an array to a function:
        - fun(int arr[10][10])
        - fun(int arr[][10])
        - fun(int* arr)             //Array pointer will be covered later

*/

/********************************************************
Title: Passing 2D array to a function
Author: CAC
Date: 20th April 2021
Description:
This code was implemented on day 23 of 100 days of code
*********************************************************/