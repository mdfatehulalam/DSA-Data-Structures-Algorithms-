class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int j=0;j<n;j++){
             int fre = 0;
            for(int i=0;i<n;i++){
                if(nums[j]==nums[i]) fre++;
            }
        if(fre>(n/2)){
            return nums[j];
        } 
        }
    return 0;
        
    }
};