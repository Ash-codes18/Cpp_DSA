class Solution {
public:
    int numberOfChild(int n, int k) {
        
        k = k % ((n-1)*2);

        return (k<n)? k : (n-1)*2 - k;

    }
};