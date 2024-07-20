class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowsum, vector<int>& colsum) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int rows = rowsum.size();
        int cols = colsum.size();

        vector<vector<int>> ans(rows,vector<int>(cols));


        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=0;j--){
                if(rowsum[i]==0) break;
                if(colsum[j]<rowsum[i]){
                    ans[i][j] = colsum[j];
                    rowsum[i]-=colsum[j];
                    colsum[j]=0;
                }
                else{
                    ans[i][j]=rowsum[i];
                    colsum[j]-=rowsum[i];
                    rowsum[i]=0;
                }
            }
        }

return ans;

    }
};