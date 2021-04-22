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

int binarySearch(int a[],int size,int number)
{
    int index=-1,beg,end,mid;

    beg=0;
    end=size-1;

    while (beg<=end)
    {
        mid = (beg+end)/2;
        if(a[mid] == number)
        {
            index = mid;
            break;
        }
        else if (number > a[mid])
        {
            beg = mid+1;
        }
        else
        {
            end = mid-1;
        }
        
    }
    
    return index;
}

int main()
{
    int a[10],n,number,index;

    cout<<"Enter the no. of array: ";
    cin>>n;

    input(a,n);
    sort(a,a+n);            //Sorting using std::sort()

    cout<<"Enter the no. to be searched ";
    cin>>number;

    index = binarySearch(a,n,number);

    if(index == -1)
    {
        cout<<"Number not found.";
    }
    else
    {
        cout<<number<<" found at index: "<<index<<" Position: "<<(index+1);
    }
    
    return 0;
}

/*
    Binary search only works for a sorted array. It is much efficient 
    than linear search.

    Complexity for the three cases:
        Best Case:      O(1)
        Average Case:   O(log n)
        Worst Case:     O(log n)

*/

/********************************************************
Title: Binary Search
Author: CAC
Date: 22th April 2021
Description:
This code was implemented on day 24 of 100 days of code
*********************************************************/