// We can directly access a static member of a class without having the need to create an instance of that class (object)


// static members need to be initialized outside

#include <iostream>
using namespace std;


class me{
public:
    static string name;
    static int age;
    string gender;
};


// :: = scope resolution operator

int me::age=19;
string me::name="Ash";

// can't be initialized since non-static
// string me::gender="male"


int main() {
    
    cout<<me::age<<endl;

    me a;
    a.age=21;
    cout<<a.age;


    return 0;
}