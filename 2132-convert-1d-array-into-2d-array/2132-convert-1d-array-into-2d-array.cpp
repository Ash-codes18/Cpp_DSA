class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
        int s = arr.size();
        int ele = m*n;
        vector<vector<int>> empty;
        if(ele!=s) return empty;
        
        vector<vector<int>> ans(m,vector<int>(n));
        int row = 0;
        int col = 0;

        for(int i=0;i<s;i++){
            ans[row][col++]=arr[i];
            if((i+1)%n==0){
                row++;
                col = 0;
            }
        }

        return ans;

    }
};