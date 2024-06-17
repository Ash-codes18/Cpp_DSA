class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int n = nums.size();
        int sum=nums[0];

        map<int,bool> mp;

        for(int i : nums){
            mp[i]=true;
        }

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }

        while(1){
            if(mp[sum]){
                sum++;
            }
            else{
                return sum;
            }
        }

return sum;

    }
};