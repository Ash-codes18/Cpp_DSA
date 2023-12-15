#include <iostream>
using namespace std;


int main(){


    int a=12;
    int *ptr=&a;
    int **pptr=&ptr;

    cout<<endl<<endl;
    
    cout<<&pptr<<endl<<endl;

    cout<<pptr<<endl;
    cout<<&ptr<<endl<<endl;

    cout<<*pptr<<endl;
    cout<<ptr<<endl;
    cout<<&a<<endl<<endl;

    cout<<**pptr<<endl;
    cout<<*ptr<<endl;
    cout<<a<<endl;

    cout<<endl<<endl;


    

    return 0;
}