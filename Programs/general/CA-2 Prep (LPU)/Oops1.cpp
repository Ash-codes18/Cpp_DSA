#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
};

int main(){

    Student s1;

    s1.name="Ram";
    s1.roll=1;  

    cout<<s1.name<<" : "<<s1.roll<<endl;

    Student *s2=new Student();
    s2->name="Raju";
    s2->roll=69;

    cout<<s2->name<<" : "<<s2->roll;

    return 0;
}