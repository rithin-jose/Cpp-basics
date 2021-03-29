#include<iostream>

using namespace std;

int main()
{
    //table
    int i=1;
    int num;
    cin>>num;

    while(i<=10)
    {
        cout<<num<<"*"<<i<<" = "<<num*i<<endl;
        i++;
    }

    cout<<endl;

    for(i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<" = "<<num*i<<endl;
    }
    i=1;
    cout<<endl;
    do
    {
        cout<<num<<"*"<<i<<" = "<<num*i<<endl;
        i++;
    }while(i<=10);

    return 0;
}