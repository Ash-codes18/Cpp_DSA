class Solution {
public:
    bool canAliceWin(int n) {
        int x = 10;
        int ans = 0;
        while(n>=x){
            n-=x;
            x--;
            ans = !ans;
        }

        return (ans==0)? false:true;
    }
};