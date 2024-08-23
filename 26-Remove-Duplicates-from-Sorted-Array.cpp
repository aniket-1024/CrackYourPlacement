class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        stack<int> st;
        st.push(nums[0]);
        int n = nums.size();
        for(int i=1; i<n; i++) {
            if(st.top() == nums[i]) continue;
            st.push(nums[i]);
        }
        int ans = st.size();
        int cnt = st.size();
        while(!st.empty()) {
            nums[cnt-1] = st.top();
            st.pop();
            cnt--;
        }
        return ans;
    }
};