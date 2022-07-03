#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    
    cin>>n;
    
    for(int i=8;i>=0;i--){
        if((n&(1<<i)) == 0){
            cout<<"0";
                }
        else{
            cout<<"1";
        }
    }

    return 0;
}