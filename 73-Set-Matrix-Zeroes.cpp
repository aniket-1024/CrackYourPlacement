class Solution {
public:
    void solve(vector<vector<int>>& matrix, int i, int j) {

        for(int x = 0; x<matrix.size(); x++) {
            matrix[x][j] = 0;
        }
        for(int x = 0; x<matrix[0].size(); x++) {
            matrix[i][x] = 0;
        }
        return ;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> mp(n,vector<int>(m,-1));
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                if(matrix[i][j] == 0) {
                    mp[i][j] = 0;
                }
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(mp[i][j] == 0) solve(matrix,i,j); 
            }
        }
        return;
    }
};