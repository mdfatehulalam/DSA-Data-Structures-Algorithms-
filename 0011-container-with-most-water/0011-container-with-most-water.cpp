class Solution {
public:
    int maxArea(vector<int>& height) {
        // most optimized method which tc is O(n)
        int st = 0;
        int end = height.size()-1;
        int ans = 0;
        while(st<end){
            int area = min(height[st],height[end]) * (end-st);
            ans = max(area,ans);
            if(height[st]<height[end]) st++;
            else end--; 
        } return ans;
    }
};