#include<iostream>

using namespace std;

int main()
{
    int n;
    int size=10;
    int* stack= new int[size];

    cout<<"Enter no of stack: ";
    cin>>n;

    int* top = new int[n-1];
    int* boundary = new int[n];

    top[0]=boundary[0]=-1;

    for(int j=1;j<n;j++)
        top[j]=boundary[j]= size/n;
    
    boundary[n]=size-1;



    return 0;
}