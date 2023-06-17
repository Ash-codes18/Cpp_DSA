class Solution {
public:
    int bitwiseComplement(int n) {
            int count=0;
            int num=n;
            if (n==0){
                return 1;
            }
        while(num>0){
            num=num/2;
            count++ ;
        }
        int val=1<<count;

        return n^(val-1);

    }
};