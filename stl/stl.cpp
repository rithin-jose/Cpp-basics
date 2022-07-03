#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void showVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int main(){
        
     vector<int> result(2);
     int target=6;
    vector<int> nums = {3,2,4};
    showVector(nums);
        for(int it=0;it<nums.size();it++){
           int second = target - nums[it];
           auto it2=find(nums.begin()+it,nums.end(),second);
           if(it2 != nums.end()){
               result.push_back(it);
               result.push_back(it2 - nums.begin());

               break;
           }
       }

    return 0;
}