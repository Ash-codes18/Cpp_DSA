#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int b=n;
    int i=0;
    int a=0;
    int ans;
    int div=0;

    while(n>0){
        ans=n%2;
       n=n/2;
       div=ans*pow(10,i)+div;
        i++;
    }

    cout<<"Binary equivalent of "<<b<<" is : "<<div<<endl;

    return 0;
}