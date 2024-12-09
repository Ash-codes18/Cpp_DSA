class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        vector<vector<int>> dist(n, vector<int>(m,INT_MAX));
        dist[0][0] = 0;

        using T = tuple<int,int,int>;
        priority_queue<T,vector<T>, greater<T>> pq;
        pq.push({0,0,0});

        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};

        while(!pq.empty()){
            auto[d,row,col] = pq.top();
            pq.pop();

            for(int i=0;i<4;i++){
                int nrow = row+dx[i];
                int ncol = col+dy[i];

                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m){
                    if(d+grid[nrow][ncol]<dist[nrow][ncol]){
                        dist[nrow][ncol] = d+grid[nrow][ncol];
                        pq.push({d+grid[nrow][ncol],nrow,ncol});
                    }
                }
            }
        }
        
        return dist[n-1][m-1];
    }
};