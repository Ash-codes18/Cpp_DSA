class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int g=purchaseAmount/10;
        int r = purchaseAmount%10;
        if(r<5){
            r=0;
        }
        else{
            r=10;
        }
        int t=g*10+r;
        return 100-t;
    }
};