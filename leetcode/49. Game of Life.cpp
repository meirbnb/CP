class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
       int m = board.size();
       int n = board[0].size();
       for (int i=0; i<m; i++){
           for (int j=0; j<n; j++){
               int cnt = 0;
               for (int k=-1; k<=1; k++){
                   if (k == 0)
                    continue;
                   if (i + k < m && i + k >= 0)
                    cnt += abs(board[i + k][j])==1;
                   if (j + k < n && j + k >= 0)
                    cnt += abs(board[i][j + k])==1;
                   if (i + k < m && j + k < n && j + k >= 0 && i + k >= 0)
                    cnt += abs(board[i + k][j + k])==1;
                   if (i + k < m && j - k < n && j - k >= 0 && i + k >= 0)
                    cnt += abs(board[i + k][j - k])==1;
               }
               cout << cnt << ' ';
               if (board[i][j]){
                   if (cnt < 2 || cnt > 3)
                    board[i][j] = -1;
               } else {
                   if (cnt == 3)
                    board[i][j] = 2;
               }
           }
       }
       for (int i=0; i<m; i++)
           for (int j=0; j<n; j++)
               if (board[i][j]==-1)
                board[i][j] = 0;
               else if (board[i][j]==2)
                board[i][j] = 1;
    }
};

// https://leetcode.com/problems/game-of-life/