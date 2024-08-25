class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sr = 0, sc = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int er = n-1, ec = m-1;
        int count = 0;
        int total = n*m;
        vector<int> ans;
        while(count < total){
            for(int i=sc; i<=ec && count<total; i++) {
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            for(int i=sr; i<=er && count<total; i++) {
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            for(int i=ec; i>=sc && count<total; i--) {
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            for(int i=er; i>=sr && count<total; i--) {
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }
};