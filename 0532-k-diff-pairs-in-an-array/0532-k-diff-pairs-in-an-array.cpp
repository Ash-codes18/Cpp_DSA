class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        if (k < 0) return 0;


        unordered_map<int,int> mp;
        int ans = 0;
        for(int &i: nums) mp[i]++;

        for(auto &i : mp){
//When we need pairs of same numbers
            if(k==0){
                if(i.second>1) ans++;
            }
//General Case
            else{
                if(mp.find(i.first+k) != mp.end()) ans++;
            }
        }

        return ans;
    }
};