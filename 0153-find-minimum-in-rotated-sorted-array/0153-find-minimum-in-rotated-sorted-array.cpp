class Solution {
public:
    int findMin(vector<int>& nums){
        int st = 0;int end = nums.size()-1;
        while(st<end){
            int mid = st + (end-st)/2;
            if(nums[end]<nums[mid]) st = mid + 1;
            else end = mid;

        } return nums[st];
        
    }
};