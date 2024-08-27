class Solution{
    public:
    int sameChar(string a, string b)
    {
        // code here 
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        
        int ans = 0;
        for(int i=0; i<a.size(); i++) {
            if(a[i] == b[i]) ans++;
        }
        return ans;
    }
};