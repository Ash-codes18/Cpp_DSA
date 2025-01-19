class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);

        pre[0] = nums[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1]+nums[i];
        }

        int s, ans = 0;

        for(int i=0;i<n;i++){
            s=max(0,i-nums[i]);
            ans+=pre[i];
            if(s-1>=0) ans-=pre[s-1];
        }

        return ans;
    }
};