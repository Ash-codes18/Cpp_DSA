class Solution {
public:
    int countKDifference(vector<int>& nums, int k, int ans = 0) {
        unordered_map<int,int> mp;
        for(int i : nums) mp[i]++;
        for(int i : nums) if(mp.find(i+k)!=mp.end()) ans+=mp[i+k];
        return ans;
    }
};