class Solution{
private:
    void dfs(int i, int j, vector<vector<int>> &grid, int count){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0 || (1 < grid[i][j] && grid[i][j] < count)) return;

        grid[i][j] = count;

        dfs(i-1,j,grid,count+1);
        dfs(i+1,j,grid,count+1);
        dfs(i,j-1,grid,count+1);
        dfs(i,j+1,grid,count+1);
    }


public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.size() == 0) return -1;
        
        int n = grid.size();
        int m = grid[0].size();
        int ans = 2;


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2 ){
                    dfs(i,j,grid,2);
                }
            }
        }


        for(auto &i : grid){
            for(int j : i){
                if(j==1) return -1; 
                ans = max(ans,j);
            }
        }

        return ans-2;
    }
};