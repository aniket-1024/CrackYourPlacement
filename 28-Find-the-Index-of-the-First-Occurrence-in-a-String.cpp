class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.size(); i++) {
            int curr = i;
            int j = 0;
            while(j<needle.size()) {
                if(haystack[curr] != needle[j]) break;
                curr++;
                j++;
            }
            if(j==needle.size()) return i;
        }
        return -1;
    }
};