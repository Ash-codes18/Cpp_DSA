class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<pair<int,int>> rows;
        vector<int> ans;

        
        for(int i=0;i<n;i++){
            int ones=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    ones++;
                }
            }
            // to break ties
            rows.push_back({ones*n+i,i});
        }

        sort(rows.begin(),rows.end());

        for(auto i:rows){
            cout<<i.first<<" : "<<i.second<<endl;
        }

        int count=0;

        for(auto row:rows){
            if(count>=k){
                break;
            }
            ans.push_back(row.second);
            count++;
        }


return ans;
    }
};
