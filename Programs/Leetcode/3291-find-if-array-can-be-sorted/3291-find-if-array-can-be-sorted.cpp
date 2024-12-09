class Solution {
public:
    bool canSortArray(vector<int>& nums){
        int n = nums.size();
        vector<int> done = nums;
        sort(done.begin(),done.end());

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                    if(__builtin_popcount(nums[j]) == __builtin_popcount(nums[j+1])){
                        if(nums[j]>nums[j+1]){
                        swap(nums[j],nums[j+1]);
                    }
                    // else{
                    //     if(nums[j]>nums[j+1]) return false;
                    // }
                }
            }
        }
        
        return nums==done;
    }
};