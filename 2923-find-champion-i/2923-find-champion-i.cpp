class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        
        int n=grid.size();
        vector<int> val(n,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    val[i]++;
                }
            }
        }

        int maxind=0;

        for(int i=0;i<n;i++){
            if(val[maxind]<val[i]){
                maxind=i;
            }
        }


        return maxind;
    }
};