#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
    long long ans=1;
    x=x%m; 
    
    while(n>0){
        if(n&1){
            ans=(ans*x)%m;
        }
        x=(x*1LL*x)%m; 
        n>>=1;
    }
    return ans;
}
