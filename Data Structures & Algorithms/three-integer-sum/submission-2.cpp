class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0;i<nums.size()-2;i++){
            int curr = nums[i];
            if(i>0 and nums[i] == nums[i-1]) continue;
            int l = i+1;
            int r = nums.size() - 1;
            while(l<r){
                if((curr + nums[l] + nums[r]) == 0){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(nums[l] == nums[l-1]) l++;
                    while(nums[r] == nums[r+1]) r--;
                }
                else if((curr + nums[l] + nums[r]) > 0){
                    r--;
                }
                else l++;
            }
        }
        return ans;
    }
};
