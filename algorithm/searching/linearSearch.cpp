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

int linearSearch(int a[],int size,int number)
{
    int index=-1;
    for(int i = 0;i<size;i++)
    {
        if(a[i]==number)
        {
            index = i;
            break;
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

    cout<<"Enter the no. to be searched ";
    cin>>number;

    index = linearSearch(a,n,number);

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
    Linear search works on both sorted and unsorted array but it is a 
    little inefficient.

    The time complexity of the above algorithm is O(n). 

    Linear search is rarely used practically because other search 
    algorithms such as the binary search algorithm and hash tables 
    allow significantly faster-searching comparison to Linear search.

    Complexity for the three cases:
    Best Case:      O(1)
    Average Case:   O(n)
    Worst Case:     O(n)

*/

/********************************************************
Title: Input output
Author: CAC
Date: 22th April 2021
Description:
This code was implemented on day 24 of 100 days of code
*********************************************************/