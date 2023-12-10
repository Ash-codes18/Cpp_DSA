#include <iostream>
using namespace std;

bool prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int t,l,r;
    cin>>t;

    while(t--){
        cin>>l>>r;
        // if(l<2 && r>=2){
        //     l=2;
        // }
        for(int i=l;i<=r;i++){
            if(prime(i)){
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }

    return 0;
}