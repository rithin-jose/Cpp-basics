#include<iostream>

using namespace std;
 
int main()
{
    enum Gender { Male, Female };

    cout<<Male<<" "<<Female<<endl;

    Gender gender = Male;
 
    switch (gender)
    {
    case Male:
        cout << "Gender is Male";
        break;
    case Female:
        cout << "Gender is Female";
        break;
    default:
        cout << "Value can be Male or Female";
    }
    return 0;
}
/*
    Enumerated type (enumeration) is a user-defined data type 
    which can be assigned some limited values. These values 
    are defined by the programmer at the time of declaring the 
    enumerated type.

    Enumerator types of values are also known as enumerators. It is 
    also assigned by zero the same as the array. It can also be used
    with switch statements.


    Syntax:
    enum enumerated-type-name{value1, value2, value3…..valueN};
*/

/********************************************************
Title: Enum 
Author: CAC
Date: 19th April 2021
Description:
This code was implemented on day 22 of 100 days of code
*********************************************************/