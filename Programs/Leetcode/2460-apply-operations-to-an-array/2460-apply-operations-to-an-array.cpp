class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        int n = nums.size();
        
        for(int i = 0;i<n;i++){
            if(i+1<n && nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }

        int j = 0;

        for(int i=1;i<n;i++){
            if(nums[j]==0){
                if(nums[i]!=0){
                    swap(nums[i],nums[j]);
                    j++;
                }
            }
            else{
                j++;
            }
        }


    return nums;

    }
};