class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;

        int lsum = 0;
        int rsum = 0;

        for(int i : nums){
            rsum+=i;
        }

        for(int i=0;i<n;i++){
            if(rsum-lsum==nums[i]){
                return i;
            }
            rsum-=nums[i];
            lsum+=nums[i];
        }

    return -1;

    }
};