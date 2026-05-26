class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            if(mp.find(c) == mp.end() or mp[c]<=0)return false;
            mp[c] --;
        }
        for(auto i:mp){
            if(i.second >0)return false;
        }
        return true;
    }
};
