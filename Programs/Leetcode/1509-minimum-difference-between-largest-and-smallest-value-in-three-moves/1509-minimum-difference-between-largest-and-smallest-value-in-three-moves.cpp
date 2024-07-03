class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n<5) return 0;

        sort(nums.begin(),nums.end());

        int j=n-4, i = 0;
        int ans = INT_MAX;

        while(j<n) ans = min(ans,nums[j++]-nums[i++]);

return ans;

    }
};