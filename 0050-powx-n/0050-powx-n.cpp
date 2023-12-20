//Approach-1

// Getting TLE After 291 test-cases

/*
class Solution {
public:
    double myPow(double x, int n) {

        if(n==0){
            return 1;
        }

        if(n%2==0){
            return myPow(x,n/2)*myPow(x,n/2);
        }
        else{
            if(n>0){
                return x*myPow(x,n/2)*myPow(x,n/2);
            }
            else{
                return (1/x)*myPow(x,n/2)*myPow(x,n/2);
            }
        }


    }
};
*/


//Same-approach but iteratively

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) {
            return 1;
        }

        double result=1.0;
        long long power=n;

        if(power<0){
            x=1/x;
            power=-power;
        }

        while(power>0){
            if(power%2==1){
                result*=x;
            }
            x*=x;
            power/=2;
        }

        return result;
    }
};

