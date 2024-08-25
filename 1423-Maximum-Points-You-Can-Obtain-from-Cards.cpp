class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int currSum = 0;
        int ans = INT_MIN;

        int l = k-1, r = arr.size()-1;
        for(int i=0; i<=l; i++) currSum += arr[i];

        ans = max(ans,currSum);

        while(l>=0) {
            currSum -= arr[l];
            l--;
            currSum += arr[r];
            r--;
            ans = max(ans, currSum);
        }

        return ans;
    }
};