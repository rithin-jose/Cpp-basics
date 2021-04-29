#include<iostream>

using namespace std;

void display1(int arr[][3],int row,int column)
{
    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            /*
             To display left diagonal we check i==j
             To display right diagonal we check i+j == row-1 or i+j == column-1
            */

            if(i==j || i+j== row-1)
            {
                cout<<arr[i][j];
            }
            else
            {
                cout<<" ";// to fill the empty blocks
            }

            cout<<" ";
        }
        cout<<endl;
    }
}

void display2(int arr[][3],int row,int column)
{
    int i,j,sum=0;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==j || i+j== row-1)
            {
                sum+= arr[i][j];
            }
        }
    }
    cout<<"Sum is: "<<sum;
}


int main()
{
    int a[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row=3,column=3;

    display1(a,row,column);
    cout<<endl<<endl<<endl;

    display2(a,row,column);
    cout<<endl<<endl<<endl;

    return 0;
}

/*
    A 2D array can be considered as an array of arrays.

    Questions are:
    1. Display diagonal elements.
    2. Sum of diagonal elements.


*/

/********************************************************
Title: 2D array problems
Author: CAC
Date: 26th April 2021
Description:
This code was implemented on day 28 of 100 days of code
*********************************************************/