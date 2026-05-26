class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0; 
        int r = s.size() -1;
        while(l<r){
            while(!isalnum(s[l]) and l<s.size()) l++;
            while(!isalnum(s[r]) and r>=0) r--;
            if(tolower(s[l++]) != tolower(s[r--])) return false;
        }
        return true;
    }
};
