#include <iostream>
using namespace std;

class A{

public:

    void speak(){
        cout<<"A speaks"<<endl;
    }    

};

class B{
public:

    void speak(){
        cout<<"B speaks"<<endl;
    }    

};

class C: public A, public B{
public:

    void speak(){
        cout<<"C speaks"<<endl;
    }   
};


int main() {

    C obj;
    
    // obj.speak();
    obj.A::speak();
    obj.B::speak();
    obj.speak();

    return 0;
}