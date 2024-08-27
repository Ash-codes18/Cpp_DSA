class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums) mp[i]++;

        int ans = 0;

        for(auto i : mp){
            if(i.second==1) return -1;
            int n = i.second;
            ans += n/3;
            if(n%3) ans++;
        }

        return ans;
    }
};