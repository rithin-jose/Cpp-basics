#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
  
int main()
{

    srand(time(0));
    int lower,upper,randomNo;

    cout<<"Enter lower limit ";
    cin>>lower;
    cout<<"Enter upper limit ";
    cin>>upper;

    randomNo = (rand() % (upper-lower+1)) + lower;
    cout<<"Random no: "<<randomNo;

    return 0;
}

/*
    Assume we need a no. between 10 and 20:

    upper-lower+1 = 11   ...(1)
    any number generated by rand() when modulus with (1) will be between 
    0-10 or 0-[(1)-1]

    and when lower is added to the final result we get a value between
    the desired range.


*/

/********************************************************
Title: Random numbers between a given range
Author: CAC
Date: 12th April 2021
Description:
This code was implemented on day 15 of 100 days of code
*********************************************************/