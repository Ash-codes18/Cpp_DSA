#include <iostream>
using namespace std;

int main(){

    int n,p;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the power : ";
    cin >> p;

    int a=n;

    for(int i=0;i<p-1;i++){
        n = a*n;
    }

    cout << "The power of "<<a<<" to "<<p<<" is : " << n << endl;

    return 0;
}