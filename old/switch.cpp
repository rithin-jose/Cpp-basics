#include<iostream>

using namespace std;

int main()
{
    int age;
    cin>>age;
    
    switch(age)
    {
        case 18:
            cout<<"sorry";
            break;
        case 21:
            cout<<"one more year to go";
            break;
        case 22:
            cout<<"enjoy";
            break;
        default:
            cout<<"Cannot determine";        
    }
   
    return 0;
}