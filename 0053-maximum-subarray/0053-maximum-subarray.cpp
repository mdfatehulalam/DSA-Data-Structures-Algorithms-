class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // most optimized method which is Moore Voting Algorithm and its tc is O(n)
        int n = nums.size();
        int cs = 0;int ms = INT_MIN;
        for(int val : nums){
            cs += val;
            ms = max(cs,ms);
            if(cs<1) cs=0;
        }
        return ms;
        
    }
};