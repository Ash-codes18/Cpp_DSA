#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    int power = 1<<(n-1);
    (power%n==1) ? cout<<"The no. is prime":cout<<"The no. is not prime"; 

    
    return 0;
}