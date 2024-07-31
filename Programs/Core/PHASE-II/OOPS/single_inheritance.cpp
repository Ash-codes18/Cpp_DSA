#include <iostream>
using namespace std;

class animal{

public:
    int legs=4;
    bool tail=true;
    string nose="sharp";

    void speak(){
        cout<<"Speaking "<<endl;
    }    

};

class dog: public animal{

};


int main() {

    dog d;
    d.speak();
    cout<<d.legs;
    
    return 0;
}