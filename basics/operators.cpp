#include<iostream>

using namespace std;

int main()
{
    int a=30,b=2,c = 10, d = 20;
    bool e=true;

    // Unary operator
    a++;
    cout<<"Increment operator "<<a<<endl;
    a--;
    cout<<"Decrement operator "<<a<<endl;

    // Binary operator
        // Arthmetic operators
    cout<<"Addition "<<a+b<<endl;
    cout<<"Subtraction "<<a-b<<endl;
    cout<<"Multiplication "<<a*b<<endl;
    cout<<"Division "<<a/b<<endl;
    cout<<"Modulus "<<a%b<<endl;       //returns the reminder

        //Relational operator
    cout<<"less than "<<(a<b)<<endl;                      //returns true(1) if a<b
    cout<<"grater than "<<(a>b)<<endl;                    //returns true(1) if a>b
    cout<<"less than or equal to "<<(a<=b)<<endl;         //returns true(1) if a<=b
    cout<<"greater than or equal to "<<(a>=b)<<endl;      //returns true(1) if a>=b
    cout<<"equal to "<<(a==b)<<endl;                     //returns true(1) if a=b

        //Logical operator

    //Logical AND

    /*  Truth Table
        0 && 0 gives 0
        0 && 1 gives 0
        1 && 0 gives 0
        1 && 1 gives 1
    */

    if(a>b && c>d)
        cout<<"if the two conditions are meet(true) then this statement runs"<<endl;
    else
        cout<<"else this statement runs"<<endl;

    //Logical OR

    /*  Truth Table
        0 || 0 gives 0
        0 || 1 gives 1
        1 || 0 gives 1
        1 || 1 gives 1
    */

    if(a>b || c>d)
        cout<<"if the one of the condition is meet(true) then this statement runs"<<endl;
    else
        cout<<"else this statement runs"<<endl;

    //Logical Not

    /*  Truth Table
        not 0 gives 1
        not 1  gives 0
    */

    cout<<"e will be true"<<endl;
    cout<<"!e will be false"<<endl;
    cout<<"!!e will be true"<<endl;



        // bitwise operator
    
    int x=5,y=9;

    cout<<(x&y)<<endl;  // 00000101 & 00001001 = 00000001   bitwise AND
    cout<<(x|y)<<endl;  // 00000101 | 00001001 = 00001101   bitwise OR
    cout<<(x^y)<<endl;  // 00000101 ^ 00001001 = 00001100   bitwise XOR
    cout<<(x<<2)<<endl;  // 00000101 << 2 = 00010100   left shift by 2
    cout<<(x>>2)<<endl;  // 00000101 >> 2 = 00000001  right shift by 2
    cout<<(~x)<<endl;  // ~00000101 = 11111010   bitwise NOT

    // Assignment operator
    a=100;      // assign the value on the right to the variable on the left.
    a+=10;      //This operator first adds the current value of the variable on left to the value on right and then assigns the result to the variable on the left.
    a-=10;      // This operator first subtracts the value on right from the current value of the variable on left and then assigns the result to the variable on the left.
    a*=10;      // This operator first multiplies the current value of the variable on left to the value on right and then assigns the result to the variable on the left.
    a/=10;      //This operator first divides the current value of the variable on left by the value on right and then assigns the result to the variable on the left.

    // Ternary operator
    e? (cout<<"if true this stmt is evaluated") : (cout<<"else this stmt");


    return 0;
}


/*
Typers of operators:
1. Unary Operators: Operators that operates or works with a single operand are unary operators. For example: (++ , –)
2. Binary Operators:1 Operators that operates or works with two operands are binary operators. For example: (+ , – , * , /)
    - Arithmetic operators
    - Relational operators
    - Logical operators
    - Bitwise operators
    - Assignment operator
3. Ternary operator: this is also called conditional operator.(?:)
*/

/********************************************************
Title: Operators
Author: CAC
Date: 31th march 2021
Description:
This code was implemented on day 3 of 100 days of code
*********************************************************/