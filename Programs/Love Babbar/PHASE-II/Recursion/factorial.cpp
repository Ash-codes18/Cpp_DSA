#include <iostream>
using namespace std;


inline int factorial(int n){

    if(n==1){
        return 1;
    }

    //This  is the base condition/base case

    //it means the place where the recursion should stop

    //It is mandatory to write return statement in base case


    return n*factorial(n-1);

}


int main(){

    
    int n;
    cout<<"Enter the no. to calculate the factorial for : ";
    cin>>n;

    cout<<"The value of factorial of "<<n<<" = "<<factorial(n)<<endl;


    return 0;
}