#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the last no. of the sequence : ";
    cin>>n;


    int a=0;
    int b=1;

    cout<<a<<", ";
    cout<<b;

    for(int i=0;i<n-2;i++){

        int sum=a+b;
        
        cout<<", "<<a+b;

        a=b;
        b=sum;

    }

    return 0;
}