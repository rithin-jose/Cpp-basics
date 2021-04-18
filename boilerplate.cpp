#include<iostream>

using namespace std;

int main()
{

    return 0;
}

/*

*/

/********************************************************
Title: Input output
Author: CAC
Date: 4th April 2021
Description:
This code was implemented on day 7 of 100 days of code
*********************************************************/
#include<iostream>
#include<cstring>

using namespace std;

union Student{
    int roll;
    char name[20];
    float marks;
}s1;

int main()
{
    Student s2;

    s1.roll = 10;
    strcpy(s1.name,"Luffy");
    s1.marks = 10.2;

    s2.roll = 5;
    strcpy(s2.name,"Zoro");
    s2.marks = 18.2;

    cout<<"Student 1"<<endl;
    cout<<"Roll no.:"<<s1.roll<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"marks:"<<s1.marks<<endl<<endl;

    cout<<"Student 2"<<endl;
    cout<<"Roll no.:"<<s2.roll<<endl;
    cout<<"Name: "<<s2.name<<endl;
    cout<<"marks:"<<s2.marks<<endl<<endl;

    return 0;
}

/*
    The keyword 'union' is used to define a union.
    Syntax:
    union union_name {
        member definition;
    } union_variables;

    union_variable are optional and can be defined in main()
*/

/********************************************************
Title: Union
Author: CAC
Date: 18th April 2021
Description:
This code was implemented on day 21 of 100 days of code
*********************************************************/