class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int s = rolls.size();
        vector<int> ans(n);
        int sum = 0;
        for(int &i : rolls) sum+=i;

        int ts = mean*(s+n);
        int x = ts-sum;
        int rem = x%n;

        if(x<n || x<0 || (x/n==6 && rem>0) || x/n>6) return {};  

        for(int i=0;i<n;i++,rem--){
            if(rem>0) ans[i] = (x/n)+1;
            else ans[i] = x/n;
        }

        return ans;
    }
};