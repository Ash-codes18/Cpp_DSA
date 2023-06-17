class Solution {
public:
    int mySqrt(int x) {
        long long int a = 0;
        
        for (long long int i = 0; (i * i) <= x; i++) {
            a = i;
        }
        
        return a;
    }
};
