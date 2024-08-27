class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;   

        if(nums[s]<nums[e]) return nums[s];

        while(s<e){
            int mid = (s+e)/2;
            if(nums[mid]<nums[e]){
                e = mid;
            }
            else s=mid+1;
        }

        return nums[e];

    }
};