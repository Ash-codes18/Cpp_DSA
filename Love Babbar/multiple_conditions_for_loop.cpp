#include <iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            cout<<i<<" ";
        }
    }

    return 0;
}