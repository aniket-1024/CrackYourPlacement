class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mapp;
        int n = nums.size();
        for(int i=0; i<n; i++) 
        {
            if(mapp.find(nums[i]) == mapp.end()) mapp[nums[i]] = 1;
            else mapp[nums[i]] = mapp[nums[i]] + 1; 
        }
        for(int i=0; i<n; i++)
        {
            if(mapp[nums[i]] > n/2) return nums[i];
        }
        return 0;
    }
};