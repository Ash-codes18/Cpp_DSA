
class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {

       //Your code here
       if(R==0){
           return 1;
       }
       long long ans=power(N,R/2);
       
    if(R%2==0){
        return (ans*ans)%mod;
    }
    
    else{
        return (N*((ans*ans)%mod))%mod;
    }
    
    
    }

};