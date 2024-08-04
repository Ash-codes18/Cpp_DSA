class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int j = 0, ans = 0, zeros = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) zeros++;
            while(zeros>k){
                if(nums[j++]==0) zeros--;
            }
            ans = max(ans,i-j+1);
        }

        return ans;
    }
};