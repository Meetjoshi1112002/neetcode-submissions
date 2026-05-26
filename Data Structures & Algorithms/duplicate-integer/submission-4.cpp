class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        set<int> st;
        for(int i:nums){
            if(st.find(i) != st.end())return true;
            st.insert(i);
        }
        return false;
        // This approch works only when input elements are between 1 - N where N is size fo array
        // for(int i = 0;i<nums.size();i++){
        //     if(nums[nums[i] - 1]<0) return true;
        //     nums[nums[i]-1] = -nums[nums[i]-1];
        // }
        // return false;
    }
};
