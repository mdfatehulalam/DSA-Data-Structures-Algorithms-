class Solution {
public:
    int maxArea(vector<int>& height) {
        // most optimized method which tc is O(n)
        int n = height.size();
        int st = 0;
        int end = n-1;
        int ans = 0;
        while(st<end){
            int h = min(height[st],height[end]);
            int w = end-st;
            int area = h*w;
            ans = max(area,ans);
            if(height[st]<height[end]) st++;
            else end--; 
        } return ans;
    }
};