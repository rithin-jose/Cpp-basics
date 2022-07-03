#include<iostream>
#include<vector>

using namespace std;

void primeSieve(int n);
void dynamicPrimeSieve(int n);
void seiveWithVector(int n);

int main()
{
    int n;

    cin>>n;
    // primeSieve(n);
    // cout<<endl;
    // dynamicPrimeSieve(n);
    cout<<endl;
    seiveWithVector(n);

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

void seiveWithVector(int n){
    vector<int> test(n,0);

    for(int i=2;i<=n;i++){
        if(test[i] == 0 && i*i < n){
            for(int j = i*i;j<=n;j+=i){
                test[j] = 1;
            }
        }
        else if(i*i>n){
            break;
        }
    }

    for(int i=2 ; i<=n ; i++)
    {
        if(test[i] == 0)
        {
            cout<<i<<" ";
        }
    }
}