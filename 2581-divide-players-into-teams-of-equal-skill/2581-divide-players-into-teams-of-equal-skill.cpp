class Solution {
public:
    long long dividePlayers(vector<int>& a) {
        sort(a.begin(),a.end());

        int n = a.size();
        int s = 0, e = n-1;

        int sum = a[s]+a[e];
        long long ans = 0;

        while(s<e){
            if(sum==a[s]+a[e]){
                ans+=(a[s]*a[e]);
                s++;
                e--;
            }
            else{
                return -1;
            }
        }

        return ans;
    }
};