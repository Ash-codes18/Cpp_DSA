class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int n = nums.size();
        int s = 0;
        int m =  n/2;
        while(s<n/2 && m<n){
            if(nums[s]<nums[m]){
                nums[s]=-1;
                nums[m]=-1;
                s++;
                m++;
            }
            else m++;
        }

        int ans = 0;

        for(int i : nums){
            if(i!=-1) ans++;
        }

        return ans;
    }
};