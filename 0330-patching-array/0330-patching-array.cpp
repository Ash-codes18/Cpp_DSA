class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int s = nums.size();
        int patch = 0;
        long long csum=0,sum = 0;
    

        int i = 0;

        while(sum<n){

            if(i<s){
                csum += nums[i];

                if(nums[i]<=sum+1){
                    sum=csum;
                    i++;
                }
                else{
                    csum-=nums[i];
                    patch++;
                    csum+=sum+1;
                    sum=csum;
                }
            }


            else{
                patch++;
                csum+=sum+1;
                sum=csum;
            }

        }




return patch;

    }
};