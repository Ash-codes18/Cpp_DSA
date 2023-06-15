#include <iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    cout<<"a & b = "    <<(a&b)<<endl;
    cout<<"a | b = "<<(a|b)<<endl;
    cout<<"a ^ b = "<<(a^b)<<endl;
    cout<<"~a = "<<~a<<endl;
    cout<<"~b = "<<~b<<endl;
    cout<<(5<<2)<<endl;
    cout<<(5>>2)<<endl;

    return 0;
}