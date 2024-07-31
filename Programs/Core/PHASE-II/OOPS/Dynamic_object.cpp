#include <iostream>
using namespace std;


class student{

public:
    int age;
    string name;

};


int main() {

    student *ash = new student;

    //When we create an object dynamically we use the -> operator to access the elements easily
    ash->age=20;
    (*ash).name="Ashmit";

    cout<<(*ash).name<<endl;
    cout<<ash->age<<endl;


    return 0;
}