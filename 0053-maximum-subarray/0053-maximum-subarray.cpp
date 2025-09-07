class Solution {
public:
    int maxSubArray(vector<int>& nums) {
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