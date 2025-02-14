class Solution {
private:
    int dfs(int n, int m, int row, int col, vector<vector<int>> &memo){
        if(row>=n || col>=m) return 0;
        
        if(row==n-1 && col==m-1) return 1;
        
        if(memo[row][col]!=-1) return memo[row][col];
        
        int right = dfs(n,m,row,col+1,memo);
        int down = dfs(n,m,row+1,col,memo);
        
        memo[row][col] = right+down;

        return memo[row][col];
    }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(n,vector<int>(m,-1));
        return dfs(n,m,0,0,memo);
    }
};