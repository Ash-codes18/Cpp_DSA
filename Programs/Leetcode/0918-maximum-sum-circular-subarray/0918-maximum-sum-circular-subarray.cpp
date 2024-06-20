// if max is in circular -> max = total - min

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int losum = 0;
        int hisum = 0;
        int maxsum = nums[0];
        int minsum = nums[0];
        int sum = 0;
        int ans = INT_MIN;

        for(int i : nums){
            sum+=i;
            losum=min(losum+i,i);
            minsum=min(minsum,losum);
            hisum=max(hisum+i,i);
            maxsum=max(maxsum,hisum);
        }

return (maxsum<0)? maxsum : max(maxsum,sum-minsum);

    }
};