class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int maxSize = 1;
        int bigest = 0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]+1 == nums[i+1]){
                maxSize ++;
            }
            else if(nums[i] == nums[i+1]) continue;
            else{
                bigest = std::max(maxSize,bigest);
                maxSize = 1;
            };
        }
        bigest = std::max(maxSize,bigest);

        return nums.size()==0?0:bigest;
    }
};
