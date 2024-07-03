class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));

        int sc=0,sr=0,ec=n-1,er=n-1;
        int val = 1;
        n*=n;

        while(val<=n){

            //right
            for(int i=sc;i<=ec;i++){
                v[sr][i]=val++;
            }

            sr++;
    
            //down

            for(int i=sr;i<=er;i++){
                v[i][ec]=val++;
            }

            ec--;

            //left

            for(int i=ec;i>=sc;i--){
                v[er][i]=val++;
            }

            er--;

            //up

            for(int i=ec;i>=sr;i--){
                v[i][sc]=val++;
            }

            sc++;

        }


return v;

    }
};