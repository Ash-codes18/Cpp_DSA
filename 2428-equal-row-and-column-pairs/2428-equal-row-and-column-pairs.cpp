class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;

        for(int i=0;i<n;i++){
            vector<int> row;
            for(int j=0;j<n;j++){
                row.push_back(grid[i][j]);
            }
            for(int j=0;j<n;j++){
                int ind = 0;
                bool flag = true;
                for(int k=0;k<n;k++){
                    if(grid[k][j]!=row[ind++]){
                        flag = false;
                        break;
                    }
                }
                if(flag) ans++;  
            }
        }

        return ans;
    }
};