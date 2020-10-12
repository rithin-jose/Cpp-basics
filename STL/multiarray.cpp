#include<iostream>
#include<array>

/*
    implementation of multidimentional array 
    with the help of array std template    
*/

using namespace std;

int main()
{
    array<array<int,3>,3> arr;

    arr = {{
        {{1,2,3}},
        {{6,7,8}},
        {{12,22,3}}
    }};

    arr[0][0] = 100;
    cout<<arr[0][0]<<endl;
    cout<<arr[0][1]<<endl;
    cout<<arr[0][2]<<endl;
    cout<<arr[1][0]<<endl;
    cout<<arr[1][1]<<endl;
    cout<<arr[1][2]<<endl;
    return 0;
}