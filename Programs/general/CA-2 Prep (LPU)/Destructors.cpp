#include <iostream>
using namespace std;

class sq{

public:
        int a;


        sq(int x){  //Parameterised Constructor --args passed
            a=x;
        }

        sq(sq& r){ //Copy-constructor- initialize new obj by old obj
            a=r.a;
        }

        ~sq(){  
            cout<<"Calling destructor"<<endl;
        }
};


int main(){
 

    sq s2(10);
    cout<<s2.a<<endl;

    sq s3(s2);
    cout<<s3.a<<endl;

    sq s4=s2;
    cout<<s4.a<<endl; 

    return 0;
}