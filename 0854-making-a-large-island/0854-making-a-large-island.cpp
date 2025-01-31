class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<int>>& grid, int &temp, int &idx){
        int n = grid.size();
        if(row<0 || col<0 || row>=n || col>=n || grid[row][col]==0 || vis[row][col]) return;

        vis[row][col] = 1;
        temp++;
        grid[row][col] = idx;

        int dx[] = {0,0,-1,1};
        int dy[] = {-1,1,0,0};

        for(int i=0;i<4;i++){
            int nrow = dx[i]+row;
            int ncol = dy[i]+col;
            dfs(nrow,ncol,vis,grid,temp,idx);            
        }
    }


public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        queue<pair<int,int>> q;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) q.push({i,j}); 
            }
        }

        if(q.empty()) return n*n;

        vector<vector<int>> vis(n,vector<int>(n));
        unordered_map<int,int> mp;
        int idx = -1;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int temp = 0;
                if(!vis[i][j] && grid[i][j]!=0){
                    dfs(i,j,vis,grid,temp,idx);
                    mp[idx] = temp;
                    idx--;
                }
            }
        }

        int ans = 0;

        while(!q.empty()){
            auto[row,col] = q.front();
            q.pop();

            int dx[] = {0,0,-1,1};
            int dy[] = {-1,1,0,0};

            int temp = 1;
            unordered_set<int> st;

            for(int i=0;i<4;i++){
                int nrow = dx[i]+row;
                int ncol = dy[i]+col;

                if(nrow>=0 && ncol>=0 && nrow<n && ncol<n && grid[nrow][ncol]!=0){
                    st.insert(grid[nrow][ncol]);
                }
            }

            for(auto &i : st) temp+=mp[i];            
            ans = max(ans,temp);
        }

        return  (ans==0)? 1 : ans;
    }
};