// Approach-1 : Iterative

class Solution {
public:
    int fib(int n) {

        ios::sync_with_stdio(0);
        cin.tie(0);

        if(n<=1) return n;
        
        int a=0, b=1, sum;
        n-=1;
            
        while(n--){
            sum=a+b;
            a=b;
            b=sum;
        }

        return b;
    }
};

// Approach-2 : Recursive - 1 LOC

// class Solution {
// public:
//     int fib(int n) {
//         return (n<=1)? n : fib(n-1)+fib(n-2);
//     }
// };