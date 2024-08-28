class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 1;
        int i = nums.size()-1;
        int cnt = 0;
        while(i>=0 && cnt<3) {
            ans = ans * nums[i--];
            cnt++;
        }
        i = 0;
        int ans2 = 1;
        while(i<2 && i<nums.size()) {
            ans2 *= nums[i++];
        }
        int n = nums.size();
        ans2 *= nums[n-1];
        return max(ans,ans2);
    }
};