#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int i=2;
    int flag=1;
    
    if(n>1){
    while(i<=n/2){
        if(n%i==0){
            flag=0;
            break;
        }
        i++;
    }

    if(flag){
        cout<<"The given no. is prime";
    }
    else{
        cout<<"The given no. is not prime";
    }
    }

    else{
        cout<<"The given no. is not prime";
    }

    return 0;
}