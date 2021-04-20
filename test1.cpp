#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int ones=0;
    int zeros=0;
    int twes=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==0)
            zeros++;
        else if(temp==1)
            ones++;
        else
            twes++;
    }
    for(int i=0;i<ones;i++)
        cout<<"1 ";
    for(int i=0;i<zeros;i++)
        cout<<"0 ";
    for(int i=0;i<twes;i++)
        cout<<"2 ";
}