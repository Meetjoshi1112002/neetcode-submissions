class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int max = 1;
        int curr =1;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i+1] == nums[i]+1) curr++;
            else if(nums[i+1] == nums[i]) continue;
            else{
                curr = 1;
            }
            max = std::max(max,curr);
        }
        return max;
    }
};
