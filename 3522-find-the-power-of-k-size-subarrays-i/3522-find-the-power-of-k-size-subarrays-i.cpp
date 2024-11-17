class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n-k+1);

        ios::sync_with_stdio(0);
        cin.tie(0);

        for(int i=0;i<=n-k;i++){
            int maxi = -1;
            for(int j = i;j<i+k;j++){
                if(j!=i+k-1 && (nums[j]>nums[j+1] || nums[j]+1!=nums[j+1])){
                    maxi = -1;
                    break;
                }
                maxi = max(maxi,nums[j]);
            }   
            ans[i] = maxi;
        }

        return ans;
    }
};