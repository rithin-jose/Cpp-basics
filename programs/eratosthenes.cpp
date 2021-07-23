#include<iostream>

using namespace std;

void primeSieve(int n);

int main()
{
    int n;

    cin>>n;
    primeSieve(n);

    return 0;
}

void primeSieve(int n)
{
    int array[100] = {0};

    for(int i=2; i<=n ; i++)
    {
        if(array[i] == 0)
        {
            for(int j=i*i ; j<=n ; j+=i)
            {
                array[j] = 1;
            }
        }
    }

    for(int i=2 ; i<=n ; i++)
    {
        if(array[i] == 0)
        {
            cout<<i<<" ";
        }
    }
}
