#include<stdlib.h>
#include<iostream>
#include<time.h>
// time.h has advanced concepts so it will be covered later


using namespace std;

int main()
{
    // srand(20);
    srand(time(0));
    for(int i=0;i<10;i++)
        cout<<rand()<<endl;

    return 0;
}

/*

    rand(): returns a pseudo-random number in the range of [0, RAND_MAX).
    RAND_MAX: is a constant whose default value may vary.

    if we rerun our program the no. generated each time will be the same.

    srand():The srand() function sets the starting point for producing a series of pseudo-random integers. 
    If srand() is not called, the rand() seed is set as if srand(1) were called at program start. 
    Any other value for seed sets the generator to a different starting point.

    so we use time to generate much more random nos. as the seed will change with each passing second.

*/

/********************************************************
Title: stdlib.h
Author: CAC
Date: 8th April 2021
Description:
This code was implemented on day 11 of 100 days of code
*********************************************************/