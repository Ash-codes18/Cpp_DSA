// To calculate GCD/HCF

// Algo :

//gcd(a,b) = gcd(a-b,b)
        // or
// gcd(a,b)=gcd(a%b,b)


#include <iostream>
using namespace std;

int gcd(int a, int b){


    int hcf=a%b;
    while(hcf!=0){
        a=b;
        b=hcf;
        hcf=a%b;
    }
    return b;

}



    int main(){

    int a,b;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" = "<<gcd(a,b);
    

    return 0;
}