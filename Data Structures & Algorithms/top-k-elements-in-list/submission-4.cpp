class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i] ++;
        }
        vector<pair<int,int>> vec_pair(mp.begin(),mp.end());
        // Now sort this pair in ascending order
        sort(vec_pair.begin(),vec_pair.end(),[](const pair<int,int>a , const pair<int,int>b)->bool{
            return a.second < b.second;
        });

        vector<int> ans;
        for(int i = vec_pair.size() - 1;i>=0 and k>0;i--){
            ans.push_back(vec_pair[i].first);
            k--;
        }
        return ans;
    }
};
