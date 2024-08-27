class Solution {
public:
    int solve(string &s1 , string &s2) {
        int i=0;
        while(i<s1.size() && i<s2.size()) {
            if(s1[i] != s2[i]) return i;
            i++;
        }
        return i;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1; i<strs.size(); i++) {
            ans = strs[i].substr(0,solve(ans,strs[i]));
        }
        return ans;
    }
};