class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.length();
        int m = t.length();
        int maxlen = 0;

        int j = 0;

        for(int i=0;i<n;i++){
            if(s[i]==t[j]){
                j++;
                maxlen=max(maxlen,j);
            } 
        }


return m-maxlen;

    }
};