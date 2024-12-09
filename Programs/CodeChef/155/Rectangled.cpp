#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        n/=2;

        if(n%2==0){
            n/=2;
            cout<<n*n<<endl;
        }
        else{
            n/=2;
            cout<<n*(n+1)<<endl;
        }

    }


    return 0;
}