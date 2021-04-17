#include<iostream>

using namespace std;

//Function to Display the array
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" |";
    }
    cout<<endl<<endl;
}

//Function to reset the array to its original form before any arrangment
void resetArray(int arr[],int size)
{
    int arr1[] = {6,3,5,2,1,8,9,10,17,14};
    int i;

    for(i=0;i<size;i++)
    {
        arr[i]=arr1[i];
    }
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
    resetArray(arr,size);
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
    resetArray(arr,size);
}

// Question 3
void swap3(int arr[],int size)
{
    cout<<"Arrangment 3: "<<endl;
    int i,temp;
    for(i=size-1;i>0;i--)
    {
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    display(arr,size);
    resetArray(arr,size);
}


int main()
{
    int arr[] = {6,3,5,2,1,8,9,10,17,14};
    int size = sizeof(arr)/sizeof(arr[0]);

    swap(arr,size);
    swap2(arr,size);
    swap3(arr,size);

    return 0;
}

/*
    Consider the array:
       | 6| 3| 5| 2| 1| 8| 9| 10| 17| 14|

    Rearrange the array as following:
    Q1 | 3| 6| 2| 5| 8| 1| 10| 9| 14| 17|
    Q2 | 3| 5| 2| 1| 8| 9| 10| 17| 14| 6|
    Q3 | 14| 6| 3| 5| 2| 1| 8| 9| 10| 17|
    
    Consider the array:
        | 6| 3| 5| 2| 10| 8| 9| 10| 17| 14|
    
    Rearrange the array as following:
    Q4  | 6| 3| 5| 2| 1| 8| 9| 10| 17| 14|

*/

/********************************************************
Title: Rearranging array
Author: CAC
Date: 16th April 2021
Description:
This code was implemented on day 19 of 100 days of code
*********************************************************/