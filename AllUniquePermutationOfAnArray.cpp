class Solution {
  public:
  void solve(set<vector<int>> &ans,vector<int> &arr, int curr) {
      if(curr == arr.size()) {
          ans.insert(arr);
          return ;
      }
      
      for(int i=curr; i<arr.size(); i++) {
          swap(arr[i], arr[curr]);
          solve(ans,arr,curr+1);
          swap(arr[i],arr[curr]);
      }
      return ;
  }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        set<vector<int>> ans;
        sort(arr.begin(),arr.end());
        solve(ans,arr,0);
        vector<vector<int>> final;
        for(auto it:ans) final.push_back(it);
        
        return final;
    }
};