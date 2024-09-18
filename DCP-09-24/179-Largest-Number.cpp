bool compare(int a, int b) {
    return to_string(a) + to_string(b) > to_string(b) + to_string(b);
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);

        string ans;
        for (int i = 0; i < nums.size(); i++) {
            ans = ans + to_string(nums[i]);
        }
        return ans[0]=='0'?\0\:ans;
    }
};