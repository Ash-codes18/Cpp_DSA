#include <iostream>
#include <math.h>
using namespace std;

int main(){

    cout<<"List of Operators : "<<endl
        <<"+ for addition"<<endl
        <<"- for subtraction"<<endl
        <<"/ for division"<<endl
        <<"* for multiplication"<<endl
        <<"% for modulus"<<endl
        <<"^ for power"<<endl;

    int a,b;
    char op;

    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the operator : ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '/':
        cout<<a/b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '%':
        cout<<a%b;
        break;
    case '^':
        cout<<pow(a,b);
        break;
    
    default:
        cout<<"Enter a valid operator.";
        break;
    }


    return 0;
}