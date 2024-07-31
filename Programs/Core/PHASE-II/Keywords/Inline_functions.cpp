#include <iostream>
using namespace std;

//They are used to reduce function call overhead


//They perform similarly to macros by replacing the function where it is called with the contents of the function directly

//THey will always work with 1 line functions only

//They might or might not work with functions having 2-3 lines depending on the compiler

//THey will never work with functions have more than 3 lines


inline int getmax(int a, int b){
    return (a>b)? a:b;
}


int main(){

    int a,b;
    cout<<"Enter a no. : ";
    cin>>a;
    cout<<"Enter another no. : ";
    cin>>b;

    (a==getmax(a,b))? cout<<"a is greater than b":cout<<"b is greater than a."<<endl;
    

    return 0;
}