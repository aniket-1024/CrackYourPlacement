class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        int l = 0, r = m-1;
        long long minDiff = LLONG_MAX;
        while(r<n) {
            minDiff = min(minDiff, a[r]-a[l]);
            l++;
            r++;
        }
        return minDiff;
    }   
};