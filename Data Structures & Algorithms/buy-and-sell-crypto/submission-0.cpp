class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lar = 0;
        int l = 0;
        for(int r = 0;r<prices.size();r++){
            while((r >= l) and (prices[r] < prices[l])){
                l++;
            }
            lar = max(lar, prices[r] - prices[l]);
        }
        return lar;
    }
};
