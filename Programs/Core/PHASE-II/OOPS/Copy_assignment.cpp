#include <iostream>
using namespace std;

class human{
    public:
            int age;
            string name;
            string sex;
            char blood;
            char sign;

    human(int age,string name,string sex,char blood,char sign){
        this->age=age;
        this->name=name;
        this->sex=sex;
        this->blood=blood;
        this->sign=sign;
    }

    void print(human a){
        cout<<"[ "<<a.age<<", "<<a.name<<", "<<a.sex<<", "<<a.blood<<a.sign<<" ]"<<endl;
    }

};


int main() {

    human hehe(12,"ronna","Male",'B','+');

    human huhu=hehe;

    // hehe.print(hehe);
    huhu.print(huhu);


    
    return 0;
}