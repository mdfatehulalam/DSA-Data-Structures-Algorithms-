class Solution {
public:
    int search(vector<int>& arr, int target) {
        // its tc is O(logn)
        int st = 0; int end = arr.size()-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(arr[mid]==target) return mid;
            if(arr[mid]<target) st = mid + 1;
            else end = mid - 1;
        } return -1;
    }
};