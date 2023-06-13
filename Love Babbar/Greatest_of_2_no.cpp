#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    if(a>b){
        cout<<"a is greater than b"<<endl;
    }
    else if(b>a){
        cout<<"b is greater than a"<<endl;
    }
    else{
        cout<<"Both a and b are equal";
    }


    return 0;
}