#include<iostream>
#include<algorithm>

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

int main()
{
    int arr[100],n,i,currentCount=0,mostOccured=0,mode=0;

    cout<<"Enter the no of elements: ";
    cin>>n;

    input(arr,n);
    sort(arr,arr+n);

    for(i=0;i<(n-1);i++)
    {
        if(arr[i]==arr[i+1])
        {
            currentCount++;
        }
        else
        {
            currentCount++;
            if(currentCount>mostOccured)
            {
                mostOccured=currentCount;
                mode=arr[i];
                currentCount = 0;
            }
        }
    }

    cout<<"Mode: "<<mode;

    return 0;
}

/*

    The most efficient way to find mode would be maps.
    so another verion will be made with maps.

*/

/********************************************************
Title: Mode
Author: CAC
Date: 25th April 2021
Description:
This code was implemented on day 28 of 100 days of code
*********************************************************/