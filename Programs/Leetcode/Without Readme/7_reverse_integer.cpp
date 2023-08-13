#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        int a;
        int b = 0;
        
        while (x) {
            a = x % 10;
            
            if (b > INT_MAX / 10 || (b == INT_MAX / 10 && a > INT_MAX % 10)) return 0;
            if (b < INT_MIN / 10 || (b == INT_MIN / 10 && a < INT_MIN % 10)) return 0;
            
            b = a + b * 10;
            x = x / 10;
        }
        
        return b;
    }
};
