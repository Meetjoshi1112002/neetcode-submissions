public class Solution {
    public bool IsAnagram(string s, string t) {
        if(s.Length != t.Length) return false;
        Dictionary<char,int> mp = new();

        foreach(char c in s){
            if(!mp.ContainsKey(c))
                mp[c] = 0;
            mp[c] ++;
        }

        foreach(char c in t){
            if(!mp.ContainsKey(c) || --mp[c]< 0)
                return false;
        }
        return true;
    }
}
