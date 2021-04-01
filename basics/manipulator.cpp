#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a=11,b=-1;
    float pie = 3.1428572857;

    cout << showpos << b<<endl<<endl;
 
    cout<<uppercase<<"hex: "<<hex<<a<<endl;
    cout<<"oct: "<<oct<<a<<endl;
    cout<<"dec: "<<dec<<a<<endl<<endl;

    cout<<noshowpos;

    cout<<pie<<endl;
    cout<<setprecision(20)<<pie<<endl;
    cout<<setprecision(4)<<pie<<endl<<endl;

    double x = 12.0;
    cout.precision(3); // Precision 2
    cout << "By default: " << x << endl;
    cout << "showpoint: " << showpoint << x << endl;
    cout << "fixed: " << fixed << x << endl;
    cout << "scientific: " << scientific << x << endl<< endl;

    cout << setw(6)<<a<<endl;
    cout << setfill('*')<<setw(6)<<a;
    
    return 0;
}

/*
    Showpos: When the showpos format flag is set, a plus sign (+) precedes every non-negative numerical value inserted into the stream (including zeros).
    hex : shows/take the hexadecimal value of a number
    oct : shows/take the octal value of a number
    dec : shows/take the decimal value of a number
    uppercase: shows hex in uppercase

    setprecision: Floating-points are displayed to six digits by default. To increase or reduce the nos. we use setprecision.
                    headerfile used is iomanip

    showpoint: generates precision value along with the decimal point
    fixed: write floating-point values in fixed-point notation
    scientific: write floating-point values in scientific notation.

    setw: Sets the width for displaying with space
    setfill: Sets the width for displaying with character passed to it
*/

/********************************************************
Title: Input output
Author: CAC
Date: 1st April 2021
Description:
This code was implemented on day 4 of 100 days of code
*********************************************************/