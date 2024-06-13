class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int,bool> mp;
        int ans = 0;
        int count = 0;

        for(int i = 1;i<=k;i++){
            mp[i]=false;
        }


        for(int i=n-1;i>=0;i--){
            
            if(count==k){
                return ans;
            }

            if(mp.find(nums[i])!=mp.end() && !mp[nums[i]]){
                mp[nums[i]]=true;
                count++;
            }

            ans++;

        }

return ans;

    }
};