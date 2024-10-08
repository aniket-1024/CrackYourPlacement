class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int med = nums[n/2];
        
        int ans = 0;
        for(auto it:nums) {
            ans += abs(med-it);
        }
        return ans;
    }
};