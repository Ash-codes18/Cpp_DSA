#include <iostream>  //This is preprocessor directive, it directly brings the neccessary files that are required to perform the operations present inside it into our code directly.

#define PI 3.14  //This is a Macro

// A Macro is piece of code in a program that is replaced by the value of Macro

// It doesn't take extra memory

// It just changes all the value where the macro is present with its value before the program gets compiled

using namespace std;

int main(){

    double area = 2*PI*5;
    cout<<"Area = "<<area<<endl;

    cout<<PI*2;

    return 0;
}