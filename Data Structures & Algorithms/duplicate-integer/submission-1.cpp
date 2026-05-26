class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i:nums){
            if(map.find(i) != map.end()) return true;
            map[i]++;
        }
        return false;
    }
};
