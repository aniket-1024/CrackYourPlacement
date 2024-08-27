class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(), minJump = 0;
        for(int i=n-2; i>=0; i--) {
            minJump++;
            if(nums[i] >= minJump) minJump = 0;
        }
        if(minJump == 0) return true;
        return false;
    }
};