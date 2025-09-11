class Solution {
public:
    int findMin(vector<int>& nums){
        // using binary search but its tc in average case O(logn) and worst case O(n) depends on given array
        int st = 0;int end = nums.size()-1;
        while(st<end){
            int mid = st + (end-st)/2;
            // for duplicate handling
            if (nums[st] == nums[mid] && nums[end] == nums[mid]) {
                st++;
                end--;
            }
            else if(nums[end]<nums[mid]) st = mid + 1;
            else end = mid;
        } return nums[st];
    }
};