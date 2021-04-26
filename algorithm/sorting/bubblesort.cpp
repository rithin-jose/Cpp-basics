#include<iostream>

using namespace std;

void input(int a[],int size)
{
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
}

void output(int a[],int size)
{
    cout<<"Elements of array are: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

}

void bubbleSort(int arr[],int size)
{
   int i,j,temp;

   for(i=0;i<size-1;i++)
   {
       for(j=0;j<size-i-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }
}

int main()
{
    int a[10],n,number,index;

    cout<<"Enter the no. of array: ";
    cin>>n;

    input(a,n);

    bubbleSort(a,n);

    output(a,n);

    return 0;
}

/*
    Complexity for the three cases:
        Best Case:      O(n)
        Average Case:   O(n^2)
        Worst Case:     O(n^2)

*/

/********************************************************
Title: Bubble Sort
Author: CAC
Date: 26th April 2021
Description:
This code was implemented on day 28 of 100 days of code
*********************************************************/