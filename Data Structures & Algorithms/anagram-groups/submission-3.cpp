class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string i:strs){
            string temp = i;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(i);
        }
        vector<pair<string,vector<string>>> samp(mp.begin(),mp.end());
        vector<vector<string>> temp;
        for(auto i:samp) temp.push_back(i.second);
        return temp;

    }
};
