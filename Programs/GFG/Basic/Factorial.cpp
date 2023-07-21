class Solution{
public:
    long long int factorial(int N){
        //code here
        long long int mul=1;
        for(int i=1;i<=N;i++){
            mul*=i;
        }
        return mul;
    }
};