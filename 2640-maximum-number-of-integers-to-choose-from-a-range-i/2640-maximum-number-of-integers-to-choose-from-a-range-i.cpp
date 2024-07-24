class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,bool> mp;
        for(int i : banned) mp[i] = true;

        int sum = 0, ans = 0;

        for(int i=1;i<=n;i++){
            if(!mp[i]){
                sum+=i;
                if(sum<=maxSum) ans++;
            }
            
        }

        return ans;
    }
};