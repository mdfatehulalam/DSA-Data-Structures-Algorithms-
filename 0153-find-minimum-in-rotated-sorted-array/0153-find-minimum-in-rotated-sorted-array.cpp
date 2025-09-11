class Solution {
public:
    int findMin(const vector<int>& nums){
        // using binary search which tc is O(logn)
        int st = 0;int end = nums.size()-1;
        while(st<end){
            int mid = st + (end-st)/2;
            if(nums[end]<nums[mid]) st = mid + 1;
            else end = mid;

        } return nums[st];
        
    }
};