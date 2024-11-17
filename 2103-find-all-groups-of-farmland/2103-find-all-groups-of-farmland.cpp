class Solution {
private:
    void dfs(int row, int col, vector<vector<int>> &land, pair<int,int> &b){
        int n = land.size();
        int m = land[0].size();

        if(row>=n || col>=m || land[row][col]==0) return;

        land[row][col] = 0;
        b = {max(b.first,row),max(b.second,col)};
        
        dfs(row+1,col,land,b);
        dfs(row,col+1,land,b);
    }


public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size();
        int m = land[0].size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j]==1){
                    pair<int,int> b = {0,0};
                    dfs(i,j,land,b);
                    ans.push_back({i,j,b.first,b.second});
                }
            }
        }

        return ans;
    }
};