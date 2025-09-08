class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // most optimized method which is using bitwise operator(XOR) and its tc is O(n)
        int n = 0;     
        for(int i : nums){
            n = n ^ i;

        }
        return n;
        
    }
    
};