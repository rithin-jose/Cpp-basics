#include<iostream>

using namespace std;

int main()
{
    int a;
    int *b;
    
    a=10;
    b=&a;
    cout<<a<<" "<<&a<<" "<<endl;
    cout<<b<<" "<<&b<<" ";
    return 0;
}