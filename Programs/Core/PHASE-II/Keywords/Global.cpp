#include <iostream>
using namespace std;

// We majorly use a Global variable when we want to pass the variable into several Functions

//It is a bad practice and should not be used

//If we want to do variable sharing we can directly use reference variables to do so

int glovar=22;

void a(){
    cout<<"Inside a : "<<glovar<<endl;
}

void b(){
    cout<<"Inside b : "<<glovar<<endl;
}


int main(){

    cout<<"Inside main : "<<glovar<<endl;
    a();
    b();

    return 0;
}