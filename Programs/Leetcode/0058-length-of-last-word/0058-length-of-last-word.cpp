class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length()-1;
        int spaces=0;
        for(int i=n;i>=0;i--){

            if(s[i]==' ' && (s[i+1]<'z' && s[i+1]>'A')){
                return n-i-spaces;
            }
            else if(s[i]==' '){
                spaces++;
            }
        }
        return n+1-spaces;   
    }
};