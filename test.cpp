#include<iostream>

using namespace std;

int main()
{
    int p,n,sum=0;
    cin>>n>>p;

    for(int i=1;i<=p;i++)
    {
        sum+=(n*i);
    }

    cout<<sum/p;
    return 0;
}
