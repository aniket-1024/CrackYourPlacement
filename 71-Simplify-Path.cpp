class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        for(int i=1; i<path.size(); i++) {
            string tmp = \\;
            if(path[i] == '/') continue;
            while(i<path.size() && path[i] != '/') {
                tmp += path[i];
                i++;
            }
            if(tmp == \..\ && !st.empty()) st.pop();
            else if(tmp == \.\) continue;
            else if(tmp == \..\) continue;
            else st.push(tmp);
        }

        string ans = \/\;
        vector<string> tmp;
        while(!st.empty()) {
            string x = st.top();
            tmp.push_back(x);
            st.pop();
        }
        reverse(tmp.begin(),tmp.end());
        for(auto it:tmp) {
            ans+=it;
            ans += \/\;
        }
        ans.pop_back();
        if(ans.size() == 0) return \/\; 
        return ans;
    }
};