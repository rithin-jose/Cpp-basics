#include<iostream>

using namespace std;

void displayArray(int arr[][3],int row,int column)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

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

void display3(int arr[][3],int row,int column)
{
    int i,j,sum=0;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i+j <= row-1)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void display4(int arr[][3],int row,int column)
{
    int i,j,sum=0;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i+j >= row-1)
            {
                cout<<arr[i][j]<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void display5(int arr[][3],int row,int column)
{
    int i,j,sum=0;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(j==column/2 || i==row/2)
            {
                cout<<arr[i][j]<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void display6(int arr[][3],int row,int column)
{
    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==0 || j==0 || i==row-1 || j==column-1)
            {
                cout<<arr[i][j]<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void display7(int arr[][3],int row,int column)
{
    int i,j,temp;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==0)
            {
                temp = arr[i][j];
                arr[i][j] = arr[row-1][j];
                arr[row-1][j] = temp;
            }
        }
    }

    displayArray(arr,row,column);
  
}

void display8(int arr[][3],int row,int column)
{
    int i,j,temp;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(j==0)
            {
                temp = arr[i][j];
                arr[i][j] = arr[i][column-1];
                arr[i][column-1] = temp;
            }
        }
    }

    displayArray(arr,row,column);
  
}

void transpose(int arr[][3],int row,int column)
{
    int i,j,temp,a[3][3];

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            a[j][i] = arr[i][j];
        }
    }

    displayArray(a,row,column);
  
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

    display3(a,row,column);
    cout<<endl<<endl<<endl;

    display4(a,row,column);
    cout<<endl<<endl<<endl;

    display5(a,row,column);
    cout<<endl<<endl<<endl;

    display6(a,row,column);
    cout<<endl<<endl<<endl;

    display7(a,row,column);
    cout<<endl<<endl<<endl;

    display8(a,row,column);
    cout<<endl<<endl<<endl;

    transpose(a,row,column);
    cout<<endl<<endl<<endl;

    return 0;
}

/*
    A 2D array can be considered as an array of arrays.

    Questions are:
    1. Display diagonal elements.
    2. Sum of diagonal elements.
    3. Display upper half diagonal elements.
    4. Display Lower half diagonal elements.
    5. Display middle column and middle row.
    6. Display elements on the edge of array.
    7. Swap first and last row of array.
    8. Swap first and last column of array.
    9.Transpose of matrix.

    Index for reference:
         ______________
        | 00 | 01 | 02 |
        ----------------
        | 10 | 11 | 12 |
        ----------------
        | 20 | 21 | 22 |
         ______________

*/

/********************************************************
Title: 2D array problems
Author: CAC
Date: 26th April 2021
Description:
This code was implemented on day 28 of 100 days of code
*********************************************************/