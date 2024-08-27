class Solution {
public:
    void generate(int n, int open, int closed, string &temp, vector<string> &ans) {
        if(open < closed) return;  
        if(open == n && closed == n) { 
            ans.push_back(temp);
            return;
        }
        if(open < n) {  
            temp.push_back('(');
            generate(n, open+1, closed, temp , ans);
            temp.pop_back();
        }
        if(closed < n) { 
            temp.push_back(')');
            generate(n, open, closed+1, temp, ans);
            temp.pop_back();
        }

        return ;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        generate(n,0,0,temp,ans);
        return ans;
    }
};