#include <iostream>
using namespace std;

int main(){
  
    int n;
    cout << "Enter a number: ";
    cin >>n;

    do{
        if(n<0){
            cout<<"the number is negative";
            continue;
        }
        cout<<"The number is positive\n";
        cout << "Enter a number: ";
        cin>>n;
    }while (n>0);

    return 0;
}