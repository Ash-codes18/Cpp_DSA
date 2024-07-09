class Solution {
public:
    bool isPowerOfThree(int n) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        if(n<1) return false;

        while(n>1){
            if(n%3!=0) return false;
            n/=3;
        }

        return true;

    }
};