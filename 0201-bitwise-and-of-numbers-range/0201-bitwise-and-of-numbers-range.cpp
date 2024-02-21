class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
 
        int cnt = 0;

        while (left != right) {
            if(left==0){
                return 0;
            }
            left >>= 1;
            right >>= 1;
            cnt++;
        }

        return (left << cnt);

    }
};