#include <iostream>
using namespace std;

// if we declare any keyword as constant, we can’t change its value throughout the program.

int main(){

    const int a = 5;

    cout<<a<<endl;

    // a++;

    //It gives an error when we try to modify the value of a

    return 0;
}