#include <iostream>
using namespace std;

class hal{

    int x;

    public:

    void set(int n){
        x=n;
    }

    int get(){
        return x;
    }

};

int main(){

    hal obj;
    obj.set(5);
    cout<<obj.get();

    return 0;
}