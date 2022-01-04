#include<iostream>

using namespace std;

int main()
{
    int a = 2;
    //int can have 2-4 bytes of memory space and holds integer data

    char ch = 'r';
    //char can store characters and uses 1 byte of memory space

    bool istrue = true;  //can have true or false as its value,ie logical values

    float pie = 3.1428;
    double d = 3.142857;
    // float takes 4 bytes of memory space and double takes 8 bytes hence double can store large values with decimal.

    void fun();      //fun() is a function | see function section to know more

    wchar_t w = L'A';
    // 2-4 bytes long and is a character data type has size greater than 8bit data type
    // used to hold UNICODE values as char can hld only ASCII values.
    // the L is a macro that tells the compiler that the string is unicode.

    cout<<a<<endl<<ch<<endl<<istrue<<endl<<pie<<endl<<d<<endl<<w<<endl;
    // Standard end line (endl)
    //istrue will print 1  and wide char will show the unicode value




    // to see the size of each data type we have an inbuilt function sizeof()
    cout<<endl<<"size of"<<endl;
    cout<<"int: "<<sizeof(a)<<endl;
    cout<<"char: "<<sizeof(ch)<<endl;
    cout<<"bool: "<<sizeof(istrue)<<endl;
    cout<<"float: "<<sizeof(pie)<<endl;
    cout<<"double: "<<sizeof(d)<<endl;
    cout<<"wide char: "<<sizeof(w);

    return 0;
}

/*
There are three major divisions in data type:
1. Primary data types:
    - int
    - char
    - boolean
    - floating point
    - double floating point
    - void
    - wide character

2. Derived data types:
    - function
    - Array
    - Pointer
    - Reference

3. User defined data types:
    - Class
    - Structure
    - Union
    - Enum
    - Typedef

*/


/********************************************************
Title: Data types in C++
Author: CAC
Date: 30th march 2021
Description:
This code was implemented on day 2 of 100 days of code
*********************************************************/