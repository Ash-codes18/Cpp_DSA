class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int val=nums[0];
        for(int i=1;i<n;i++){
            val^=nums[i];
        }
        return val;
    }
};