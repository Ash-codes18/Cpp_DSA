class Solution {
public:
    string clearDigits(string s) {
        int n = s.length();

        int i =0;

        while(i<n){
            if(isdigit(s[i])){
                s.erase(s.begin()+i-1,s.begin()+i+1);
                n-=2;
                i--;
            }
            else{
                i++;
            }
        }

        return s;


    }
};