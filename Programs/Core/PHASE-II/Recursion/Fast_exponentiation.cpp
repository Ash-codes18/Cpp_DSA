#include <iostream>
using namespace std;


int getpower(int a, int b){

    if(b==0){
        return 1;
    }

    if(b==1){
        return a;
    }

    if(b%2==0){
        return getpower(a,b/2)*getpower(a,b/2);
    }

    else{
        return a * getpower(a,b/2)*getpower(a,b/2);
    }


}


int main(){

    int n,expo;

    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Enter a power : ";
    cin>>expo;

    cout<<n<<" to the power of "<<expo<<" = "<<getpower(n,expo);


    return 0;
}