class Solution {
public:
    bool isPalindrome(int x) {
      long int p=0;
        int n=x;
        while(n>0){
            int a=n%10;
            p=(p*10)+a;
            n=n/10;
        }
        if(x==p){
            return true;
        }
        return false;
    }
};