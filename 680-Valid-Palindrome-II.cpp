class Solution {
public:
    bool solve(string &s, int l, int r,int threshold) {
        if(threshold < 0) return false;
        if(l>=r && threshold>=0) return true;
        int ans = false;
        if(s[l] == s[r]) ans = ans || solve(s,l+1,r-1,threshold);
        else {
            ans = ans || solve(s,l+1,r,threshold-1);
            if(ans==false) ans = ans || solve(s,l,r-1,threshold-1);
        }
        return ans;
    }
    bool validPalindrome(string s) {
        return solve(s,0,s.size()-1,1);
    }
};