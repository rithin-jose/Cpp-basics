#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

void generateBinaryTillN(int n){
    queue<string> q;
    q.push("1");

    while(n--){
        string s1 = q.front();

        q.pop();
        cout<<s1<<"\n";
         
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}

int main(){
    int n;
    cout<<"enter";
    cin>>n;
    generateBinaryTillN(n);

    return 0;
}