class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        auto isPossible = [piles,h](int k)->bool{
            int temp = h;
            for(int i:piles){
                temp -= (i + k - 1) / k;
                cout<<temp;
                if(temp<0) return false;
            }
            return true;
        };
        int s = 1;
        int e = INT_MIN;
        for(int i:piles) e = max(e,i);
        int ans = 0;
        int mid;
        while(s<=e){
            mid = s + (e-s)/2;
            if(isPossible(mid)){
                cout<<mid<<endl;
                ans = mid;
                e = mid - 1;
            }
            else s = mid + 1;
        }
        return ans;
    }
};
