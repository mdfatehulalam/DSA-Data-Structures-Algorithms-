class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // most optimized method which tc is O(n)
        int mp = 0;
        int bb = prices[0];
        for(int i=1; i<prices.size(); i++){
            mp = max(mp,prices[i]-bb);
            bb = min(bb,prices[i]);
        } return mp;
    }
};