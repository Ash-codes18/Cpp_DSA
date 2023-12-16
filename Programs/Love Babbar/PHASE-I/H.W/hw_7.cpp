#include <iostream>
using namespace std;

int setbit(int a){

    int num=0;

    while(a!=0){
        if(a&1==1){
            num++;
        }
        a=a>>1;
    }
    return num;

}

void counter(int a,int b){

int ans = setbit(a)+setbit(b);
cout<<"The number of set bits in the given two numbers is : "<<ans;

}

int main(){

    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    counter(a,b);

    return 0;
}