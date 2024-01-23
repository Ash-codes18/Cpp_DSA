class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int val=0;


        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>2){
                nums[i]=INT_MAX;
                val++;
            }
        }

        sort(nums.begin(),nums.end());

        return n-val;
        
    }
};