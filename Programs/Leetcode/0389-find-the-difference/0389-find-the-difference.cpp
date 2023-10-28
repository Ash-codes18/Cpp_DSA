class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n=s.length();
        int m=t.length();
        
        if(n==0){
            return t[0];
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(n>m){
            for(int i=0;i<n;i++){
                if(s[i]!=t[i]){
                    return s[i];
                }
            }
        }

         if(n<m){
            for(int i=0;i<m;i++){
                if(s[i]!=t[i]){
                    return t[i];
                }
            }
        }
return 0;

    }
};