//Failing 2 test cases

#include <iostream>
using namespace std;

int main(){

    int T,N;
    cin>>T;
    int a=1;
    int b=2;
    int i=0;
    while(i<T){
        cin>>N;
        int sum=a+b;
        int ans=2;

        if(N>2){
            while(sum<N){
                // cout<<sum<<endl;
                if(sum%2==0){
                    ans+=sum;
                }
                a=b;
                b=sum;
                sum=a+b;
            }
            cout<<ans<<endl;
            N=0;
            a=1;
            b=2;
            sum=0;
        }
        else{
            cout<<0<<endl;
        }
        i++;

    }
    

    return 0;
}