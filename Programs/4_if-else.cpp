#include <iostream>
using namespace std;

int main(){
    int age;
    int pass;
    cout << "Enter your age : ";
    cin >> age;

    if(age>=18 &&  age<=60){
        cout << "You can drive";
    }
    else if (pass==1)
    {
        cout <<"You can drive";
    }
    else{
        cout <<"You cannot drive";
    }
    
    return 0;
}