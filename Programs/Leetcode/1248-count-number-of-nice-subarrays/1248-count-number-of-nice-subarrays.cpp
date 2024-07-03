class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int i=0,j=0,k=0;
        int count = 0, ans = 0;


        for(int i=0;i<n;i++){

            if(nums[i]%2){
                count++;
            }

            if(count == x){
                while(nums[j]%2==0){
                    j++;
                }
                ans+=j-k+1;
            }

            else if(count>x){
                while(nums[k]%2==0){
                    k++;
                }

                k++;
                j=k;    
                count--;

                while(nums[j]%2==0){
                    j++;
                }
                ans+=j-k+1;
            }
        }



return ans;


    }
};