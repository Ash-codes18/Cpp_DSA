//One Test case failing

#include <iostream>
using namespace std;

int main(){

    int T,N;
    cin>>T;
    int i=0;
    while(i<T){
        cin>>N;
        int ans=0;
        int j=2;
        while(j<=N){
            if(N%j==0){
                ans=j;
                N=N/j;
            }
            else{
                j++;
            }
        }
        cout<<ans<<endl;
        i++;
    }
    return 0;
}