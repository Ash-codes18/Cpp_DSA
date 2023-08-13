class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> fibb;
        long long a=1,b=1,c;
        fibb.push_back(a);
        if(n>1){
        fibb.push_back(b);
        for(int i=2;i<n;i++){
            c=a+b;
            fibb.push_back(c);
            a=b;
            b=c;
        }
        }
        return fibb;
    }
};