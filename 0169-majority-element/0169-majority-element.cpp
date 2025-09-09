class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // most optimized method which is Moore’s Voting Algorithm and its tc is O(n)
        int n = nums.size();
        int fre = 0; int ans = 0;
        for(int i=0;i<n;i++){
            if(fre == 0) ans = nums[i];
            if(ans == nums[i]) fre++;
            else fre--;              
        }
        return ans;
    }
};