class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        vector<int> count(n);
        int ones = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1') ones++;
            count[i] = ones;
        }

        int ans = INT_MIN;
        int zero = 0;

        for(int i=0;i<n-1;i++){
            if(s[i]=='0') zero++;
            ans = max(ans,count[i+1]+zero);
        }

        return ans;
    }
};