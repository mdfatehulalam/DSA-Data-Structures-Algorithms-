class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == target) return true;

            if (nums[st] == nums[mid] && nums[end] == nums[mid]) {
                st++;
                end--;
            }
            else if (nums[st] <= nums[mid]) {
                if (target >= nums[st] && target < nums[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            else {
                if (target > nums[mid] && target <= nums[end])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return false;
    }
};


        





// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         for(int i=0; i<nums.size(); i++){
//             if(target==nums[i]) return true;
//         } return false;
        
//     }
// };