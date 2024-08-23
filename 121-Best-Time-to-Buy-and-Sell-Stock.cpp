class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int maxProf = INT_MIN;

        for(int i=1; i<prices.size(); i++) {
            if(buy > prices[i]) {
                buy = prices[i];
            } else if(maxProf <= prices[i]-buy) {
                maxProf = prices[i]-buy;
            }
        }
        return (maxProf == INT_MIN)? 0:maxProf;
    }
};