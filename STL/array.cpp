#include<iostream>
#include<array>

/*
        template design (actual design may vary,this is my understanding of the template)

        template <typename,size>
        {
            typename arr[size];
        }
    
*/

using namespace std;

int main()
{
    // size is required at compile time so it needs to be specified
    array<int,5>  arr;
    arr = {1,2,3,4,5};

    cout<<endl;
    for(int i =0;i<arr.size();++i)//++i and i++ are one and the same in a loop(only in a loop)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(auto i : arr)
    {
        cout<< i<<" ";
    }

    cout<<endl;
    
    for(auto it  = arr.begin();it != arr.end();++it)
    {
        cout<< *it<<" ";
    }
    return 0;
}