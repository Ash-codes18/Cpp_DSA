class Solution {
public:
    int passThePillow(int n, int time) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        time = time % ((n - 1) * 2) + 1;
        return min(time,n*2-time);
    }
};