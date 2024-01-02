class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(char i : s){
            if(i=='1'){
                count++;
            }
        }

        for(int i =0;i<s.length()-1;i++){
            s[i]='0';
        }
        s[s.length()-1]='1';
        count--;


        for(int i=0;i<s.length()-1;i++){
            if(count==0){
                break;
            }
            s[i]='1';
            count--;
        }


return s;

    }
};