class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       
        ios::sync_with_stdio(0);
        cin.tie(0);
       
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> minrow(n);
        vector<int> maxcol(m);

//row wise
        for(int i=0;i<n;i++){
            int ele = matrix[i][0];
            for(int j=1;j<m;j++){
                ele = min(ele,matrix[i][j]);
            }
            minrow[i] = ele;
        }

//col wise
        for(int i=0;i<m;i++){
            int ele = matrix[0][i];
            for(int j=1;j<n;j++){
                ele = max(ele,matrix[j][i]);
            }
            maxcol[i] = ele;
        }

        vector<int> ans;

        for(int i=0;i<minrow.size();i++){
            for(int j=0;j<maxcol.size();j++){
                if(minrow[i]==maxcol[j]) ans.push_back(minrow[i]);
            }
        }

        return ans;
    }
};