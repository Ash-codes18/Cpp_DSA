#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;

    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }

    return true;
}

bool isPrimeFast(int n){
    if(n<2) return false;

    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }

    return true;
}

bool isPrimeFaster(int n){
    if(n<2) return false;
    if(n<=3) return true;

    if(n%2 == 0 || n%3 == 0) return false;

    for(int i=5;i*i<n;i+=6){
        if(n%i == 0 || n%(i+2) == 0) return false;
    }

    return true;
}

int main() {

    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    cout<<n;
    // isPrime(n)? cout<<" is a prime no." : cout<<" is not a prime no.";
    // isPrimeFast(n)? cout<<" is a prime no." : cout<<" is not a prime no.";
    isPrimeFaster(n)? cout<<" is a prime no." : cout<<" is not a prime no.";


    return 0;
}