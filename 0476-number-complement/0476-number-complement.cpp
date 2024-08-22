class Solution {
private:
    string get(int n){
        string ans="";
        while(n>0){
            if(n%2==0){
                ans.push_back('1');
            }
            else ans.push_back('0');
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int set(string s){
        int n = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                n+= pow(2,s.length()-i-1);
            }
        }   
        return n;
    }

public:
    int findComplement(int num) {
        string bits = get(num);
        return set(bits);
    }
};