class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int s = nums.size();
        int patch = 0;
        long long sum = 0;
    
    
        int i = 0;

        while(sum<n){

            if(i<s){
                if(nums[i]<=sum+1){
                    sum += nums[i];
                    i++;
                }
                else{
                    patch++;
                    sum+=sum+1;
                }
            }

            else{
                patch++;
                sum+=sum+1;
            }

        }


return patch;

    }
};