class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string i:strs){
            ans += to_string(i.size())+"#"+i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        auto extract  = [s](int i,int j)->string{
            string sub = "";
            for(int m=i;m<=j;m++) sub += s[m];
            return sub;
        };
        vector<string>ans;
        string len = "";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                len += s[i];
            }
            else
            {
                // here we encounter #
                int siz = stoi(len);
                len = "";
                ans.push_back(extract(i+1,i+siz));
                i += siz;
            }
        }
        return ans;
    }
};
