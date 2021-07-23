#include<iostream>

using namespace std;

void primeSieve(int n);
void dynamicPrimeSieve(int n);

int main()
{
    int n;

    cin>>n;
    primeSieve(n);
    cout<<endl;
    dynamicPrimeSieve(n);

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


void dynamicPrimeSieve(int n)
{
    int* array = new int[n+1];

    for(int i=0;i<=n;i++)
    {
        array[i]=0;
    }
    
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

    for(int i=0;i<=n;i++)
    {
        cout<<array[i];
    }
    
    delete[] array;
}