class Solution {
private:
    int dfs(int row, int col, vector<vector<int>> &mat, vector<vector<int>> &memo){
        int n = mat.size();
        int m = mat[0].size();
        
        if(row>=n || col>=m || mat[row][col]==1) return 0;
        
        if(row==n-1 && col==m-1) return 1;
        
        if(memo[row][col]!=-1) return memo[row][col];
        
        int right = dfs(row,col+1,mat,memo);
        int down = dfs(row+1,col,mat,memo);
        
        memo[row][col] = right+down;

        return memo[row][col];
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> memo(n,vector<int>(m,-1));
        return dfs(0,0,mat,memo);
    }
};