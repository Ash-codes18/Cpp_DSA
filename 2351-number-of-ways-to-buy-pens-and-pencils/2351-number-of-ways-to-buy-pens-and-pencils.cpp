class Solution {
public:
    long long waysToBuyPensPencils(int total, int a, int b) {
        long long ans = 0;
        long long pen = a;

        ios::sync_with_stdio(0);
        cin.tie(0);

        while(total>=0){
            ans+=(total/b)+1;
            pen+=a;
            total-=a;
        }

        return ans;
    }
};