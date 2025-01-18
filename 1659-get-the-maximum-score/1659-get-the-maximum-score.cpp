class Solution {
public:
    int maxSum(vector<int>& a, vector<int>& b) {
        int mod = 1e9+7;
        int n = a.size(), m = b.size();
        long long s1 = 0, s2 = 0;
        int i=0, j=0;

        ios::sync_with_stdio(0);
        cin.tie(0);

        while(i<n && j<m){
            if(a[i]<b[j]) s1+=a[i++];
            else if(a[i]>b[j]) s2+=b[j++];
            else{
                s1 = max(s1+a[i++],s2+b[j++]);
                s2 = s1;
            }
        }

        while(i<n) s1+=a[i++];
        while(j<m) s2+=b[j++];

        return max(s1,s2)%mod;
    }
};
 