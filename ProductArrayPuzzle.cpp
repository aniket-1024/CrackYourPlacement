class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        long long int cntZ = 0, total = 1;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                cntZ++;
                continue;
            }
            total *= nums[i];
        }
        if(cntZ > 1) {
            vector<long long int> ans(n,0);
            return ans;
        }
        
        vector<long long int> ans(n,0);
        if(cntZ == 1) {
          for(int i=0; i<nums.size(); i++) {
              if(nums[i] != 0) continue;
              ans[i] = total;
          }  
          return ans;
        } 
        for(int i=0; i<n; i++) {
            ans[i] = total/nums[i];
        }
        return ans;
    }
};
