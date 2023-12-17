#include <iostream>
using namespace std;


inline int getpower(int n, int expo){
    if(expo==0){
        return 1;
    }


    return n * getpower(n,expo-1);
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