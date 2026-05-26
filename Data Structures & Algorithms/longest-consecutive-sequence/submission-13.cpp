class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() ==0 )return 0;
        // m = 5
        // c = 1
        // curr = 5
        // Array : [5 4 3 2 1 10 12]

        // count always from the starting point of any squeunece present in array
        


        // Iterate in array:
        // How to know that current ele is starting point for any sequence present in array?
        // while(cr +1 !set) c++ cr+=1
        int max = 1;
        int cur_counter = 1;
        set<int>st(nums.begin(),nums.end());

        for(int i:nums){
            if(st.find(i - 1) == st.end()){
                int curr = i;
                // when there is n - 1 in array / no preccesdor / current ele is the starting only
                while(st.find(curr + 1) != st.end()){
                    cur_counter++;
                    curr += 1;
                }
                max = std::max(max,cur_counter);
                cur_counter = 1;
            }

        }
        return max;

    }
};
