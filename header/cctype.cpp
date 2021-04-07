#include<iostream>
#include<cctype>
#include<stdio.h>

using namespace std;

int main()
{
    char a[100];        //character array or simply put its an array.

    cin.getline(a,100);

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(isalnum(a[i]))
            cout<<a[i]<<": is alphanumeric"<<endl;
        if(isdigit(a[i]))
            cout<<a[i]<<": is a digit"<<endl;
        if(isalpha(a[i]))
            cout<<a[i]<<": is a alphabet"<<endl;
        if(isblank(a[i]))
            cout<<a[i]<<": is a blankspace"<<endl;
        if(islower(a[i]))
            cout<<a[i]<<": is a lowercase"<<endl;
        if(isupper(a[i]))
            cout<<a[i]<<": is a upercase"<<endl;
        if(ispunct(a[i]))
            cout<<a[i]<<": is a punctuation"<<endl;
        
        
    }

    cout<<endl<<endl<<endl;

    char b[] = "this is \t to test \n control characters.";

    for(int i = 0; b[i] != '\0'; i++)
    {
        if(iscntrl(b[i]))
                cout<<b[i]<<": is a control character"<<endl;    //control char: \b,\n,\t,\r
    }

    char up='A',lo='a' ,ascii='a';

    cout<<"to upper "<<char(toupper(lo))<<endl;
    cout<<"to lower "<<char(tolower(up))<<endl;
    
    cout<<"ASCII value: "<<int(ascii);
    
    return 0;
}   

/*

    isalnum():checks if the character passed as parameter is alphanumeric
    isdigit():checks if the character passed as parameter is digit
    isalpha():checks if the character passed as parameter is alphabet
    isblank():checks if the character passed as parameter is blank space
    islower():checks if the character passed as parameter is lower case
    isupper():checks if the character passed as parameter is upper case
    ispunct():checks if the character passed as parameter is punctuation

    iscntrl: checks if the character passed as parameter is a control character(formatter of i/o).

    toupper(): changes the character to upper case it returns the ascii value
    tolower(): changes the character to lower case it returns the ascii value


    to convet that ascii values we receive we use char() and the inverse is done lusing int()


*/

/********************************************************
Title: ctype header file
Author: CAC
Date: 7th April 2021
Description:
This code was implemented on day 10 of 100 days of code
*********************************************************/