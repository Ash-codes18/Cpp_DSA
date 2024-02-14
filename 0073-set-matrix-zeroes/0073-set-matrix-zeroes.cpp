class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows;
        set<int> cols;

        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        vector<int> row;
        vector<int> col;

        for(int i:rows){
            row.push_back(i);
        }

        for(int i:cols){
            col.push_back(i);
        }


        int a=row.size();
        int b=col.size();

        for(int i=0;i<a;i++){
            for(int j=0;j<m;j++){
                matrix[row[i]][j]=0;
            }
        }

        for(int i=0;i<b;i++){
            for(int j=0;j<n;j++){
                matrix[j][col[i]]=0;
            }
        }

    }
};