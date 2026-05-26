class Solution {
public:
    int maxArea(vector<int>& h) {
        auto areaFinder = [](int i,int j, int l1 ,int l2)->int{
            return (j-i)*(std::min(l1,l2));
        };
        int l = 0;
        int r = h.size() - 1;
        int max_area = 0;
        while(l<r){
            int area = areaFinder(l,r,h[l],h[r]);
            max_area = std::max(area,max_area);
            if(h[l]>= h[r]) r--;
            else l++;
        }
        return max_area;
    }
};
