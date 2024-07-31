// AKA Static polymorphism

#include <iostream>
using namespace std;


// 1. -> Function Overloading

class poly{

public:
    
    void hello(){
        cout<<"Hello person"<<endl;
    }

    void hello(string name){
        cout<<"Hello "<<name<<endl;
    }

    void hello(int a){
        cout<<a<<" hello"<<endl;
    }

};


// 2. -> Operator overloading

class op{

public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+ (op &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<val1-val2<<endl;
        cout<<"Subtracted using +"<<endl;
    }

    void operator- (op &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<val1+val2<<endl;
        cout<<"Added using -"<<endl;
    }

    void operator() (){
        cout<<"Overloaded a bracket"<<endl;
    }

};



int main() {

    poly a;
    a.hello();
    a.hello("ash");
    a.hello(5);

    op obj1,obj2;

    obj1.a=8;  
    obj2.a=5;

    obj1+obj2;
    obj1-obj2;

    obj1();


    
    return 0;
}