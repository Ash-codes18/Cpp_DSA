// AKA Dynamic polymorphism

#include <iostream>
using namespace std;

// method overiding or function overiding

class animal{

public:

    int legs=4;
    bool tail=true;

    void speaks(){
        cout<<"I speak"<<endl;
    }

};

class dog: public animal{

public:
    void speaks(){
        cout<<"I bark"<<endl;
    }

};



int main() {

    dog d;
    d.speaks();
    
    return 0;
}