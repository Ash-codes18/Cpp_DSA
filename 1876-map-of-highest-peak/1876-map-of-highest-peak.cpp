class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        vector<vector<int>> vis(n,vector<int>(m));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    q.push({i,j});
                    arr[i][j] = 0;
                    vis[i][j] = 1;
                }
            }
        }

        while(!q.empty()){
            auto[row,col] = q.front();
            q.pop();

            int dx[] = {0,0,-1,1};
            int dy[] = {-1,1,0,0};
        
            for(int i=0;i<4;i++){
                int nrow = row+dx[i];
                int ncol = col+dy[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol]){
                    vis[nrow][ncol] = 1;
                    arr[nrow][ncol] = arr[row][col]+1;
                    q.push({nrow,ncol});
                }
            }
        }

        return arr;
    }
};


