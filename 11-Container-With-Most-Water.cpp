class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;

        int ans = 0;
        while(l<r) {
            int mini = min(height[l],height[r]);
            ans = max(ans, (r-l)*mini);
            if(height[l] > height[r]) {
                r--;
            } else {
                l++;
            }
        }
        return ans;
    }
};