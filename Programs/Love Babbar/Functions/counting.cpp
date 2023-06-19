#include <iostream>
using namespace std;

void counter(int a){

    for (int i = 1; i <=a; i++)
    {
        cout<<i<<endl;
    }
    
}


int main(){

    int a;
    cout<<"Enter the number : ";
    cin>>a;

    counter(a);

    return 0;
}