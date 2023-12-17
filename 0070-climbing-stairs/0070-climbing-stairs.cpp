//Working fine till n=43, till on 44,45

//Need to use DP for passing all test cases using recursion 

/*
class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }

        if(n==2){
            return 2;
        }


        return climbStairs(n-1) + climbStairs(n-2);
    }
};
*/

class Solution {
public:
    int climbStairs(int n) {

        if(n==1){
            return 1;
        }

        if(n==2){
            return 2;
        }


        int a=1;
        int b=2;
        int sum;

        n-=2;

        for(int i=0;i<n;i++){
            sum=a+b;
            a=b;
            b=sum;
        }

    return sum;

    }
};