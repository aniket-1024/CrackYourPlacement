class Solution {
public:
    string convertToTitle(int num) {
        string ans = \\;
        while(num > 0) {
            int mod = num%26;
            if(mod == 0) {
                num = num / 26;
                ans = \Z\+ans;
                num--;
                continue;
            }
            ans = char('A'+(mod-1)) + ans;
            num = num/26;
        }
        return ans;
    }
};