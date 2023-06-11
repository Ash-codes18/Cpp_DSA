#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter a number: ";
    cin >>n;
    while (n>0)
    {
        cout<<"The number is positive\n";
        cout << "Enter a number: ";
        cin>>n;

    }
    cout<<"The number is negative";
    

    return 0;
}