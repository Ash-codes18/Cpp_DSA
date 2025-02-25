class Solution {
private:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid, int temp, int &ans){
            int n = grid.size();
            int m = grid[0].size();
            
            if(row>=n || col>=m || row<0 || col<0 || grid[row][col]==0 || vis[row][col]) return;

            vis[row][col] = 1;
            temp+=grid[row][col];
            ans = max(ans,temp);

            int dx[] = {-1,1,0,0};
            int dy[] = {0,0,-1,1};

            for(int i=0;i<4;i++){
                int nrow = row+dx[i];
                int ncol = col+dy[i];
                dfs(nrow,ncol,vis,grid,temp,ans);
            }

            vis[row][col] = 0;
    }

public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vector<vector<int>> vis(n,vector<int>(m));
                if(grid[i][j]!=0)
                dfs(i,j,vis,grid,0,ans);
            }
        }

        return ans;
    }
};