#include<iostream>

using namespace std;

int main()
{
    int a[3][3],i,j;

    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Entered Array elements are: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;         //next row is printed in the next line using this line
    }

    return 0;
}

/*

    A 2D array are similar to a matrix. with index starting from 0.
    Eg.
        0   1   2
       ___ ___ ___ 
    0 |___|___|___|
    1 |___|___|___|
    2 |___|___|___|

    we declare a 2D array as follows:
    data_type a[no. of rows][no. of columns];

    eg. int a[3][3];

    To input and output a 2D Array we use two loops
    with control variables i and j.(row-wise or column-wise)


    Breakdown of output:
    Initially the control variable i has the value 0
    where j loops till column size and print the first row

    i will iterate and get the value 1 and j loops till column size
    and prints the second row.

    this continues till column size.

*/

/********************************************************
Title: Input output 2D array
Author: CAC
Date: 20th April 2021
Description:
This code was implemented on day 23 of 100 days of code
*********************************************************/