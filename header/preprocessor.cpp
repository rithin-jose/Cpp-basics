
//macros: pie will have the value of 3.1428 throughout the program pie is a symbolic constant here.
#define pie 3.1428
// macros with argument
#define Area(l,b) (l*b)

// file inclusion
#include<iostream>

// user defined header file
#include"myheader.h"

// conditional
#ifdef pie
    #include<math.h>     //only if pie is defined math is included
#endif

// this maked sure if CLS is is defined in some header file the definition made by programmed is skipped over/ignored(almost like a guard)
#ifndef CLS
    #define test (cout<<"yes")
#endif

using namespace std;

int main()
{
    int area;

    cout<<pie<<endl;

    area=Area(10,20);
    cout<<area<<endl;

    // To undefine pie we use #undef
    #undef pie

    // cout<<pie;   //it will show undefined


    return 0;
}

/*
    Preprocessor programs provide preprocessors directives which tell the 
    compiler to preprocess the source code before compiling. All of these 
    preprocessor directives begin with a ‘#’ (hash) symbol. The ‘#’ symbol 
    indicates that, whatever statement starts with #, is going to the 
    preprocessor program, and preprocessor program will execute this statement. 
    Examples of some preprocessor directives are: #include, #define, #ifndef etc.

    There are 4 main types of preprocessor directives:  
    1. Macros:  Macros are a piece of code in a program which is given some name. 
                Whenever this name is encountered by the compiler the compiler replaces the 
                name with the actual piece of code. The ‘#define’ directive is used to define a macro.

    2. File Inclusion: This type of preprocessor directive tells the compiler to include a file in the source code program. 

    3. Conditional Compilation: Conditional Compilation directives are type of directives which helps to compile a specific 
                                portion of the program or to skip compilation of some specific part of the program based on 
                                some conditions.
                                Eg. #ifdef #ifdef #endif #if #else

    4. Other directives: #undef and #pragma
                        #pragma startup and #pragma exit: These directives helps us to specify the functions that are needed to run before program startup( before the control passes to main())
                        There is a separete program for pragma see readme.
    
*/

/********************************************************
Title: Macros
Author: CAC
Date: 3rdt April 2021
Description:
This code was implemented on day 6 of 100 days of code
*********************************************************/