#include <iostream>
using namespace std;

int expo(int a, int b){
  
    int temp;

    if (b == 0){
        return 1;
    }

    temp = expo(a, b / 2);

    if (b % 2 == 0){
        return temp * temp;
    }
        
    else{
        return a * temp * temp;
    }

}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<a<<" to the power of "<<b<<" = "<<expo(a,b);

    return 0;
}