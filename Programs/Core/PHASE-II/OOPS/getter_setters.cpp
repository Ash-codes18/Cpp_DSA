#include <iostream>
using namespace std;


class student{

private:
    int age;
    string name;

public:

    int getage(){
        return age;
    }
    string getname(){
        return name;
    }

    void setage(int n){
        age=n;
    }
    
    void setname(string n){
        name=n;
    }

};


int main() {

    student ash;

//getting error since name is a private member
    // ash.name="ashmit"

    ash.setname("Ashmit");
    cout<<ash.getname()<<endl;

    ash.setage(20);
    cout<<ash.getage();
    
    return 0;
}