#include <iostream>
using namespace std;


class student{

public:
    int age;
    string name;

    student(){
        cout<<"Simple constructor called"<<endl;
    }

    student(int age, string name){
        this->age=age;
        this->name=name;
    }

    student(student& temp){
        this->age=temp.age;
        this->name=temp.name;
    }


};


int main() {

    student Ash(19,"Hero"); 
    cout<<Ash.age<<endl;
    cout<<Ash.name<<endl;

    student Van(Ash); 
    cout<<Ash.age<<endl;
    cout<<Ash.name<<endl;


    return 0;
}