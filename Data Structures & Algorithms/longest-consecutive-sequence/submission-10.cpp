class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int current = 1;
        int max = 1;
        for(int i = 0;i<nums.size() - 1;i++){
            if(nums[i+1] == nums[i] + 1) current++;
            else if(nums[i+1] == nums[i]) continue;
            else{
                current = 1;
            }
            max = std::max(max,current);
        }
        return max;
    }
};
