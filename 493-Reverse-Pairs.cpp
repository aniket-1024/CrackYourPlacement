class Solution {
public:
    void merge(int low, int mid, int high, int &ans, vector<int> &nums) {
        int j=mid+1;
        for(int i=low; i<=mid; i++) {
            while(j<=high && nums[i] > 2*(long long)nums[j]) {
                j++;
            }
            ans += j-(mid+1);
        }    
        vector<int> temp;
        int left = low, right = mid+1;
        
        while(left <= mid && right<=high) {
            if(nums[left] < nums[right]) {
                temp.push_back(nums[left++]);
            } else if(nums[left] > nums[right]) {
                temp.push_back(nums[right++]);
            } else {
                temp.push_back(nums[left++]);
                temp.push_back(nums[right++]);
            }
        }

        while(left<=mid) {
            temp.push_back(nums[left++]);
        }
        while(right<=high) {
            temp.push_back(nums[right++]);
        }

        int i = low;
        for(auto it:temp) {
            nums[i++] = it;
        }
        return ;
    }
    void mergeSort(int l ,int r, int &ans, vector<int> &nums) {
        if(l>=r) return;

        int mid = (l+r)>>1;
        mergeSort(l,mid, ans, nums);
        mergeSort(mid+1, r, ans, nums);
        merge(l,mid,r, ans,nums);

        return;
    }
    int reversePairs(vector<int>& nums) {
        int ans = 0;
        mergeSort(0,nums.size()-1, ans, nums);
        return ans;
    }
};