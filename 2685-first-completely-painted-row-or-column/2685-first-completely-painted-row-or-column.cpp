class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        ios::sync_with_stdio(0);
        cin.tie(0);

        unordered_map<int,int> r;
        unordered_map<int,int> c;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                r[mat[i][j]] = i;
                c[mat[i][j]] = j;
            }
        } 

        vector<int> row(n);
        vector<int> col(m);

        for(int i=0;i<n*m;i++){
            int rw = r[arr[i]];
            int cl = c[arr[i]];

            if(++row[rw]==m || ++col[cl]==n) return i;
        }

        return -1;
    }
};