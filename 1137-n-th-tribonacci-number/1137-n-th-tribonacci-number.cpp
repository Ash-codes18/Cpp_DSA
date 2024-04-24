class Solution {
public:
    int tribonacci(int n) {
        int a = 0;
        int b = 1;
        int c = 1;

        if(n<1){
            return 0;
        }

        if(n<3 && n>0){
            return 1;
        }


        n-=2;

        int tribo;

        while(n--){
            tribo=(a+b+c);
            a=b;
            b=c;
            c=tribo;
        }

return tribo;

    }
};