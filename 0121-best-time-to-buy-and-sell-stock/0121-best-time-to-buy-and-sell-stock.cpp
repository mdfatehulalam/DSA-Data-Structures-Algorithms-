class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // most optimized method which tc is O(n)
        int n = prices.size();
        int mp = 0;
        int bb = prices[0];
        for(int i=1; i<n; i++){
            if(bb<prices[i]){
                int p = prices[i]-bb;
                mp = max(mp,p);
            }
            bb = min(bb,prices[i]);
        } return mp;
    }
};