#include<math.h>
#include<iostream>

using namespace std;

int main()
{

    int a=-10;
    cout<<"Absolute value of -10: "<<abs(a)<<endl;
    cout<<"power(2 to the power 3): "<<pow(2,3)<<endl;
    cout<<"Square root of 625: "<<sqrt(625)<<endl;
    cout<<"Natural log of 100: "<<log(100)<<endl;
    cout<<"Common log of 100: "<<log10(100)<<endl<<endl;
    cout<<"Ceiling function of 3.367: "<<ceil(3.367)<<endl;
    cout<<"floor function of 3.567: "<<floor(3.567)<<endl;


    return 0;
}

/*

    abs(): gives the absolute value of a number
    pow(): takes two arguments(x,y) and returns x raised to y
    sqrt(): returns the sqaure root of a number
    log(): returns the natural log of the no.
    log10(): returns the common log of the no.
    ceil(): returns the integer value(upper value) from a float value  
    floor(): returns the integer value(lower value) from a float value  

*/

/********************************************************
Title: Math.h
Author: CAC
Date: 8th April 2021
Description:
This code was implemented on day 11 of 100 days of code
*********************************************************/