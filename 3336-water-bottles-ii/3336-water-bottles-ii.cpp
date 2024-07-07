class Solution {
public:
    int maxBottlesDrunk(int a, int b) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int ans = a;

        while(a>=b){
            a-=b;
            ans++;
            a++;
            b++;
        }

    return ans;

    }
};