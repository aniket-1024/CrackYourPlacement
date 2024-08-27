class Solution {
public:
    bool solve(vector<int> &nums, int i, vector<int> &dp) {
        if(i>=nums.size()-1) return true;
        if(nums[i] == 0) return false;
        
        if(dp[i] != -1) return dp[i];
        bool ans = false;   

        for(int jump=1; jump<=nums[i]; jump++) {
            ans = ans || solve(nums, i+jump,dp);
            if(ans == true) return dp[i] = ans;
        }
        return dp[i] = ans;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return solve(nums,0,dp);
    }
};