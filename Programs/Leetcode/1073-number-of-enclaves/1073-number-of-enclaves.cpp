// approach -1 Using DFS

/*
class Solution {
private:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        
        if(row>=n || col>=m || row<0 || col<0 || vis[row][col] || grid[row][col]!=1) return;

        vis[row][col] = 1;

        int dx[] = {0,1,-1,0};
        int dy[] = {1,0,0,-1};

        for(int i=0;i<4;i++){
            int nrow = row+dx[i];
            int ncol = col+dy[i];

            dfs(nrow,ncol,vis,grid);
        }
    }

public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0 || j==m-1 || i==0 || i==n-1){
                    if(!vis[i][j] && grid[i][j]==1){
                        dfs(i,j,vis,grid);
                    }
                }
            }
        }

        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    ans++;
                }
            }
        }

        return ans;
    }
};
*/


//Approach-2 Using multisource bfs


class Solution {

public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        vector<vector<int>> vis(n,vector<int>(m));
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0 || j==m-1 || i==0 || i==n-1){
                    if(!vis[i][j] && grid[i][j]==1){
                        q.push({i,j});
                        vis[i][j]=1;
                    }   
                }
            }
        }


        //bfs
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            int dx[] = {0,0,-1,1};
            int dy[] = {1,-1,0,0};

            for(int i=0;i<4;i++){
                int nrow = r+dx[i];
                int ncol = c+dy[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                    q.push({nrow,ncol});
                    vis[nrow][ncol] = 1;
                }
            }

        }


        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    ans++;
                }
            }
        }

        return ans;
    }
};