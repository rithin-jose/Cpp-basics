#include<iostream>

using namespace std;
 
int main()
{
    typedef unsigned long int ui;            //ui will be an alis for unsigned long int
    ui x=5;

    cout<<x<<endl;

    return 0;
}
/*
    typedef keyword is used to assign a new name to any 
    existing data-type.

    For example, if we want to declare some variables of type 
    unsigned int, we have to write unsigned int in a program 
    and it can be quite hectic for some of us. So, we can 
    assign a new name of our choice for unsigned int using 
    typedef which can be used anytime we want to use unsigned 
    int in a program.

    Following is the syntax of typedef
        typedef current_name new_name;
*/

/********************************************************
Title: Enum 
Author: CAC
Date: 19th April 2021
Description:
This code was implemented on day 22 of 100 days of code
*********************************************************/