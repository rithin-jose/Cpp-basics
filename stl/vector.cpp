#include<iostream>
#include<vector>

using namespace std;

void showVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}


int main(){
    
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"pushback ";
    v.push_back(10);
    showVector(v);

    cout<<"popback ";
    v.pop_back();
    showVector(v);

    cout<<"size "<<v.size()<<"\n";

    cout<<"insert at 2 \n";
    v.insert(v.begin()+2,50);
    showVector(v);

    cout<<"removal at 2 \n";
    v.erase(v.begin()+2,v.begin()+3);
    showVector(v);

    v.clear();
    cout<<"cleared vector";
    showVector(v);




    
    
    return 0;
}