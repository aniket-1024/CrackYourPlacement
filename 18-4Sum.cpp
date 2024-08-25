#define ll long long
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++) {
            if(i!=0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[j] == nums[j-1] && j!=i+1) continue;
                int l = j+1;
                int r = nums.size()-1;

                while(l<r) {
                    ll sum = (ll)nums[i]+(ll)nums[j]+(ll)nums[l]+(ll)nums[r];
                    if(sum > target) {
                        r--;
                    } else if(sum < target) {
                        l++;
                    } else {
                        vector<int> tmp = {nums[i],nums[j],nums[l],nums[r]};
                        ans.push_back(tmp);
                        l++;
                        r--;
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                    }
                }
            }
        }
        return ans;
    }
};