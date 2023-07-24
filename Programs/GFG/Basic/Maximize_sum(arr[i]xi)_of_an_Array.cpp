//100 TEST CASES FAILING

class Solution{
    public:

    int sort(int a[],int n){
        int temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    }

    int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i]*i;
        }
        return sum;
        
    }
};