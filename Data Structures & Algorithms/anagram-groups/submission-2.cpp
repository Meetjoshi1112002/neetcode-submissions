class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // This is very similar to the two sum
        // hashmap is created from the scratch
        // A key is searched from the map created till that point
        unordered_map<string,vector<string>> map;
        for(string i:strs){
            string temp = i;
            sort(temp.begin(),temp.end());
            map[temp].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i:map){
            ans.push_back(i.second);
        }
        return ans;
    }
};
