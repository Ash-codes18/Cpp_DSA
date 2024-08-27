class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        
        int n = nums.size(), s = 0, m =  n/2;
        int ans = n;
        while(s<n/2 && m<n){
            if(nums[s]<nums[m]){
                ans-=2;
                s++;
                m++;
            }
            else m++;
        }

        return ans;
    }
};