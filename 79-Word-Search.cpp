class Solution {
public:
    int delrow[4] = {-1,0,1,0};
    int delcol[4] = {0, 1,0,-1};
    bool solve(vector<vector<char>> &arr, string &word, int sr, int sc, int curr, vector<vector<int>> &vis) {

        if(curr >= word.size()) return true;

        vis[sr][sc] = 1;
        bool ans = false;
        for(int i=0; i<4; i++) {
            int cr = sr + delrow[i];
            int cc = sc + delcol[i];

            if(cr>=0 && cr<arr.size() && cc>=0 && cc<arr[0].size() && arr[cr][cc] == word[curr] && vis[cr][cc] == 0) {
                ans = ans || solve(arr, word, cr, cc, curr+1,vis);
                vis[cr][cc] = 0;
            }
        }
        vis[sr][sc] = 0;
        return ans;

    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<int> sr;
        vector<int> sc;
        int n =board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[0].size(); j++) {
                if(board[i][j] == word[0]) {
                    sr.push_back(i);
                    sc.push_back(j);
                }
            }
        }

        for(int i=0; i<sr.size(); i++) {
            if(solve(board,word, sr[i], sc[i],1,vis)) return true;
        }
        return false;
    }
};