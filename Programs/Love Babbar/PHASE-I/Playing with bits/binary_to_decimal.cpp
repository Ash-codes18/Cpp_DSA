#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int i=0;
    int a=0;

    while(n>0){

        int bit = n%10;

        a=(pow(2,i)*bit)+a;

        n=n/10;
        i++;

    }

    cout<<"Decimal equivalent of "<<n<<" is : "<<a<<endl;

    return 0;
}