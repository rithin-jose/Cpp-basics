#include<iostream>
#include <stdio.h>

using namespace std;

void function1();
void function2();

int main()
{
    // function1();
    // function2();
    cout<<"hello form main()\n";
    return 0;
}
// pragma doesn't work for gcc compiler
void __attribute__((constructor)) function1()
{
    cout<<"hello from function1()\n";
}

void __attribute__((destructor)) function2()
{
    cout<<"hello from function2()\n";
}

/*
    pragma explicitly states a function to run before or after the main function.
    In the above example function1 runs before mainand function2 runs after main.
*/

// For non gcc compilers

/*
#include <stdio.h>

using namespace std;

void function1();
void function2();
#pragma startup function1
#pragma end function2

int main()
{
    cout<<"hello form main()\n";
    return 0;
}

void function1()
{
    cout<<"hello from function1()\n";
}

void  function2()
{
    cout<<"hello from function2()\n";
}
*/



/********************************************************
Title: Macros
Author: CAC
Date: 3rdt April 2021
Description:
This code was implemented on day 6 of 100 days of code
*********************************************************/