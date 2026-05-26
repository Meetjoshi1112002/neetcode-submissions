class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // key is sum and value is index
        unordered_map<int,int>map;
        for(int i = 0;i<nums.size();i++){
            if(map.find(target-nums[i]) != map.end()){
                return {map[target-nums[i]],i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
