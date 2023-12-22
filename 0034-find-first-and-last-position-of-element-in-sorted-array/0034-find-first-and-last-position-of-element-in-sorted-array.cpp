class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans={-1,-1};

        int first=-1;
        int last=-1;

        int start=0;
        int end=nums.size()-1;
        int mid;

//Finding First Occurence

        while(start<=end){
            mid=(start+end)/2;

            if(nums[mid]>target){
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                first=mid;
                end=mid-1;
            }
        }

//Finding Last Occurence

        start=0;
        end=nums.size()-1;
        
        while(start<=end){
            mid=(start+end)/2;

            if(nums[mid]>target){
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                last=mid;
                start=mid+1;
            }
        }
        
ans[0]=first;
ans[1]=last;

return ans;

    }
};