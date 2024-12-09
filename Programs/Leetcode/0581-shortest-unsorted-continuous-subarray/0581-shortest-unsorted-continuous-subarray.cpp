class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> ans = nums;
        sort(ans.begin(),ans.end());
        
        int n = nums.size();
        int l = 0, r = n-1;

        while(l<n && nums[l]==ans[l]) l++;
        while(r>=0 && nums[r]==ans[r]) r--;

        return max(r-l+1,0);
    }
};