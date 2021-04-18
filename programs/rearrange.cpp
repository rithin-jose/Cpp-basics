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

// Question 4
void swap4(int arr[],int size)
{
    cout<<"Arrangment 4: "<<endl;
    int i,temp;
    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+(size/2)];
        arr[i+(size/2)]=temp;
    }
    display(arr,size);
    resetArray(arr,size);
}

// Question 5
void swap5(int arr[],int size)
{
    cout<<"Arrangment 5: "<<endl;
    int i,j,temp;
    for(i=0,j=size-1;i=j;i++,j--)     //two iterations can be simultaneously run separated by ,
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    display(arr,size);
    resetArray(arr,size);
}

//Pattern Question
void pattern()
{
    int arr[] = {1,2,3,4};
    int i,j;

    for(i=0;i<4;i++)        //controls row
    {
        for(j=0;j<=i;j++)   //controls column
        {
            cout<<arr[j];
        }
        cout<<endl;
    }
}    //will be much clear after 2D array Section



int main()
{
    int arr[] = {6,3,5,2,1,8,9,10,17,14};
    int size = sizeof(arr)/sizeof(arr[0]);

    swap(arr,size);
    swap2(arr,size);
    swap3(arr,size);
    swap4(arr,size);
    swap5(arr,size);
    pattern();

    return 0;
}

/*
    Consider the array:
       | 6| 3| 5| 2| 1| 8| 9| 10| 17| 14|

    Rearrange the array as following:
    Q1 | 3| 6| 2| 5| 8| 1| 10| 9| 14| 17|

    Q2 | 3| 5| 2| 1| 8| 9| 10| 17| 14| 6|

    Q3 | 14| 6| 3| 5| 2| 1| 8| 9| 10| 17|

    Q4 | 8| 9| 10| 17| 14| 6| 3| 5| 2| 1|

    Q5 |6 |3 |5 |2 |1 |8 |9 |10 |17 |14 |

    Consider the array
    |1|2|3|4|

    print the following:
    1
    1 2
    1 2 3
    1 2 3 4


*/

/********************************************************
Title: Rearranging array
Author: CAC
Date: 16th and 17th April 2021
Description:
This code was implemented on day 19 & 20 of 100 days of code
*********************************************************/