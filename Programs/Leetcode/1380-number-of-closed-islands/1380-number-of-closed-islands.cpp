class Solution {
private:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        if(row<0 || row>=n || col<0 || col>=m || vis[row][col] || grid[row][col]==1) return;

        vis[row][col] = 1;

        int dx[] = {0,0,-1,1};
        int dy[] = {-1,1,0,0};

        for(int i=0;i<4;i++){
            int nrow = row+dx[i];
            int ncol = col+dy[i];

            dfs(nrow,ncol,vis,grid);
        }

    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        vector<vector<int>> vis(n,vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j==m-1){
                    if(!vis[i][j] && grid[i][j]==0){
                        dfs(i,j,vis,grid);
                    }
                }
            }
        }

        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==0){
                    dfs(i,j,vis,grid);
                    ans++;
                }
            }
        }


    return ans;

    }
};