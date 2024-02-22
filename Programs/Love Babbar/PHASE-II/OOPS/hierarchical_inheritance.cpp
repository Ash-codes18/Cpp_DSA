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

class cat: public animal{

};


int main() {

    cat c;
    dog d;

    cout<<"hierarchical basically means when more than 1 class have a same parent class"<<endl;

    c.speak();
    d.speak();

    return 0;
}