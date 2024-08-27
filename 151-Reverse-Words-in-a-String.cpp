class Solution {
public:
    void reverseS(int st, int end, string &s) {
        while(st<=end) {
            swap(s[st],s[end]);
            st++;end--;
        }
        return ;
    }
    void seperate(vector<string> &sep, string &s) {
        for(int i=0; i<s.size(); i++) {
            string temp;
            if(s[i] == ' ') 
            continue;
            int j;
            for( j=i; j<s.size() && s[j] != ' '; j++) {
                temp.push_back(s[j]);
            }
            i = j;
            sep.push_back(temp);
        }
    }
    string reverseWords(string s) {
        int st=0,end=0;
        while(end<=s.size()) {
            if(s[end] == '\\0') {
                reverseS(st,end-1,s);
                reverseS(0,s.size()-1, s);
            }
            else if(s[end] == ' ') {
                reverseS(st,end-1,s);
                st = end+1;
            }
            end++;
        }
        vector<string> sep;
        seperate(sep,s);
        string ans = \\;
        for(int i=0; i<sep.size(); i++) {
            ans += sep[i];
            if(i != sep.size()-1) ans += \ \;
        }
        return ans;
    }
};