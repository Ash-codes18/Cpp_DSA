#include <iostream>
using namespace std;


class score{
    public:
        string subject;
        int marks;

    score(){
        cout<<"Constructor called"<<endl;
    }
    ~score(){
        cout<<"Destructor called"<<endl;
    }

};

int main() {


//for static allocation destructor gets called by itself
    score m;

//for dynamic allocation we have to manually call the destructor
    score *n = new score;
    delete n;


    return 0;
}