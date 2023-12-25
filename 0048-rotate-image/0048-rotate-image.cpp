class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();

        vector<vector<int>> ans;
        vector<int> temp;

        for(int j=0;j<col;j++){
            for(int i=row-1;i>=0;i--){
                temp.push_back(matrix[i][j]);
            }
        ans.push_back(temp);
        temp.clear();
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                matrix[i][j]=ans[i][j];
            }
        }

    }
};