class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        
        if(n==1){
            return nums;
        }


        for(int i=0;i<n;i++){
            if(i==0 && (nums[i+1]!=nums[i]+1 && nums[i]!=nums[i+1])){
                ans.push_back(nums[i]);
            }
            else if(i==n-1 && (nums[i]!=nums[i-1]+1 && nums[i]!=nums[i-1])){
                ans.push_back(nums[i]);
            }
            else if((i!=0 && i!=n-1) && (nums[i]!=nums[i-1] && nums[i]!=nums[i+1] && nums[i]!=nums[i-1]+1 && nums[i]!=nums[i+1]-1)){
                ans.push_back(nums[i]);
            }
        }


return ans;

    }
};