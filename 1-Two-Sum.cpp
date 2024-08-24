class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num;
        for(int i=0; i<nums.size(); i++) num[nums[i]] = i;

        for(int i=0; i<nums.size(); i++) {
            if(num.find(target-nums[i]) != num.end() && num[target-nums[i]] != i) return {num[target-nums[i]], i}; 
        }
        return {-1,-1};
    }
};