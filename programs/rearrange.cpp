#include<iostream>

using namespace std;

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" |";
    }
    cout<<endl<<endl;
}

// Question 1
void swap(int arr[],int size)
{
    cout<<"Arrangment 1: "<<endl;
    int i,temp;
    for(i=0;i<size;i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    display(arr,size);
}

// Question 2
void swap2(int arr[],int size)
{
    cout<<"Arrangment 2: "<<endl;
    int i,temp;
    for(i=0;i<size-1;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    display(arr,size);
}


int main()
{
    int arr[] = {6,3,5,2,1,8,9,10,17,14};
    int size = sizeof(arr)/sizeof(arr[0]);

    swap(arr,size);
    swap2(arr,size);

    return 0;
}

/*
    Consider the array:
       | 6| 3| 5| 2| 1| 8| 9| 10| 17| 14|

    Rearrange the array as following:
    - | 3| 6| 2| 5| 8| 1| 10| 9| 14| 17|
    - | 3| 5| 2| 1| 8| 9| 10| 17| 14| 6|
    -
*/

/********************************************************
Title: Rearranging array
Author: CAC
Date: 16th April 2021
Description:
This code was implemented on day 19 of 100 days of code
*********************************************************/