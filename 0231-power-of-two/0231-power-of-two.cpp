class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        int checker = 0;

        while (1) {
            if (checker > n || i > 30) {
                return false;
            }
            checker = pow(2, i);
            if (checker == n) {
                return true;
            }
            i++;
        }
    }
};