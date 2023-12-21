class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int zero=0,one=0,two=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }

        int count=0;
        
        while(zero--){
            nums[count++]=0;
        }
        while(one--){
            nums[count++]=1;
        }
        while(two--){
            nums[count++]=2;
        }
        
    }
};