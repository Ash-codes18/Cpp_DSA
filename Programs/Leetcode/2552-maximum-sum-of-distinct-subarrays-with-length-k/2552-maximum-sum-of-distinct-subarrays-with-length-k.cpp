class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int j = 0;
        long long sum = 0, csum = 0;
        unordered_map<int,int> mp;

        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            csum += nums[i];
        }

        if(mp.size()==k) sum = csum;

        for(int i=k;i<n;i++,j++){
            csum+=nums[i];
            csum-=nums[j];
            mp[nums[i]]++;
            mp[nums[j]]--;

            if(mp[nums[j]]==0) mp.erase(nums[j]);

            if(mp.size()==k) sum = max(sum,csum);
        }

        return sum;
    }
};