#include<iostream>

using namespace std;

int main()
{
    int age;
    cin>>age;
    
    if(age<18)
    {
        cout<<"you are a minor";
    }
    else if(age>=18 and age<=21)
    {
        cout<<"You cannot drink";
    }
    else
    {
        cout<<"enjoy";
    }
    return 0;
}