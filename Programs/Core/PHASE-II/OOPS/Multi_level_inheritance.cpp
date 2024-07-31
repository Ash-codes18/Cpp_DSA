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

class germanshepherd: public dog{

};


int main() {

    germanshepherd g;
    g.speak();
    cout<<g.legs;
    
    return 0;
}