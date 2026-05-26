class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int streak = 0;
        for(int i:st){
            // we will run the algo for starting elemenst only of any sequece
            // if current element is not begining then we will move ahead
            if(st.find(i-1) == st.end()){
                int current_streak = 1;
                int currNum = i;
                while(st.find(currNum+1) != st.end()){
                    current_streak ++;
                    currNum += 1;
                }
                streak = std::max(streak, current_streak);
            }
        }
        return streak;
    }
};
