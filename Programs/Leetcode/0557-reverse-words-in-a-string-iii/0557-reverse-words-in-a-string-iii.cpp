class Solution {
public:
    string reverseWords(string s) {
        int i = 0,j=0;
        int n = s.length();


        while(i<=n){
            if(s[i]==' ' || i==n){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
            i++;
        }

        return s;

    }
};