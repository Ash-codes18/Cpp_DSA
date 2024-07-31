#include <iostream>
using namespace std;

int expo(int a, int b){
  
    int result=1;

    while(b>0){
        if(b%2==1){
            result*=a;
        }
        a*=a;
        b/=2;
    }

    return result;

}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<a<<" to the power of "<<b<<" = "<<expo(a,b);

    return 0;
}