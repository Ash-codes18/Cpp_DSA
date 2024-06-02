class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int val = 1;

       for(int i =0;i<n;i++){
        
            while(val<=nums[i]){
                if(n-i == val){
                    return val;
                }
                val++;
            }

        }


        return -1;
    }
};