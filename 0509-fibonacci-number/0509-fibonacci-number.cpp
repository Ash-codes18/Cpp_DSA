class Solution {
public:
    int fib(int n) {
    
    if(n<=1){
        return n;
    }
        
    int a=0;
    int b=1;
    int sum;
        
    n-=1;
        
    while(n--){
        sum=a+b;
        a=b;
        b=sum;
    }
        
    return sum;
    
    }
};