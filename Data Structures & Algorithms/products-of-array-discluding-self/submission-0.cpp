class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // need to find left prodcut and right product
        vector<int> left(nums.size(),1);
        vector<int> right(nums.size(),1);
        int prod = 1;
        for(int i =1 ;i<nums.size();i++) {
            prod *= nums[i-1];
            left[i] = prod;
        }
        prod=1;
        for(int i = nums.size()-2;i>=0;i--){
            prod *= nums[i+1];
            right[i] = prod;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++) ans.push_back(left[i]*right[i]);
        return ans;
    }
};
