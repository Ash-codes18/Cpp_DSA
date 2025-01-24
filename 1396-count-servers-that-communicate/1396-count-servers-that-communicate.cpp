class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        unordered_map<int,int> r,c;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    r[i]++;
                    c[j]++;
                }
            }
        }

        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(r[i]>=2 || c[j]>=2) ans++;
                }
            }
        }

        return ans;
    }
};

//   0 1
// 0 1 0
// 1 1 1