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

class dog{

public:
    bool barks=true;
    bool wags=true;
    string cute="extremely";

    void who(){
        cout<<"I am a dog"<<endl;
    }

};

class germanshepherd: public dog ,public animal{

};


int main() {

    germanshepherd g;
    g.speak();
    cout<<g.legs<<endl;
    g.who();
    cout<<"Is cute? : "<<g.cute<<endl;

    
    return 0;
}