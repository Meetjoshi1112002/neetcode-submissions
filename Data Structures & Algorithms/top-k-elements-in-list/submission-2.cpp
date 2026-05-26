class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // This algorythm helps us to learn sort the map based on values

        // The keys of maps are unmutable
        unordered_map<int,int> map;
        for(int i:nums){
            map[i]++;
        }
        // Step one : Extract the pairs from map to vector<pair>
        vector<pair<int,int>> vec(map.begin(),map.end());

        // Step 2: use lamda function to sort the pair based on second
        sort(vec.begin(),vec.end(),[](pair<int,int> a,pair<int,int> b)->bool{
            return a.second> b.second;
        });
        
        // step 3: Get top K elements
        vector<int> ans;
        for(int i=0;i<k;i++) ans.push_back(vec[i].first);
        return ans;
        
    }
};
