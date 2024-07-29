class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int n = nums.size();
        int ans = 0, zero = 0, j = 0;

        for(int i=0;i<n;i++){
            if(nums[i]==0) zero++;
            while(zero>1 && j<=i){
                if(nums[j++]==0) zero--;
            }
            ans = max(ans,i-j+1);
        }
        

        return ans-1;
    }
};