#include<iostream>
#include<vector>

using namespace std;

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" |";
    }
    cout<<endl<<endl;
}

int main()
{
    int n,temp;
    vector<int> arr;

    cin>>n;

    if(n<=1000000 && n>0)
    {
        while(n>0)
        {
            temp = n%10;
            n=n/10;
            arr.push_back(temp);
        }

        int size = arr.size();
        for (int i = (size-1); i >=0;i--)
        {
            arr[i]=9-arr[i];
            cout<<arr[i];
        }

    }
    else
    {
        cout<<"Wrong Input";
    }

    return 0;
}
