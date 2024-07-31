// A reference variable is something which has same memory as the one it referencing too and any operations perform on it are equal to performing the operations on the value it is the reference of.

#include <iostream>
using namespace std;

int main(){

    int a=5;
    int& b= a;  //this is a reference variable


    cout<<a<<endl;
    a++;
    cout<<b<<endl;
    b++;
    cout<<a<<endl;
    cout<<b<<endl;


    return 0;
}