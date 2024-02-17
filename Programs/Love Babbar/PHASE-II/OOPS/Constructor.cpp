#include <iostream>
using namespace std;


class student{

public:
    int age;
    string name;

//default contructor gets removed and this becomes the only existing constructor
    student(){
        cout<<"Constructor called"<<endl;
    }

//parameterised constructor
    student(int age){
        cout<<"this -> "<<this<<endl;
        this->age = age;
    }

    student(int age, string name){
        this->name=name;
        this->age = age;
    }
};


int main() {

    cout<<"Object created statically"<<endl;
    student s(15); 
    cout<<"Printed message"<<endl<<endl;
    cout<<s.name<<endl;

    cout<<"Created object dynamically"<<endl;
    student *ss = new student();
    cout<<"Printed message"<<endl<<endl;
    cout<<ss->name<<endl;

    cout<<"Address of object s = "<<&s<<endl;

    student sss(19,"Ash");
    cout<<sss.name<<endl;




    return 0;
}