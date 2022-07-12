class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++){
            auto itr = map.find(target-nums[i]);
            if(itr != map.end() /*&& itr->first != nums[i]*/){
                return {i, itr->second};
            }
            map[nums[i]] = i;
        }
        return {-1,-1};
    }
    
};