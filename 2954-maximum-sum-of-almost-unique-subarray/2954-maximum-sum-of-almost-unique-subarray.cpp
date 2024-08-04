class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int n = nums.size();
        long long sum = 0, csum = 0;
        int j = 0;
        unordered_map<int,int> mp;

        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            csum+=nums[i];
        }

        if(mp.size()>=m) sum = csum;

        for(int i=k;i<n;i++,j++){
            csum+=nums[i];
            csum-=nums[j];

            mp[nums[i]]++;
            mp[nums[j]]--;

            if(mp[nums[j]]==0) mp.erase(nums[j]);

            if(mp.size()>=m) sum = max(sum,csum);
        }
        
        return sum;
    }
};