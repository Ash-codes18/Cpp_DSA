#include <iostream>
using namespace std;

void fibo(int n){

    int a=0;
    int b=1;
    cout<<a<<", "<<b;

    for(int i=2;i<n;i++){
        int sum=a+b;
        cout<<", "<<sum;
         a=b;
         b=sum;
    }
}


int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    fibo(n);
    
    return 0;
}