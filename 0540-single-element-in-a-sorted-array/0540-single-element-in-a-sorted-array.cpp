class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return arr[0];

        int st = 0, end = n - 1;
        while(st <= end) {
            int mid = st + (end - st) / 2;

            // boundary checks
            if(mid == 0 && arr[mid] != arr[mid+1]) return arr[mid];
            if(mid == n-1 && arr[mid] != arr[mid-1]) return arr[mid];

            // single element check
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];

            // partition logic
            if((mid % 2 == 0 && arr[mid] == arr[mid+1]) ||
               (mid % 2 == 1 && arr[mid] == arr[mid-1])) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};
