#include <iostream>
using namespace std;

void prime(int a){

    int n=a;
    int flag=1;

    for(int i=2;i<n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<a<<" is a prime no."<<endl;
    }
    else{
        cout<<a<<" is not a prime no."<<endl;
    }

}

int main(){

    int a;
    cout<<"Enter the number : ";
    cin>>a;

    prime(a);

    return 0;
}