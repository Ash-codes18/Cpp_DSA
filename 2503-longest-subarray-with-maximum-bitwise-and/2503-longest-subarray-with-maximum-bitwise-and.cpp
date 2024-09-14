class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int n = nums.size();

        int k = nums[0];
        for(int i=1;i<n;i++) k=max(nums[i],k);
        
        int ans = 0, temp = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==k) temp++;
            else temp = 0;
            ans = max(ans,temp);
        }

        return ans;
    }
};