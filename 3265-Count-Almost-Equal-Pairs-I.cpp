class Solution {
public:
    bool solve(int a, int b) {
        string s1 = to_string(a);
        string s2 = to_string(b);

        while(s1.length() < s2.length()) {
            s1 = '0' + s1;
        }
        while(s1.length() > s2.length()) {
            s2 = '0' + s2;
        }

        int diff = 0;
        vector<int> ind;
        for(int i=0; i<s1.size(); i++) {
            if(s1[i] != s2[i]) {
                diff++;
                ind.push_back(i);
                if(diff > 2) return false;
            }
        }

        if(diff == 0) return true;

        if(diff == 2) {
            swap(s1[ind[0]] , s1[ind[1]]);
            return s1==s2;
        }

        return false;
        
        
    }
    int countPairs(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(solve(nums[i],nums[j])) ans++;
            }
        }
        return ans;
    }
};