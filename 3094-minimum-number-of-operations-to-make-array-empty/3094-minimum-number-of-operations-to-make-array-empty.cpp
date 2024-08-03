class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums) mp[i]++;

        int ans = 0;

        for(auto i : mp){
            if(i.second<2) return -1;
            int n = i.second%3;
            if(n==0) ans+=i.second/3;
            else if(n==1){
                if(i.second-3<2) ans+=i.second/2;
                else ans+=i.second/3 + 1; 
            }
            else ans+=i.second/3 + 1;
        }

        return ans;
    }
};