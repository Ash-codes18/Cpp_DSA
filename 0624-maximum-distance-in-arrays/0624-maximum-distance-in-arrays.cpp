class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int n = arr.size();
        int ans = INT_MIN;

        int mini = arr[0][0];
        int maxi = arr[0][arr[0].size()-1];

        for(int i=1;i<n;i++){
            int m = arr[i].size()-1;
            ans = max(ans,abs(maxi-arr[i][0]));
            ans = max(ans,abs(mini-arr[i][m]));
            mini = min(mini,arr[i][0]);
            maxi = max(maxi,arr[i][m]);
        }

        return ans;
    }
};