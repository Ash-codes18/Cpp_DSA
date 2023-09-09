#include <iostream>
using namespace std;

int main(){

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int sum1=0;
        long long int sum2=0;
        for(int i=0;i<n;i++){
            sum1+=i+1;
            sum2+=(i+1)*(i+1);
        }
        cout<<(sum1*sum1)-sum2<<endl;
    }

    return 0;
}