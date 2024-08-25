class Solution {
public:
    int solve(int st, int i, vector<int> &prices) {
        if(i>=prices.size()) return 0;

        int ans = 0;
        if(prices[i] < prices[st]) {
            ans = ans + solve(st+1, i+1, prices);
        } else {
            ans = ans + prices[i]-prices[st] + solve(st+1,i+1,prices);
        }
        return ans;
    }
    int maxProfit(vector<int>& prices) {
        return solve(0,1,prices);
    }
};