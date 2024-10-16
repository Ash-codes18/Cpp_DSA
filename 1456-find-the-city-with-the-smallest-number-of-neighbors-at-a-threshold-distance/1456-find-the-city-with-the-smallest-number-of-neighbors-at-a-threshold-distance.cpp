class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int t) {
        vector<vector<int>> dp(n,vector<int>(n,1e9));

        for(int i=0;i<n;i++){
            dp[i][i] = 0;
        }

        for(auto &i : edges){
            int v1 = i[0];
            int v2 = i[1];
            int d = i[2];
            dp[v1][v2] = d;
            dp[v2][v1] = d;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    int to = dp[j][k];
                    int via = dp[j][i];
                    int bw = dp[i][k];
                    if(to>via+bw){
                        dp[j][k] = via+bw;
                    }
                }
            }
        }

        int ans = -1;
        int city = 0;
        int currmin = INT_MAX;

        for(auto &i : dp){
            int val = 0;
            for(int &j : i){
                if(j<=t) val++;
            }
            if(currmin>=val){
                currmin = val;
                ans = city;
            }
            city++;
        }

        return ans;
    }
};