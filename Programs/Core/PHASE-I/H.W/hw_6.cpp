#include <iostream>
using namespace std;

void ap(int a){
    cout<<"The nth term of the A.P is : "<< (3*a)+7;
}

int main(){

int n;
cout<<"Enter the value of n : ";
cin>>n;

ap(n);

    return 0;
}