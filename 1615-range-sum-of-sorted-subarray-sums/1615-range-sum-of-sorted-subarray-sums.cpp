class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int MOD = 1e9 + 7;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                sum%=MOD;
                arr.push_back(sum);
            }
        }
        sort(arr.begin(),arr.end());
        int ans = 0;
        for(int i=left-1;i<right;i++){
            ans += arr[i];
            ans%=MOD;
        }
        return ans;
    }
};