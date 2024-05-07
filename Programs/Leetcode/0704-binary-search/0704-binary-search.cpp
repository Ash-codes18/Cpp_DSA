class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s =0;
        int e =n-1;
        int mid;

        while(s<=e){
            mid = s-(s-e)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }


        return -1;

    }
};