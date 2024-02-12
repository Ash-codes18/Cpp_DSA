// approach-1 : fails when more than 1 element occuring more than n/2 times


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int ans;
        int cur=0;
        int val=nums[0];
        sort(nums.begin(),nums.end());

        for(int i:nums){
            cout<<i<<" ";
        }
        

        for(int i=0;i<n;i++){
            if(nums[i]==val){
                count++;
            }
            else{
                val=nums[i];
                count=1;
            }
            if(count>n/2 && cur<count){
                ans=val;
                cur=count;
            }
        }    
return ans;
    }
};
