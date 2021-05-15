#include<iostream>

using namespace std;

int max(int* x,int *y)
{
    if(*x>*y)
    {
        return *x;
    }
    return *y;
}

int main()
{
    int a,b;

    cout<<"Entert two nos.";
    cin>>a>>b;

    int c = max(&a,&b);
    cout<<"Max "<<c;

    return 0;
}

/*
 
*/

/********************************************************
Title: Pointer to function
Author: CAC
Date: 15th May 2021
Description:
This code was implemented on day 48 of 100 days of code
*********************************************************/