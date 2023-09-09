#include <iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cout<<"Enter the the first no. : ";
    cin>>a;
    cout<<"Enter the the second no. : ";
    cin>>b;
    cout<<"Enter the the third no. : ";
    cin>>c;

    if(a>b && a>c){
        cout <<"The greatest no. is : "<<a;
    }

    else if(b>a && b>c){
        cout <<"The greatest no. is : "<<b;
    }

    else{
        cout <<"The greatest no. is : "<<c;
    }

    return 0;
}