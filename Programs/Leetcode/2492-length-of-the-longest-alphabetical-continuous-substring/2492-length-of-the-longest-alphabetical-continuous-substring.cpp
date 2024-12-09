class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n = s.length();
        int ans = 0, temp = 0;

        ios::sync_with_stdio(0);
        cin.tie(0);


        for(int i=0;i<n;i++){
            if(i+1<n){
                int a = s[i]-'a';
                int b = s[i+1]-'a';

                if(b-a==1) temp++;
                else{
                    ans = max(ans,temp);
                    temp = 0;
                }
            }
        }
        ans = max(ans,temp);

        return ans+1;
    }
};