class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        if(n<k){
            reverse(s.begin(),s.end());
            return s;
        }

        int i = 0;

        while(i<n){

            if(i+k<=n){
                reverse(s.begin()+i,s.begin()+i+k);
                i+=2*k;
            }
            else{
                reverse(s.begin()+i,s.end());
                break;
            }

        }


    return s;

    }
};